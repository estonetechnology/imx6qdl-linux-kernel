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
	{ 0xcbb9a1ad, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x35b6d12b, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe292fb9f, __VMLINUX_SYMBOL_STR(gen_pool_virt_to_phys) },
	{ 0xf4f71fc3, __VMLINUX_SYMBOL_STR(gen_pool_alloc) },
	{ 0x3330a47d, __VMLINUX_SYMBOL_STR(gen_pool_free) },
	{ 0x190a2e0, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x31be35d5, __VMLINUX_SYMBOL_STR(of_get_named_gen_pool) },
	{ 0xa75b1ab1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xca16dbe7, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98cc564a, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xe3fff210, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xca237f50, __VMLINUX_SYMBOL_STR(devm_request_and_ioremap) },
	{ 0x842b674, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x3c07628c, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x2062cb63, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x30db06bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x61b40641, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x192f7709, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x5505858, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x8df50b5a, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xc98352b1, __VMLINUX_SYMBOL_STR(devm_kzalloc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa58dee99, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0x1ea06663, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x572d0104, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x2f3857e2, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd41fe818, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0x2e7be112, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xc277ef93, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x68a982ce, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x32fc6e23, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x1258d9d9, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x3f646d7b, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb4809281, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xbf2448ae, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7b4c34d3, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xdce12536, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:imx6q-mlb150");

MODULE_INFO(srcversion, "AD7E4E685DA4D5F673D16EA");
