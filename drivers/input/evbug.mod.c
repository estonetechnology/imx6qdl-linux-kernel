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
	{ 0x9d6c7518, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0x281b34e2, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0xdb428d43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x45de904c, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x1fe7c0e6, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xad29354c, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0xa94ce9df, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "65B0A26AD78122C417312C2");
