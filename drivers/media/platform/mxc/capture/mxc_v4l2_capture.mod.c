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
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x956d59e2, __VMLINUX_SYMBOL_STR(registered_fb) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x631cb49f, __VMLINUX_SYMBOL_STR(csi_enc_deselect) },
	{ 0xc77a97a, __VMLINUX_SYMBOL_STR(prp_enc_deselect) },
	{ 0x3f646d7b, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xdb428d43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x30db06bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x82b92d42, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x4f367728, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x6a0b2cbd, __VMLINUX_SYMBOL_STR(v4l2_int_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x190a2e0, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa66decaf, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0xbe873dc7, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x6771a4d7, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x761b20eb, __VMLINUX_SYMBOL_STR(prp_still_deselect) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xca55481b, __VMLINUX_SYMBOL_STR(prp_still_select) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xcbb2d37c, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0x54d00857, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xafd9dc5e, __VMLINUX_SYMBOL_STR(prp_enc_select) },
	{ 0xb4809281, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xbf2448ae, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7e14dc74, __VMLINUX_SYMBOL_STR(csi_enc_select) },
	{ 0x7b4c34d3, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x60721583, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x17f1f3db, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_0) },
	{ 0x5e94dd96, __VMLINUX_SYMBOL_STR(ipu_csi_init_interface) },
	{ 0x228bf29f, __VMLINUX_SYMBOL_STR(ipu_csi_set_window_pos) },
	{ 0xa76fca9b, __VMLINUX_SYMBOL_STR(ipu_csi_set_window_size) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfafa60c4, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x7bd4efe7, __VMLINUX_SYMBOL_STR(v4l2_int_device_unregister) },
	{ 0x2610ad91, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1561ac73, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb796b6c2, __VMLINUX_SYMBOL_STR(ipu_csi_enable_mclk) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x454b3916, __VMLINUX_SYMBOL_STR(v4l2_int_ioctl_1) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0xdce12536, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf0aa37df, __VMLINUX_SYMBOL_STR(bg_overlay_sdc_deselect) },
	{ 0xb9729003, __VMLINUX_SYMBOL_STR(foreground_sdc_deselect) },
	{ 0xd2a84747, __VMLINUX_SYMBOL_STR(bg_overlay_sdc_select) },
	{ 0x39d0857c, __VMLINUX_SYMBOL_STR(foreground_sdc_select) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipu_csi_enc,ipu_prp_enc,ipu_still,ipu_bg_overlay_sdc,ipu_fg_overlay_sdc";

MODULE_ALIAS("platform:v4l2-capture-imx5");
MODULE_ALIAS("platform:v4l2-capture-imx6");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-capture*");

MODULE_INFO(srcversion, "C10258488888A8F4D505CA8");
