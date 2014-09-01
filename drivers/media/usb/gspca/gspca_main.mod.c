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
	{ 0xdb428d43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc7b7bf3b, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdec0fa96, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x190a2e0, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb18cef3e, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xae72c0f3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x110bb5a4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x21a2cf43, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x4f367728, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa5652d15, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6c2f252d, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x93a08a54, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x21face19, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0xd88c5cd3, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x948fccad, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfafa60c4, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xb3300bd7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x9f0d2fd6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdea829bd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2f8aaff2, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x6a303787, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x72d0c24a, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xcf161be0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd54eb470, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x60721583, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc2fe86ea, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xe82b612e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xbfa6a63a, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x114b827d, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x7a94e15c, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2ba9af91, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x5675b0c2, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb4f106a9, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7a1430fe, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x918b709e, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xdce12536, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x59f47cea, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x480aa1ba, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x646cf8f4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x79ee8bf3, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2e0ccef2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x2a76bec4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4DFDEDC74050A350E879D49");
