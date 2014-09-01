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
	{ 0x76ecc473, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x558a5c41, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc0aff8b7, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xa6f90c8f, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xe6b6ef01, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x1c1c1ad8, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xb603cd3, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0xb96eec60, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7e6a7ab2, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x1045dfc0, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x6536596d, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xbf1b2168, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0x3ca6f06c, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x1459f0f3, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x88884107, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x626867f9, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x2ad6b328, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x21000222, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0xd702e480, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x7b6646bb, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x2291bab6, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x73956990, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x43039c87, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x42cbf0d4, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x41869fa9, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x5681cd9f, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa5652d15, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x32bd2360, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xdea829bd, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x19de6617, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xbad00216, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xb3038d6a, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x69cfa12a, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xa58dee99, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0x1ea06663, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x9b8b007, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa7f14deb, __VMLINUX_SYMBOL_STR(mount_single) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94E4CE2E390B0EECC8654D6");
