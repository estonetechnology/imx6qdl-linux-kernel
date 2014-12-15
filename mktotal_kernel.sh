#!/bin/bash
root_path=$(pwd)

if [ "$1" == "VKI" ]
then
	echo "Use $1"
	configed=1
elif [ "$1" == "RII" ]
then
	echo "Use $1"
	configed=1
else
	echo "----------------------------------------------------------------"
	echo "Please choose below type:"
    	echo "VKI"
	echo "RII"
	echo "Example:"
	echo "        ./mktotal.sh VKI"
    configed=0
fi

TYPE_FILE=./include/linux/SHEN_TYPE.h
if [ "$configed" == "1" ] 
then
	echo "----------------------------------------------------------------"
	perl -pi -e 's/\#define CUR_SHEN_TYPE .*/\#define CUR_SHEN_TYPE TYPE_'"$1"'/g' $TYPE_FILE
	cat $TYPE_FILE | grep "CUR_SHEN_TYPE"
	echo "----------------------------------------------------------------"
	make ARCH=arm CROSS_COMPILE=arm-eabi- distclean
	
	if [ "$1" == "VKI" ]
	then
		make ARCH=arm CROSS_COMPILE=arm-eabi- imx_v7_vki_defconfig
	elif [ "$1" == "RII" ]
	then
		make ARCH=arm CROSS_COMPILE=arm-eabi- imx_v7_defconfig
	fi
	
	echo "Start compile $1 ......"
	if [ -f arch/arm/boot/uImage ]
	then
		echo "Remove old uImage"
		rm -rf arch/arm/boot/uImage
		echo [Done]
		echo "----------------------------------------------------------------"
	fi
	
	if [ -f dts/imx6dl-sabresd.dtb ]
	then
		echo "Remove old uImage"
		rm -rf dts/imx6dl-sabresd.dtb
		echo [Done]
		echo "----------------------------------------------------------------"
	fi

	#make ARCH=arm CROSS_COMPILE=arm-eabi- uImage -j16
	make uImage -j36 LOADADDR=0x10008000
	make dtbs
	echo "----------------------------------------------------------------"

	echo "Create new uImage_$1"
	cp arch/arm/boot/uImage   arch/arm/boot/uImage_$1_$(date +"%Y%m%d%H")
	cp dts/imx6dl-sabresd.dtb dts/imx6dl-sabresd_$1_$(date +"%Y%m%d%H").dtb
	echo [Done]
	echo "----------------------------------------------------------------"
	echo "New image files md5sum:"
	md5sum  arch/arm/boot/uImage_$1_$(date +"%Y%m%d%H") > ./uImage_$1_$(date +"%Y%m%d%H")_md5
	md5sum  dts/imx6dl-sabresd_$1_$(date +"%Y%m%d%H").dtb > ./imx6dl-sabresd_$1_$(date +"%Y%m%d%H").dtb_md5
	mv arch/arm/boot/uImage_$1_$(date +"%Y%m%d%H") ./
	mv dts/imx6dl-sabresd_$1_$(date +"%Y%m%d%H").dtb ./
	echo [Done]
fi
