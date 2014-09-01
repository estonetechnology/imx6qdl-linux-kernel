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
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x66c7e2d8, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x24f7b517, __VMLINUX_SYMBOL_STR(v4l2_event_queue_fh) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x190a2e0, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xda79468c, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x1bee1182, __VMLINUX_SYMBOL_STR(usb_debug_root) },
	{ 0x2bfd1504, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xcbb2d37c, __VMLINUX_SYMBOL_STR(video_usercopy) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0xb18cef3e, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x1ede8572, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x7a78f190, __VMLINUX_SYMBOL_STR(v4l2_event_dequeue) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x21a2cf43, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f367728, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa5652d15, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x982aaaed, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xd48c13b, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0xa297e1f2, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe6fce6f2, __VMLINUX_SYMBOL_STR(v4l2_ctrl_merge) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5dccc486, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x6c2f252d, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xa62309, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1d0a50c1, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xc01e96b7, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0xa66decaf, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf244b8cc, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd88c5cd3, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x967bc92c, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x948fccad, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb77b0159, __VMLINUX_SYMBOL_STR(v4l2_prio_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfafa60c4, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xb3300bd7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x6021db0c, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xca3fd2ce, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x463216f9, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xe737ff50, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x131b3c90, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xdea829bd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3a7b63e4, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x6a303787, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x21043004, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xbc5671dc, __VMLINUX_SYMBOL_STR(v4l_printk_ioctl) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x16244fe5, __VMLINUX_SYMBOL_STR(v4l2_prio_check) },
	{ 0xd54eb470, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc12cf8f8, __VMLINUX_SYMBOL_STR(v4l2_ctrl_replace) },
	{ 0xd54bc13e, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x8b9b5b72, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x60721583, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xc2fe86ea, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xe7f65395, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x52d1cb75, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x114b827d, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x580a7368, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x8d2e4350, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xce46e140, __VMLINUX_SYMBOL_STR(ktime_get_ts) },
	{ 0x882da053, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2ba9af91, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x3bdd0f94, __VMLINUX_SYMBOL_STR(v4l2_prio_change) },
	{ 0xba86eded, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf4c6f15e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbbaa3f89, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x110b9e3f, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8106095a, __VMLINUX_SYMBOL_STR(v4l2_prio_max) },
	{ 0x5675b0c2, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca768cce, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7a1430fe, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xd47389e6, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0xa008bb0d, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5162d52, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0xdce12536, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x59f47cea, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7e56eb25, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x2e0ccef2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4da7ff09, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xb4192e9e, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x2a76bec4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x353ae2dc, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-vmalloc";

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");

MODULE_INFO(srcversion, "BFBE64AD3518D556E9A4DAF");
