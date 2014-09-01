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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd61eff61, __VMLINUX_SYMBOL_STR(ipu_init_channel) },
	{ 0x40b6173c, __VMLINUX_SYMBOL_STR(ipu_uninit_channel) },
	{ 0x4b9caed4, __VMLINUX_SYMBOL_STR(ipu_init_channel_buffer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9007598e, __VMLINUX_SYMBOL_STR(ipu_disable_channel) },
	{ 0x5d2bfe4f, __VMLINUX_SYMBOL_STR(ipu_enable_channel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x26db8090, __VMLINUX_SYMBOL_STR(ipu_disable_csi) },
	{ 0x3df19a81, __VMLINUX_SYMBOL_STR(ipu_clear_irq) },
	{ 0xc336aaba, __VMLINUX_SYMBOL_STR(ipu_free_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7b830b64, __VMLINUX_SYMBOL_STR(ipu_enable_csi) },
	{ 0x7706263b, __VMLINUX_SYMBOL_STR(ipu_select_buffer) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x3ee5210, __VMLINUX_SYMBOL_STR(ipu_request_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BDE88BD5C5063E65A2EF36A");
