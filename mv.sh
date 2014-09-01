#!/bin/bash
img_path=/media/SDK/workspace/kafeiji/img/img_v2/
cp dts/imx6dl-sabresd.dtb ${img_path}
cp arch/arm/boot/uImage ${img_path}
ll ${img_path}
