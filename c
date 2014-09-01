echo on
make uImage -j36 LOADADDR=0x10008000
make dtbs
