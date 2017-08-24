/*
 * Copyright 2014 Dmitry Lavnikevich,
 * SaM Solutions <d.lavnikevich at sam-solutions.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/module.h>
#include <linux/i2c.h>
#include <linux/of.h>
#include <linux/of_platform.h>

#include "../codecs/tlv320aic3x.h"
#include "imx-audmux.h"
#include "imx-ssi.h"

#define CODEC_CLOCK 24000000


/* machine dapm widgets */
static const struct snd_soc_dapm_widget aic3x_dapm_widgets[] = {
	SND_SOC_DAPM_LINE("Line Out", NULL),
	SND_SOC_DAPM_LINE("Speaker", NULL),
	SND_SOC_DAPM_HP("Headphone Jack", NULL),
	SND_SOC_DAPM_MIC("Mic Jack", NULL),
	SND_SOC_DAPM_LINE("Line In", NULL),
};

static int imx_audmux_config(int int_port, int ext_port)
{
	unsigned int ptcr, pdcr;

	int_port--;
	ext_port--;
	ptcr = IMX_AUDMUX_V2_PTCR_TFSDIR |
		IMX_AUDMUX_V2_PTCR_TFSEL(ext_port) |
		IMX_AUDMUX_V2_PTCR_TCLKDIR |
		IMX_AUDMUX_V2_PTCR_TCSEL(ext_port);
	pdcr = IMX_AUDMUX_V2_PDCR_RXDSEL(ext_port);
	imx_audmux_v2_configure_port(int_port, ptcr, pdcr);

	ptcr = 0;
	pdcr = IMX_AUDMUX_V2_PDCR_RXDSEL(int_port);
	imx_audmux_v2_configure_port(ext_port, ptcr, pdcr);

	return 0;
}

/* Logic for a aic3x as connected on a imx */
static int imx_aic3x_init(struct snd_soc_pcm_runtime *rtd)
{
	int ret;

	ret = snd_soc_dai_set_sysclk(rtd->codec_dai, 0, CODEC_CLOCK,
		SND_SOC_CLOCK_IN);
	if (ret < 0)
		return ret;

	return 0;
}

static struct snd_soc_dai_link imx_tlv320_dai = {
	.name = "HiFi",
	.stream_name = "HiFi",
	.codec_dai_name = "tlv320aic3x-hifi",
	.init = &imx_aic3x_init,
	.dai_fmt = SND_SOC_DAIFMT_I2S |
		SND_SOC_DAIFMT_NB_NF |
		SND_SOC_DAIFMT_CBM_CFM,
};

static struct snd_soc_card imx_tlv320_card = {
	.num_links = 1,
	.owner = THIS_MODULE,
	.dai_link = &imx_tlv320_dai,
	.dapm_widgets = aic3x_dapm_widgets,
	.num_dapm_widgets = ARRAY_SIZE(aic3x_dapm_widgets),
};

static int imx_tlv320_probe(struct platform_device *pdev)
{
	struct device_node *np = pdev->dev.of_node;
	struct device_node *ssi_np, *codec_np;
	struct platform_device *ssi_pdev;
	struct i2c_client *codec_dev;
	int int_port, ext_port;
	int ret = 0;

	ret = of_property_read_u32(np, "mux-int-port", &int_port);
	if (ret) {
		dev_err(&pdev->dev, "mux-int-port missing or invalid\n");
		return ret;
	}
	ret = of_property_read_u32(np, "mux-ext-port", &ext_port);
	if (ret) {
		dev_err(&pdev->dev, "mux-ext-port missing or invalid\n");
		return ret;
	}

	imx_audmux_config(int_port, ext_port);

	ssi_np = of_parse_phandle(pdev->dev.of_node, "ssi-controller", 0);
	codec_np = of_parse_phandle(pdev->dev.of_node, "audio-codec", 0);
	if (!ssi_np || !codec_np) {
		dev_err(&pdev->dev, "phandle missing or invalid\n");
		ret = -EINVAL;
		goto fail;
	}

	ssi_pdev = of_find_device_by_node(ssi_np);
	if (!ssi_pdev) {
		dev_err(&pdev->dev, "failed to find SSI platform device\n");
		ret = -EPROBE_DEFER;
		goto fail;
	}
	codec_dev = of_find_i2c_device_by_node(codec_np);
	if (!codec_dev) {
		dev_err(&pdev->dev, "failed to find codec platform device\n");
		return -EPROBE_DEFER;
	}

	imx_tlv320_dai.codec_of_node = codec_np;
	imx_tlv320_dai.cpu_of_node = ssi_np;
	imx_tlv320_dai.platform_of_node = ssi_np;

	imx_tlv320_card.dev = &pdev->dev;
	ret = snd_soc_of_parse_card_name(&imx_tlv320_card, "model");
	if (ret)
		goto fail;
	ret = snd_soc_of_parse_audio_routing(&imx_tlv320_card, "audio-routing");
	if (ret)
		goto fail;

	platform_set_drvdata(pdev, &imx_tlv320_card);

	ret = devm_snd_soc_register_card(&pdev->dev, &imx_tlv320_card);
	if (ret) {
		dev_err(&pdev->dev, "snd_soc_register_card failed (%d)\n", ret);
		goto fail;
	}

	of_node_put(ssi_np);
	of_node_put(codec_np);

	return 0;

fail:
	if (ssi_np)
		of_node_put(ssi_np);
	if (codec_np)
		of_node_put(codec_np);

	return ret;
}

static const struct of_device_id imx_tlv320_dt_ids[] = {
	{ .compatible = "fsl,imx-audio-tlv320aic3x", },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, imx_tlv320_dt_ids);

static struct platform_driver imx_tlv320_driver = {
	.driver = {
		.name = "tlv320aic3x",
		.owner = THIS_MODULE,
		.pm = &snd_soc_pm_ops,
		.of_match_table = imx_tlv320_dt_ids,
	},
	.probe = imx_tlv320_probe,
};
module_platform_driver(imx_tlv320_driver);

MODULE_AUTHOR("Lavnikevich Dmitry");
MODULE_DESCRIPTION("TLV320AIC3X i.MX6 ASoC driver");
MODULE_LICENSE("GPL");