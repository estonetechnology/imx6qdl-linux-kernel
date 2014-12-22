/*
* created by wwj
*
*
*
*/
#include <linux/module.h>
#include <linux/init.h>
#include <linux/i2c.h>
#include <linux/delay.h>
#include <linux/string.h>
#include <linux/memory.h>

#define MAC_ID_ADDR_START 0x00
#define MAC_ID_SIZE		6

static struct i2c_client* ac24cxx_client;
static unsigned char mac_addr[6];

static ssize_t set_macid(struct device* dev, struct device_attribute* attr, const char* buf, size_t count)
{
    char macid[18];
    char* p = macid;
    char* mac;
    int i = 0, ret;
    u8 addr;
    char tmp[5];

    memset(macid, 0, 18);
    strncpy(macid, buf, 17);
    macid[17] = '\0';

    while(mac = strsep(&p, ":")){
    	//printk("WWJ======mac = %s\n", mac);
    	mac_addr[i] = simple_strtoul(mac, NULL, 16);
    	i++;
    }

    i = 0;
    for(addr = MAC_ID_ADDR_START; addr < (MAC_ID_ADDR_START + MAC_ID_SIZE); addr++){
    	//printk("WWJ======== set MAC[%d]:0x%x\n", i, mac_addr[i]);
    	ret = i2c_smbus_write_word_data(ac24cxx_client, addr, mac_addr[i]);
    	i++;
    }

    return count;
}

static ssize_t show_macid(struct device *dev, struct device_attribute *attr, char *buf)
{
        return sprintf(buf, "%02x:%02x:%02x:%02x:%02x:%02x", mac_addr[0], mac_addr[1],
        	mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
}

static DEVICE_ATTR(MAC_ADDR, 0600, show_macid, set_macid);

static int read_macid(struct i2c_client* client)
{
	u32 index = 0, i;
	for(i = MAC_ID_ADDR_START; i < (MAC_ID_ADDR_START+MAC_ID_SIZE); i++){
			mac_addr[index] = i2c_smbus_read_word_data(client, i);
			//printk("WWJ=======addr 0x%x = 0x%x\n", i, mac_addr[index]);
			index++;
	}
}

static int ac24cxx_probe(struct i2c_client *client,
				       const struct i2c_device_id *id)
{
	int ret;
	int value;
	int i;
	ac24cxx_client = client;
	//printk("WWJ=========%s start, i2c addr = 0x%x\n", __func__, client->addr);

	if (!i2c_check_functionality(client->adapter, I2C_FUNC_SMBUS_BYTE_DATA)) {
		dev_err(&client->dev, "i2c bus does not support the powermcu\n");
		return -ENODEV;
	}

	ret = sysfs_create_file(&client->dev.kobj, &dev_attr_MAC_ADDR.attr);
    if(ret)
        printk("------------sysfs_create_file failed---------\n");

	read_macid(client);

	return 0;
}

static int ac24cxx_remove(struct i2c_client *client)
{

	//printk("WWJ=========%s start\n", __func__);

	return 0;
}

static const struct i2c_device_id ac24cxx_id[] = {
	{ "ac24cxx", 0 },
	{ }
};
MODULE_DEVICE_TABLE(i2c, ac24cxx_id);

static struct of_device_id ac24cxx_ids[] = {
	{ .compatible = "ac24cxx" },
	{ /* sentinel */ }
};

static struct i2c_driver ac24cxx_driver = {
	.driver = {
		.name	= "ac24cxx",
		.owner	= THIS_MODULE,
		.of_match_table	= of_match_ptr(ac24cxx_ids),
	},
	.id_table	= ac24cxx_id,
	.probe		= ac24cxx_probe,
	.remove		= ac24cxx_remove,
};
module_i2c_driver(ac24cxx_driver);

MODULE_AUTHOR("ShenCloudTech, Inc.");
MODULE_DESCRIPTION("EEPROM for MACID and MEM parameters");
MODULE_LICENSE("GPL");
