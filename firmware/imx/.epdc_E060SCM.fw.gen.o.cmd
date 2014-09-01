cmd_firmware/imx/epdc_E060SCM.fw.gen.o := /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/arm-eabi-gcc -Wp,-MD,firmware/imx/.epdc_E060SCM.fw.gen.o.d  -nostdinc -isystem /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/../lib/gcc/arm-eabi/4.6.x-google/include -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include -Iarch/arm/include/generated  -Iinclude -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/uapi -Iinclude/generated/uapi -include /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian  -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float         -c -o firmware/imx/epdc_E060SCM.fw.gen.o firmware/imx/epdc_E060SCM.fw.gen.S

source_firmware/imx/epdc_E060SCM.fw.gen.o := firmware/imx/epdc_E060SCM.fw.gen.S

deps_firmware/imx/epdc_E060SCM.fw.gen.o := \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/imx/epdc_E060SCM.fw.gen.o: $(deps_firmware/imx/epdc_E060SCM.fw.gen.o)

$(deps_firmware/imx/epdc_E060SCM.fw.gen.o):
