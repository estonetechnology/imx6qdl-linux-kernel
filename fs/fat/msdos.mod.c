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
	{ 0x8d870a94, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x69cfa12a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xfe9b9c83, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xb9eb36b2, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x17f99ddb, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0xfcb6572a, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xa5652d15, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2f3d3447, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xb925971, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xab2bd40f, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0xd1841e08, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x71de559e, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xd66830f, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xe7d77788, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0xe2f87027, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdea829bd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x72cf6ed, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x62573a91, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe043d434, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x1f05eee9, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x301b6a23, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x6ca9743f, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0xb96eec60, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x32545187, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb23a8f38, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x67c755b1, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x93372e6a, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xde96f787, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xe6b6ef01, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x84c828d6, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x75284c77, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0x43039c87, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xa288bfb4, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "880BEF7976D282420615997");
