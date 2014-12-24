#ifndef __SHENONMXC_H

#define __SHENONMXC_H

#include "SHEN_TYPE.h"


#if ((CUR_SHEN_TYPE) == (TYPE_VKI)) 


#elif ((CUR_SHEN_TYPE) == (TYPE_RII))
#define CONFIG_RII_USBHUB_STAT_PWR
#define CONFIG_RII
#define CONFIG_PWR_CD

#endif


#endif
