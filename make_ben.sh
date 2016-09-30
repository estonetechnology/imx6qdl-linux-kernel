#!/bin/bash

echo "build uboot"
source /opt/poky/2.0.2/environment-setup-cortexa9hf-vfp-neon-poky-linux-gnueabi
export ARCH=arm
export CROSS_COMPILE=arm-poky-linux-gnueabi-

#make hio-imx6dl-board_defconfig
make -j8 zImage
#make -j8 uImage LOADADDR=0x10008000
make hio-imx6dl-board.dtb

rm zImage uImage
rm *.dtb
cp arch/arm/boot/zImage ./
cp arch/arm/boot/uImage ./
cp arch/arm/boot/dts/*.dtb ./

echo "build end"
