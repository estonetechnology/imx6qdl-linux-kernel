cmd_arch/arm/boot/dts/imx6dl-sabresd.dtb := /home/mqddb/Documents/kafeiji/compile_opt/arm-eabi-4.6/bin/arm-eabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.imx6dl-sabresd.dtb.d.pre.tmp -nostdinc -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/boot/dts -I/media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/boot/dts/include -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6dl-sabresd.dtb.dts.tmp arch/arm/boot/dts/imx6dl-sabresd.dts ; /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6dl-sabresd.dtb -b 0 -i arch/arm/boot/dts/  -d arch/arm/boot/dts/.imx6dl-sabresd.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6dl-sabresd.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6dl-sabresd.dtb.d.pre.tmp arch/arm/boot/dts/.imx6dl-sabresd.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6dl-sabresd.dtb.d

source_arch/arm/boot/dts/imx6dl-sabresd.dtb := arch/arm/boot/dts/imx6dl-sabresd.dts

deps_arch/arm/boot/dts/imx6dl-sabresd.dtb := \
  arch/arm/boot/dts/imx6dl.dtsi \
  arch/arm/boot/dts/imx6dl-pinfunc.h \
  arch/arm/boot/dts/imx6qdl.dtsi \
  arch/arm/boot/dts/skeleton.dtsi \
  /media/SDK/workspace/kafeiji/code/kernel_imx_2_core/arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/imx6qdl-sabresd.dtsi \

arch/arm/boot/dts/imx6dl-sabresd.dtb: $(deps_arch/arm/boot/dts/imx6dl-sabresd.dtb)

$(deps_arch/arm/boot/dts/imx6dl-sabresd.dtb):
