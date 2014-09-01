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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbe873dc7, __VMLINUX_SYMBOL_STR(ipu_get_soc) },
	{ 0x484fbf21, __VMLINUX_SYMBOL_STR(ipu_check_task) },
	{ 0xc755e3aa, __VMLINUX_SYMBOL_STR(ipu_queue_task) },
	{ 0x1561ac73, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xd61eff61, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x40b6173c, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0x4b9caed4, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9007598e, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0x5d2bfe4f, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5deb5c9d, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_csi) },
	{ 0x26db8090, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0x3df19a81, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xc336aaba, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0x5f55ad54, __VMLINUX_SYMBOL_STR(mipi_csi2_get_bind_ipu) },
	{ 0xda5fc374, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_enable) },
	{ 0xf17b0fe8, __VMLINUX_SYMBOL_STR(ipu_csi_get_sensor_protocol) },
	{ 0xe04d46e2, __VMLINUX_SYMBOL_STR(mipi_csi2_get_status) },
	{ 0x99161f73, __VMLINUX_SYMBOL_STR(mipi_csi2_get_info) },
	{ 0x7b830b64, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x7e2311d4, __VMLINUX_SYMBOL_STR(mipi_csi2_pixelclk_disable) },
	{ 0x7706263b, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xfb309f7c, __VMLINUX_SYMBOL_STR(mipi_csi2_get_virtual_channel) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3ee5210, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
	{ 0xa4d13813, __VMLINUX_SYMBOL_STR(mipi_csi2_get_datatype) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9EA232B98F68B72D74FBEF4");
