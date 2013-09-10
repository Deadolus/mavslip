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
static void mavlink_test_message_definitions/v1.0/common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_swarmix(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_message_definitions/v1.0/common(system_id, component_id, last_msg);
	mavlink_test_swarmix(system_id, component_id, last_msg);
}
#endif

#include "../message_definitions/v1.0/common/testsuite.h"


static void mavlink_test_swarmix_net(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_swarmix_net_t packet_in = {
		963497464,
	963497672,
	963497880,
	17859,
	17963,
	18067,
	18171,
	18275,
	199,
	10,
	77,
	144,
	211,
	};
	mavlink_swarmix_net_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.lat = packet_in.lat;
        	packet1.lon = packet_in.lon;
        	packet1.alt = packet_in.alt;
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
	mavlink_msg_swarmix_net_pack(system_id, component_id, &msg , packet1.id , packet1.lat , packet1.lon , packet1.alt , packet1.heading , packet1.xacc , packet1.yacc , packet1.zacc , packet1.voltage_battery , packet1.RSSI_A , packet1.RSSI_B , packet1.SNR_A , packet1.SNR_B );
	mavlink_msg_swarmix_net_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_net_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.id , packet1.lat , packet1.lon , packet1.alt , packet1.heading , packet1.xacc , packet1.yacc , packet1.zacc , packet1.voltage_battery , packet1.RSSI_A , packet1.RSSI_B , packet1.SNR_A , packet1.SNR_B );
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
	mavlink_msg_swarmix_net_send(MAVLINK_COMM_1 , packet1.id , packet1.lat , packet1.lon , packet1.alt , packet1.heading , packet1.xacc , packet1.yacc , packet1.zacc , packet1.voltage_battery , packet1.RSSI_A , packet1.RSSI_B , packet1.SNR_A , packet1.SNR_B );
	mavlink_msg_swarmix_net_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_swarmix_ip(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_swarmix_ip_t packet_in = {
		5,
	{ 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70 },
	{ 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3 },
	{ 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192 },
	};
	mavlink_swarmix_ip_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.seq = packet_in.seq;
        
        	mav_array_memcpy(packet1.packet_low, packet_in.packet_low, sizeof(uint8_t)*255);
        	mav_array_memcpy(packet1.packet_mid, packet_in.packet_mid, sizeof(uint8_t)*255);
        	mav_array_memcpy(packet1.packet_hi, packet_in.packet_hi, sizeof(uint8_t)*255);
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_ip_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_swarmix_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_ip_pack(system_id, component_id, &msg , packet1.seq , packet1.packet_low , packet1.packet_mid , packet1.packet_hi );
	mavlink_msg_swarmix_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_ip_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.seq , packet1.packet_low , packet1.packet_mid , packet1.packet_hi );
	mavlink_msg_swarmix_ip_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_swarmix_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_swarmix_ip_send(MAVLINK_COMM_1 , packet1.seq , packet1.packet_low , packet1.packet_mid , packet1.packet_hi );
	mavlink_msg_swarmix_ip_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_swarmix(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_swarmix_net(system_id, component_id, last_msg);
	mavlink_test_swarmix_ip(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SWARMIX_TESTSUITE_H
