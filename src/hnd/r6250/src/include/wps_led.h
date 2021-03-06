/***************************************************************************
***
***    Copyright 2007  Hon Hai Precision Ind. Co. Ltd.
***    All Rights Reserved.
***    No portions of this material shall be reproduced in any form without the
***    written permission of Hon Hai Precision Ind. Co. Ltd.
***
***    All information contained in this document is Hon Hai Precision Ind.  
***    Co. Ltd. company private, proprietary, and trade secret property and 
***    are protected by international intellectual property laws and treaties.
***
****************************************************************************/

#ifndef __WPS_LED_H__
#define __WPS_LED_H__

#if (defined GPIO_EXT_CTRL)
#include <ext_led.h>
#endif

#define WPS_LED_MAJOR_NUM       253

#define DEV_WPS_LED             "/dev/wps_led"
#define WPS_LED_IOCTL_NUM       'W'

#define WPS_LED_BLINK_NORMAL   _IOWR(WPS_LED_IOCTL_NUM, 0, int *)
#define WPS_LED_BLINK_QUICK    _IOWR(WPS_LED_IOCTL_NUM, 1, int *)
#define WPS_LED_BLINK_OFF      _IOWR(WPS_LED_IOCTL_NUM, 2, int *)
#define WPS_LED_CHANGE_GREEN   _IOWR(WPS_LED_IOCTL_NUM, 3, int *)
#define WPS_LED_CHANGE_AMBER   _IOWR(WPS_LED_IOCTL_NUM, 4, int *)
#define WPS_LED_BLINK_QUICK2   _IOWR(WPS_LED_IOCTL_NUM, 5, int *)

#define WLAN_N_RADIO_ON        _IOWR(WPS_LED_IOCTL_NUM, 6, int *)
#define WLAN_N_RADIO_OFF       _IOWR(WPS_LED_IOCTL_NUM, 7, int *)
#define WLAN_G_RADIO_ON        _IOWR(WPS_LED_IOCTL_NUM, 8, int *)
#define WLAN_G_RADIO_OFF       _IOWR(WPS_LED_IOCTL_NUM, 9, int *)

#define USB_LED_STATE_ON       _IOWR(WPS_LED_IOCTL_NUM, 10, int *)
#define USB_LED_STATE_OFF      _IOWR(WPS_LED_IOCTL_NUM, 11, int *)

#define DOME_N_RADIO_ON        _IOWR(WPS_LED_IOCTL_NUM, 12, int *)
#define DOME_N_RADIO_OFF       _IOWR(WPS_LED_IOCTL_NUM, 13, int *)
#define DOME_G_RADIO_ON        _IOWR(WPS_LED_IOCTL_NUM, 14, int *)
#define DOME_G_RADIO_OFF       _IOWR(WPS_LED_IOCTL_NUM, 15, int *)
/*  added start, Wins, 04/11/2011 */
#if defined(R6300v2) || defined(R6250)
/* For USB2 LED */
#define USB2_LED_STATE_ON      _IOWR(WPS_LED_IOCTL_NUM, 16, int *)
#define USB2_LED_STATE_OFF     _IOWR(WPS_LED_IOCTL_NUM, 17, int *)
#endif /* R6300v2 */
/*  added end, Wins, 04/11/2011 */
#define WPS_LED_BLINK_AP_LOCKDOWN   _IOWR(WPS_LED_IOCTL_NUM, 18, int *)


#define WPS_LED_STOP_NO         (0)
#define WPS_LED_STOP_RADIO_OFF  (1)
#define WPS_LED_STOP_DISABLED   (2)

/* No DOME_LED */
/*  modified start pling 12/26/2011, for WNDR4000 */
#if (defined WNDR4000AC)
#define WPS_LED_GPIO           (GPIO_LED_WLAN)  /* pling modified 02/03/2012, to blink wlan LED during WPS */
#else
#define WPS_LED_GPIO           (11) /*(14)*/ /* ACR5500 */ /* modified by EricHuang, 1/11/2012 */
#endif /* WNDR4000AC */
#endif
