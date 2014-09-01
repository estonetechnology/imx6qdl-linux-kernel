
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/i2c.h>
#include <linux/interrupt.h>
#include <linux/input.h>
#include <linux/irq.h>
#include <linux/gpio.h>
#include <linux/delay.h>
#include <linux/slab.h>
#include <linux/bitops.h>
#include <linux/input/mt.h>
#include <linux/io.h>

#define MCU_CMD_POWEROFF 0xaa
#define MCU_CMD_READ_ETHNET_MAC_ADDR 0xab
#define MCU_CMD_READ_WIFI_MAC_ADDR 0xac
unsigned char mcu_cmd[1] ;
unsigned char mac_buf[6];
struct i2c_client m_client;
unsigned char mac_addr[6];

/*
 * calibration default value
   Read DQS Gating calibration
   MPDGCTRL0 PHY0 (0x021b083c) = 0x42480248
   MPDGCTRL1 PHY0 (0x021b0840) = 0x021C0230
   MPDGCTRL0 PHY1 (0x021b483c) = 0x42300238
   MPDGCTRL1 PHY1 (0x021b4840) = 0x021C0228

   Read calibration
   MPRDDLCTL PHY0 (0x021b0848) = 0x4C424A4A
   MPRDDLCTL PHY1 (0x021b4848) = 0x4A4A4E48

   Write calibration
   MPWRDLCTL PHY0 (0x021b0850) = 0x34342C2E
   MPWRDLCTL PHY1 (0x021b4850) = 0x3A36362C

   __raw_writel(0x10E0180, ioremap(0x020c4060, 4));
 */
unsigned long ddr3_calibration_default[][2] = {
  {0x021b083c, 0x42480248},
  {0x021b0840, 0x021C0230},
  {0x021b483c, 0x42300238},
  {0x021b4840, 0x021C0228},
  {0x021b0848, 0x4C424A4A},
  {0x021b4848, 0x4A4A4E48},
  {0x021b0850, 0x34342C2E},
  {0x021b4850, 0x3A36362C},
};

void calibration_mmc (void)
{
	printk("MQ==%s\n", __FUNCTION__);
   int ret = 0, i, j;
   unsigned long data = 0;
   int size = ARRAY_SIZE(ddr3_calibration_default);
   mcu_cmd[0] = 95;

   for (i = 0; i < size; ++i)
   {
   	/* code */
   	data = 0;
   	for (j = 0; j < 4; ++j)
   	{
   		/* code */
   		ret=0;
		while(ret<=0)
		{
			mcu_cmd[0]= mcu_cmd[0] + j;
			printk("send mcu command:%02x\n",mcu_cmd[0]);
			ret = i2c_master_send(&m_client, (unsigned char *)mcu_cmd, 1);
			if (ret>0)
			{
				printk("send mcu command ok...\n");
				msleep(50);
				i2c_master_recv(&m_client, mac_buf, 1);
				printk("get one byte:%x\n", mac_buf[0]);
				data = data | mac_buf[0] << j;
			}
			else
			{
				printk("send mcu command failed...\n");
				msleep(500);
			}
		}
   	}

   	printk("get data:0x%x \n", data);
   	if (data == 0xffffffff)
   	{
   		/* code */
   		printk("write default ddr calibration value\n");
   		__raw_writel(ddr3_calibration_default[i][1], ioremap(ddr3_calibration_default[i][0], 4));
   	} else {
   		printk("write new ddr calibration value:%x\n", data);
   		__raw_writel(data, ioremap(ddr3_calibration_default[i][0], 4));
   	}

   }

}

int read_ethnet_mac_addr(void)
{

	unsigned char mac_buf[1];
	int ret=0,ret1;
	int i=0;
	for (i=0;i<6;i++)
	{
		ret=0;
		while(ret<=0)
		{
			mcu_cmd[0]=i;
			printk("send command:%02x\n",mcu_cmd[0]);
			ret = i2c_master_send(&m_client, (unsigned char *)mcu_cmd, 1);
			if (ret>0)
			{
				printk("send ethnet command ok...\n");
				msleep(50);
				i2c_master_recv(&m_client, mac_buf, 1);
				mac_addr[i]=mac_buf[0];
			}
			else
			{
				printk("send ethnet command failed...\n");
				msleep(500);
			}
		}
	}
	printk("ethnet address mac address:%02x:%02x:%02x:%02x:%02x:%02x\n",mac_addr[0],mac_addr[1],mac_addr[2],mac_addr[3],mac_addr[4],mac_addr[5]);
	return 0;
}
//read wifi mac address 
int read_wifi_mac_addr(void)
{
	int ret=0;
	int i=0;
	mcu_cmd[0]=MCU_CMD_READ_ETHNET_MAC_ADDR;
	for (i=0;i<1;i++)
	{
		ret = i2c_master_recv(&m_client,mac_buf , 6);
		if (ret>=6)
		{
			printk("********i2c(2) recv wifi address ok**************\n");
			printk("wifi mac address:%02x:%02x:%02x:%02x:%02x:%02x\n",mac_buf[0],mac_buf[1],mac_buf[2],mac_buf[3],mac_buf[4],mac_buf[5]);
			break;
		}
		else
			printk("********i2c(2) receive wifi address failed***********\n");
	}
	return 0;
}

static int board_poweroff(void)
{
	printk("MQ===================%s==============================\n", __FUNCTION__);
	//ret = i2c_smbus_wirte_byte_data(client, 0x00, 0xaa);
	int ret=0;
	int i=0;
	mcu_cmd[0]=MCU_CMD_POWEROFF;
	for (i=0;i<3;i++)
	{
		ret = i2c_master_send(&m_client, (unsigned char *)mcu_cmd, 1);
		if (ret>0)
		{
			printk("********i2c(2) send data:%0x**************\n",mcu_cmd[0]);
			break;
		}
		else
			printk("********i2c(2) send data failed***********\n");
	}
	return ret;

}

unsigned char buffer[32];
static ssize_t get_mac_id(struct device *dev,
	struct device_attribute *attr, const char *buf, size_t count)
{
	return sprintf(buf, "%02x:%02x:%02x:%02x:%02x:%02x",mac_addr[0],mac_addr[1],mac_addr[2],mac_addr[3],mac_addr[4],mac_addr[5]);
}

static DEVICE_ATTR(mac_id, S_IRUGO, get_mac_id, NULL);

struct kobject *mac_id_kobj1;

static void mac_id_sys_init(void)
{
	int ret;

	printk(KERN_INFO "mac_id_sys_init: start ********************************\n");
	mac_id_kobj1 = kobject_create_and_add("mac_id", NULL);
	if( mac_id_kobj1 == NULL )
	{
		printk(KERN_ERR "mac_id: kobject_create_and_add failed\n");
		return;
	}

	ret = sysfs_create_file(mac_id_kobj1, &dev_attr_mac_id.attr);
	if (ret) {
		printk(KERN_ERR "%s: sysfs_create_version_file failed\n", __func__);
		return;
	}
}

static int mega48_probe(struct i2c_client *client,
						       const struct i2c_device_id *id)
{
	printk("MQ===================%s==============================\n", __FUNCTION__);
	mac_id_sys_init();
	if (!i2c_check_functionality(client->adapter, I2C_FUNC_SMBUS_BYTE_DATA)) {
		printk("mega48 i2c fail ---%s\n", __FUNCTION__);	
	}
	memcpy(&m_client,client,sizeof(*client));
	read_ethnet_mac_addr();
	//calibration_mmc(); not use first
	pm_power_off = board_poweroff;

	return 0;
}

static int mega48_remove(struct i2c_client *client)
{
	printk("MQ===================%s==============================\n", __FUNCTION__);
	return 0;
}



static const struct i2c_device_id mega48_id[] = {
		{"mega48", 0},
			{ }
};

static const struct of_device_id mega48_dt_ids[] = {
		{ .compatible = "fsl,mega48-i2c", },
			{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, mega48_dt_ids);

static struct i2c_driver mega48_driver = {
		.driver = {
		.name	= "mega48",
		.owner	= THIS_MODULE,
		.of_match_table = mega48_dt_ids,
		},
		.id_table	= mega48_id,
		.probe		= mega48_probe,
		.remove		= mega48_remove,
};

module_i2c_driver(mega48_driver);

MODULE_AUTHOR("mq <maqiang@shencloudtech.com>");
MODULE_DESCRIPTION("power ic for kafeiji");
MODULE_LICENSE("GPL");
