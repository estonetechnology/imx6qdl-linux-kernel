#ifndef __SHENONMXC_H

#define __SHENONMXC_H

#include "SHEN_TYPE.h"


#if ((CUR_SHEN_TYPE) == (TYPE_VKI)) 


#elif ((CUR_SHEN_TYPE) == (TYPE_RRI_WIFI)) || ((CUR_SHEN_TYPE) == (TYPE_RRI_WIFI_BT))
#define CONFIG_RII_USBHUB_STAT_PWR
#define CONFIG_RII
#define CONFIG_PWR_CD
#define CONFIG_RII_DDR_CLL
#define CONFIG_WIFI_IC

//+++wwj
//#define CONFIG_WIFI_BT

#endif


#endif
