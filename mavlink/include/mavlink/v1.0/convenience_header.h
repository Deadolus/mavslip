/* MAVLink adapter header */
#ifndef YOUR_MAVLINK_BRIDGE_HEADER_H
#define YOUR_MAVLINK_BRIDGE_HEADER_H
 
//#define MAVLINK_USE_CONVENIENCE_FUNCTIONS
 
#include "mavlink_types.h"
#include <linux/unistd.h>
//#include <stdio.h>
//#include <linux/libkern.h>
 
/* Struct that stores the communication settings of this system.
   you can also define / alter these settings elsewhere, as long
   as they're included BEFORE mavlink.h.
   So you can set the
 
   mavlink_system.sysid = 100; // System ID, 1-255
   mavlink_system.compid = 50; // Component/Subsystem ID, 1-255
 
   Lines also in your main.c, e.g. by reading these parameter from EEPROM.
 */
mavlink_system_t mavlink_system;
//mavlink_system.sysid = 120; // System ID, 1-255
//mavlink_system.compid = 10; // Component/Subsystem ID, 1-255


//SYSID_SW_MREV=120, SYSID_SW_TYPE=10 SYSID_THISMAV=1
 
extern int fd;
extern int fd_write;
/**
 * @brief Send one char (uint8_t) over a comm channel
 *
 * @param chan MAVLink channel to use, usually MAVLINK_COMM_0 = UART0
 * @param ch Character to send
 */
static inline void comm_send_ch(mavlink_channel_t chan, uint8_t ch)
{
    if (chan == MAVLINK_COMM_0)
    {
#ifdef TEST_LOCAL
        write(fd_write,&ch,1);
#else
        write(fd,&ch,1);
#endif
    }
    if (chan == MAVLINK_COMM_1)
    {
#ifdef TEST_LOCAL
    	write(fd_write,&ch,1);
#else
    	write(fd,&ch,1);
#endif
    }
}
 
/**
 * @brief Send buf over a comm channel
 *
 * @param chan MAVLink channel to use, usually MAVLINK_COMM_0 = UART0
 * @param ch Character to send
 */
#define MAVLINK_SEND_UART_BYTES comm_send_buf
static inline void comm_send_buf(mavlink_channel_t chan, const uint8_t *buf, 
			uint16_t len)
{
    if (chan == MAVLINK_COMM_0)
    {
#ifdef TEST_LOCAL
        write(fd_write, buf, len);
#else
        write(fd, buf, len);
#endif
    }
    if (chan == MAVLINK_COMM_1)
    {
#ifdef TEST_LOCAL
    	write(fd_write, buf, len);
#else
    	write(fd, buf, len);
#endif
    }
}
 
#endif /* YOUR_MAVLINK_BRIDGE_HEADER_H */
