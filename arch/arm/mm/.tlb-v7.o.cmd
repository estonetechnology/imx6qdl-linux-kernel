cmd_arch/arm/mm/tlb-v7.o := /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mm/.tlb-v7.o.d  -nostdinc -isystem /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/../lib/gcc/arm-eabi/4.6.x-google/include -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/uapi -Iinclude/generated/uapi -include /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float      -Wa,-march=armv7-a   -c -o arch/arm/mm/tlb-v7.o arch/arm/mm/tlb-v7.S

source_arch/arm/mm/tlb-v7.o := arch/arm/mm/tlb-v7.S

deps_arch/arm/mm/tlb-v7.o := \
    $(wildcard include/config/arm/errata/720789.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/linux/linkage.h \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/linkage.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/hwcap.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/uapi/asm/hwcap.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/opcodes-virt.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/page.h \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/arm/lpae.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  include/asm-generic/getorder.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/tlbflush.h \
    $(wildcard include/config/smp/on/up.h) \
    $(wildcard include/config/cpu/tlb/v4wt.h) \
    $(wildcard include/config/cpu/tlb/fa.h) \
    $(wildcard include/config/cpu/tlb/v4wbi.h) \
    $(wildcard include/config/cpu/tlb/feroceon.h) \
    $(wildcard include/config/cpu/tlb/v4wb.h) \
    $(wildcard include/config/cpu/tlb/v6.h) \
    $(wildcard include/config/cpu/tlb/v7.h) \
    $(wildcard include/config/arm/errata/798181.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/glue.h \
  arch/arm/mm/proc-macros.S \
    $(wildcard include/config/cpu/dcache/writethrough.h) \
    $(wildcard include/config/pm/sleep.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \

arch/arm/mm/tlb-v7.o: $(deps_arch/arm/mm/tlb-v7.o)

$(deps_arch/arm/mm/tlb-v7.o):
