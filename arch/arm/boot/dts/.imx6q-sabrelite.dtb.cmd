cmd_arch/arm/boot/dts/imx6q-sabrelite.dtb := /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/arm-eabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.pre.tmp -nostdinc -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/boot/dts -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6q-sabrelite.dtb.dts.tmp arch/arm/boot/dts/imx6q-sabrelite.dts ; /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6q-sabrelite.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6q-sabrelite.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.pre.tmp arch/arm/boot/dts/.imx6q-sabrelite.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6q-sabrelite.dtb.d

source_arch/arm/boot/dts/imx6q-sabrelite.dtb := arch/arm/boot/dts/imx6q-sabrelite.dts

deps_arch/arm/boot/dts/imx6q-sabrelite.dtb := \
  arch/arm/boot/dts/imx6q.dtsi \
  arch/arm/boot/dts/imx6q-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \

arch/arm/boot/dts/imx6q-sabrelite.dtb: $(deps_arch/arm/boot/dts/imx6q-sabrelite.dtb)

$(deps_arch/arm/boot/dts/imx6q-sabrelite.dtb):
