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
	{ 0x2610ad91, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xdb428d43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x190a2e0, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x246ebc9, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xc53f7521, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x4a752506, __VMLINUX_SYMBOL_STR(ps2_handle_ack) },
	{ 0xf75fe7e5, __VMLINUX_SYMBOL_STR(ps2_sendbyte) },
	{ 0x4bb628fb, __VMLINUX_SYMBOL_STR(ps2_handle_response) },
	{ 0x92b4c40, __VMLINUX_SYMBOL_STR(input_mt_report_finger_count) },
	{ 0x419f7aef, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd7e248eb, __VMLINUX_SYMBOL_STR(ps2_end_command) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa5652d15, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4c889490, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0xbf08bb67, __VMLINUX_SYMBOL_STR(ps2_drain) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x42248b97, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5b988312, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0xb8dcf62b, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xa62309, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x94b6ff0d, __VMLINUX_SYMBOL_STR(serio_unregister_child_port) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x8f8160e1, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x30db06bf, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd88c5cd3, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x676bb9d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdea829bd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x51b59ccb, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x23b177b, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x43068d7b, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x82b92d42, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x70d49b84, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x87dbf7c8, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf07b6246, __VMLINUX_SYMBOL_STR(ps2_command) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc2fe86ea, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x114b827d, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xaf8b2627, __VMLINUX_SYMBOL_STR(ps2_init) },
	{ 0x17b37fa4, __VMLINUX_SYMBOL_STR(serio_reconnect) },
	{ 0xa2f69220, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2ba9af91, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd52710ae, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xc3ecd373, __VMLINUX_SYMBOL_STR(ps2_cmd_aborted) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc4e1deb1, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xfdd36a9c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xdce12536, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb875261b, __VMLINUX_SYMBOL_STR(ps2_begin_command) },
	{ 0x76937cbe, __VMLINUX_SYMBOL_STR(input_mt_assign_slots) },
	{ 0x2a76bec4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "E097D5CC711A96748C8FB5B");
