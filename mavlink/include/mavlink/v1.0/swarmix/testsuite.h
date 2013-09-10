/** @file
 *	@brief MAVLink comm protocol testsuite generated from swarmix.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef SWARMIX_TESTSUITE_H
#define SWARMIX_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_swarmix(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_swarmix(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_swarmix_net(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_swarmix_net_t packet_in = {
		963497464,
	963497672,
	963497880,
	101.0,
	129.0,
	157.0,
	185.0,
	213.0,
	241.0,
	19107,
	19211,
	19315,
	19419,
	19523,
	15,
	82,
	149,
	216,
	27,
	};
	mavlink_swarmix_net_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.lat = packet_in.lat;
        	packet1.lon = packet_in.lon;
        	packet1.alt = packet_in.alt;
        	packet1.rel_alt = packet_in.rel_alt;
        	packet1.ground_speed = packet_in.ground_speed;
        	packet1.air_speed = packet_in.air_speed;
        	packet1.roll = packet_in.roll;
        	packet1.pitch = packet_in.pitch;
        	packet1.yaw = packet_in.yaw;
        	packet1.heading = packet_in.heading;
        	packet1.xacc = packet_in.xacc;
        	packet1.yacc = packet_in.yacc;
        	packet1.zacc = packet_in.zacc;
        	packet1.voltage_battery = packet_in.voltage_battery;
        	packet1.id = packet_in.id;
        	packet1.RSSI_A = packet_in.RSSI_A;
        	packet1.RSSI_B = packet_in.RSSI_B;
        	packet1.SNR_A = packet_in.SNR_A;
        	packet1.SNR_B = packet_in.SNR_B;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_net_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_swarmix_net_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_net_pack(system_id, component_id, &msg , packet1.id , packet1.lat , packet1.lon , packet1.alt , packet1.rel_alt , packet1.heading , packet1.ground_speed , packet1.air_speed , packet1.roll , packet1.pitch , packet1.yaw , packet1.xacc , packet1.yacc , packet1.zacc , packet1.voltage_battery , packet1.RSSI_A , packet1.RSSI_B , packet1.SNR_A , packet1.SNR_B );
	mavlink_msg_swarmix_net_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_net_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.lat , packet1.lon , packet1.alt , packet1.rel_alt , packet1.heading , packet1.ground_speed , packet1.air_speed , packet1.roll , packet1.pitch , packet1.yaw , packet1.xacc , packet1.yacc , packet1.zacc , packet1.voltage_battery , packet1.RSSI_A , packet1.RSSI_B , packet1.SNR_A , packet1.SNR_B );
	mavlink_msg_swarmix_net_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_swarmix_net_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_net_send(MAVLINK_COMM_1 , packet1.id , packet1.lat , packet1.lon , packet1.alt , packet1.rel_alt , packet1.heading , packet1.ground_speed , packet1.air_speed , packet1.roll , packet1.pitch , packet1.yaw , packet1.xacc , packet1.yacc , packet1.zacc , packet1.voltage_battery , packet1.RSSI_A , packet1.RSSI_B , packet1.SNR_A , packet1.SNR_B );
	mavlink_msg_swarmix_net_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_swarmix(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_swarmix_net(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SWARMIX_TESTSUITE_H
