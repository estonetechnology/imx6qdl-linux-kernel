#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd3b69060, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2bfd1504, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xcbb9a1ad, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x35b6d12b, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0xfafa60c4, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3793c801, __VMLINUX_SYMBOL_STR(csi_stop_callback) },
	{ 0x7bd4efe7, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x381fc082, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9172408b, __VMLINUX_SYMBOL_STR(csi_set_12bit_imagpara) },
	{ 0x97a5b4ff, __VMLINUX_SYMBOL_STR(csi_set_16bit_imagpara) },
	{ 0x718da0db, __VMLINUX_SYMBOL_STR(csi_init_format) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2de84ffe, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6ca545f, __VMLINUX_SYMBOL_STR(csi_dmareq_rff_disable) },
	{ 0x385d2647, __VMLINUX_SYMBOL_STR(csi_dmareq_rff_enable) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x3f646d7b, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x6d1b6d2e, __VMLINUX_SYMBOL_STR(csi_disable_int) },
	{ 0xdb428d43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x4f367728, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6a0b2cbd, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x662214be, __VMLINUX_SYMBOL_STR(csi_start_callback) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x190a2e0, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa66decaf, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xcbb2d37c, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0x54d00857, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4809281, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xbf2448ae, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7b4c34d3, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x60721583, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x1561ac73, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x17f1f3db, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_0) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x454b3916, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_1) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdce12536, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaac1bca4, __VMLINUX_SYMBOL_STR(csi_enable_int) },
	{ 0x7a41f6bb, __VMLINUX_SYMBOL_STR(csi_regbase) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fsl_csi";

MODULE_ALIAS("of:N*T*Cfsl,imx6sl-csi-v4l2*");

MODULE_INFO(srcversion, "4822DFF627CEB71E7237BA8");
