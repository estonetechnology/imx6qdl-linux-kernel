cmd_arch/arm/lib/delay-loop.o := /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/arm-eabi-gcc -Wp,-MD,arch/arm/lib/.delay-loop.o.d  -nostdinc -isystem /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/../lib/gcc/arm-eabi/4.6.x-google/include -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/uapi -Iinclude/generated/uapi -include /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o arch/arm/lib/delay-loop.o arch/arm/lib/delay-loop.S

source_arch/arm/lib/delay-loop.o := arch/arm/lib/delay-loop.S

deps_arch/arm/lib/delay-loop.o := \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
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
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/delay.h \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/virt/to/bus.h) \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/uapi/linux/const.h \
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
  include/linux/sizes.h \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  arch/arm/include/generated/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  include/uapi/asm-generic/param.h \

arch/arm/lib/delay-loop.o: $(deps_arch/arm/lib/delay-loop.o)

$(deps_arch/arm/lib/delay-loop.o):
