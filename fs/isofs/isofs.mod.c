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
	{ 0x411f91d5, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x97271225, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xdb428d43, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb758de14, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x5ef05574, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0xb1fa894a, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xe8727ada, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x8aca7807, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x11eef4e1, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x3ce26143, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x7cb921ce, __VMLINUX_SYMBOL_STR(grab_cache_page_nowait) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x80a25b88, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xa5652d15, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2f3d3447, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xeac9db15, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x751bb303, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc4a42695, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x21b16398, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xac0d25c1, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf46eaef1, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x7096aca6, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x76e3f3e4, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x72cf6ed, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xdea829bd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcb968b64, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xb02b92fd, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xc9251179, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x1f05eee9, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xeaceef3, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xf33c7efa, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x9828a530, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbf8e2460, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xea45bfba, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x45b40c, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x95131108, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x301b6a23, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x15c1eda6, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0xa6e64082, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb96eec60, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x73956990, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85d3a8fa, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0xb23a8f38, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x22f4cea9, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x73951298, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x7ee55a33, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x22d9e0e6, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xe6b6ef01, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xe61552f, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb083d514, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3925e187, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x9ed1d692, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "692F7D7CEEC43EAE9D644C1");
