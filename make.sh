#!/bin/bash

echo "build kernel"
export ARCH=arm
export CROSS_COMPILE=/opt/gcc-linaro-arm-linux-gnueabihf-4.7-2013.04-20130415_linux/bin/arm-linux-gnueabihf-

make hio-imx6dl-ppc4107_defconfig
make -j16;
make hio-imx6dl-ppc4107.dtb;

make modules_install INSTALL_MOD_PATH=./install


echo "build end"

