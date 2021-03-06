// MESSAGE SWARMIX_NET PACKING

#define MAVLINK_MSG_ID_SWARMIX_NET 200

typedef struct __mavlink_swarmix_net_t
{
 int32_t lat; ///< int32_t
 int32_t lon; ///< int32_t
 int32_t alt; ///< int32_t
 uint16_t heading; ///< uint16_t
 int16_t xacc; ///< int16_t
 int16_t yacc; ///< int16_t
 int16_t zacc; ///< int16_t
 uint16_t voltage_battery; ///< float
 uint8_t id; ///< uint8_t
 int8_t RSSI_A; ///< int8_t
 int8_t RSSI_B; ///< int8_t
 int8_t SNR_A; ///< int8_t
 int8_t SNR_B; ///< int8_t
} mavlink_swarmix_net_t;

#define MAVLINK_MSG_ID_SWARMIX_NET_LEN 27
#define MAVLINK_MSG_ID_200_LEN 27

#define MAVLINK_MSG_ID_SWARMIX_NET_CRC 45
#define MAVLINK_MSG_ID_200_CRC 45



#define MAVLINK_MESSAGE_INFO_SWARMIX_NET { \
	"SWARMIX_NET", \
	13, \
	{  { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_swarmix_net_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_swarmix_net_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_swarmix_net_t, alt) }, \
         { "heading", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_swarmix_net_t, heading) }, \
         { "xacc", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_swarmix_net_t, xacc) }, \
         { "yacc", NULL, MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_swarmix_net_t, yacc) }, \
         { "zacc", NULL, MAVLINK_TYPE_INT16_T, 0, 18, offsetof(mavlink_swarmix_net_t, zacc) }, \
         { "voltage_battery", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_swarmix_net_t, voltage_battery) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_swarmix_net_t, id) }, \
         { "RSSI_A", NULL, MAVLINK_TYPE_INT8_T, 0, 23, offsetof(mavlink_swarmix_net_t, RSSI_A) }, \
         { "RSSI_B", NULL, MAVLINK_TYPE_INT8_T, 0, 24, offsetof(mavlink_swarmix_net_t, RSSI_B) }, \
         { "SNR_A", NULL, MAVLINK_TYPE_INT8_T, 0, 25, offsetof(mavlink_swarmix_net_t, SNR_A) }, \
         { "SNR_B", NULL, MAVLINK_TYPE_INT8_T, 0, 26, offsetof(mavlink_swarmix_net_t, SNR_B) }, \
         } \
}


/**
 * @brief Pack a swarmix_net message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param id uint8_t
 * @param lat int32_t
 * @param lon int32_t
 * @param alt int32_t
 * @param heading uint16_t
 * @param xacc int16_t
 * @param yacc int16_t
 * @param zacc int16_t
 * @param voltage_battery float
 * @param RSSI_A int8_t
 * @param RSSI_B int8_t
 * @param SNR_A int8_t
 * @param SNR_B int8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_swarmix_net_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t id, int32_t lat, int32_t lon, int32_t alt, uint16_t heading, int16_t xacc, int16_t yacc, int16_t zacc, uint16_t voltage_battery, int8_t RSSI_A, int8_t RSSI_B, int8_t SNR_A, int8_t SNR_B)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SWARMIX_NET_LEN];
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_int32_t(buf, 8, alt);
	_mav_put_uint16_t(buf, 12, heading);
	_mav_put_int16_t(buf, 14, xacc);
	_mav_put_int16_t(buf, 16, yacc);
	_mav_put_int16_t(buf, 18, zacc);
	_mav_put_uint16_t(buf, 20, voltage_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, RSSI_A);
	_mav_put_int8_t(buf, 24, RSSI_B);
	_mav_put_int8_t(buf, 25, SNR_A);
	_mav_put_int8_t(buf, 26, SNR_B);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#else
	mavlink_swarmix_net_t packet;
	packet.lat = lat;
	packet.lon = lon;
	packet.alt = alt;
	packet.heading = heading;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.voltage_battery = voltage_battery;
	packet.id = id;
	packet.RSSI_A = RSSI_A;
	packet.RSSI_B = RSSI_B;
	packet.SNR_A = SNR_A;
	packet.SNR_B = SNR_B;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SWARMIX_NET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SWARMIX_NET_LEN, MAVLINK_MSG_ID_SWARMIX_NET_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif
}

/**
 * @brief Pack a swarmix_net message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param id uint8_t
 * @param lat int32_t
 * @param lon int32_t
 * @param alt int32_t
 * @param heading uint16_t
 * @param xacc int16_t
 * @param yacc int16_t
 * @param zacc int16_t
 * @param voltage_battery float
 * @param RSSI_A int8_t
 * @param RSSI_B int8_t
 * @param SNR_A int8_t
 * @param SNR_B int8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_swarmix_net_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t id,int32_t lat,int32_t lon,int32_t alt,uint16_t heading,int16_t xacc,int16_t yacc,int16_t zacc,uint16_t voltage_battery,int8_t RSSI_A,int8_t RSSI_B,int8_t SNR_A,int8_t SNR_B)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SWARMIX_NET_LEN];
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_int32_t(buf, 8, alt);
	_mav_put_uint16_t(buf, 12, heading);
	_mav_put_int16_t(buf, 14, xacc);
	_mav_put_int16_t(buf, 16, yacc);
	_mav_put_int16_t(buf, 18, zacc);
	_mav_put_uint16_t(buf, 20, voltage_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, RSSI_A);
	_mav_put_int8_t(buf, 24, RSSI_B);
	_mav_put_int8_t(buf, 25, SNR_A);
	_mav_put_int8_t(buf, 26, SNR_B);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#else
	mavlink_swarmix_net_t packet;
	packet.lat = lat;
	packet.lon = lon;
	packet.alt = alt;
	packet.heading = heading;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.voltage_battery = voltage_battery;
	packet.id = id;
	packet.RSSI_A = RSSI_A;
	packet.RSSI_B = RSSI_B;
	packet.SNR_A = SNR_A;
	packet.SNR_B = SNR_B;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SWARMIX_NET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SWARMIX_NET_LEN, MAVLINK_MSG_ID_SWARMIX_NET_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif
}

/**
 * @brief Encode a swarmix_net struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param swarmix_net C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_swarmix_net_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_swarmix_net_t* swarmix_net)
{
	return mavlink_msg_swarmix_net_pack(system_id, component_id, msg, swarmix_net->id, swarmix_net->lat, swarmix_net->lon, swarmix_net->alt, swarmix_net->heading, swarmix_net->xacc, swarmix_net->yacc, swarmix_net->zacc, swarmix_net->voltage_battery, swarmix_net->RSSI_A, swarmix_net->RSSI_B, swarmix_net->SNR_A, swarmix_net->SNR_B);
}

/**
 * @brief Encode a swarmix_net struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param swarmix_net C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_swarmix_net_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_swarmix_net_t* swarmix_net)
{
	return mavlink_msg_swarmix_net_pack_chan(system_id, component_id, chan, msg, swarmix_net->id, swarmix_net->lat, swarmix_net->lon, swarmix_net->alt, swarmix_net->heading, swarmix_net->xacc, swarmix_net->yacc, swarmix_net->zacc, swarmix_net->voltage_battery, swarmix_net->RSSI_A, swarmix_net->RSSI_B, swarmix_net->SNR_A, swarmix_net->SNR_B);
}

/**
 * @brief Send a swarmix_net message
 * @param chan MAVLink channel to send the message
 *
 * @param id uint8_t
 * @param lat int32_t
 * @param lon int32_t
 * @param alt int32_t
 * @param heading uint16_t
 * @param xacc int16_t
 * @param yacc int16_t
 * @param zacc int16_t
 * @param voltage_battery float
 * @param RSSI_A int8_t
 * @param RSSI_B int8_t
 * @param SNR_A int8_t
 * @param SNR_B int8_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_swarmix_net_send(mavlink_channel_t chan, uint8_t id, int32_t lat, int32_t lon, int32_t alt, uint16_t heading, int16_t xacc, int16_t yacc, int16_t zacc, uint16_t voltage_battery, int8_t RSSI_A, int8_t RSSI_B, int8_t SNR_A, int8_t SNR_B)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SWARMIX_NET_LEN];
	_mav_put_int32_t(buf, 0, lat);
	_mav_put_int32_t(buf, 4, lon);
	_mav_put_int32_t(buf, 8, alt);
	_mav_put_uint16_t(buf, 12, heading);
	_mav_put_int16_t(buf, 14, xacc);
	_mav_put_int16_t(buf, 16, yacc);
	_mav_put_int16_t(buf, 18, zacc);
	_mav_put_uint16_t(buf, 20, voltage_battery);
	_mav_put_uint8_t(buf, 22, id);
	_mav_put_int8_t(buf, 23, RSSI_A);
	_mav_put_int8_t(buf, 24, RSSI_B);
	_mav_put_int8_t(buf, 25, SNR_A);
	_mav_put_int8_t(buf, 26, SNR_B);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_NET, buf, MAVLINK_MSG_ID_SWARMIX_NET_LEN, MAVLINK_MSG_ID_SWARMIX_NET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_NET, buf, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif
#else
	mavlink_swarmix_net_t packet;
	packet.lat = lat;
	packet.lon = lon;
	packet.alt = alt;
	packet.heading = heading;
	packet.xacc = xacc;
	packet.yacc = yacc;
	packet.zacc = zacc;
	packet.voltage_battery = voltage_battery;
	packet.id = id;
	packet.RSSI_A = RSSI_A;
	packet.RSSI_B = RSSI_B;
	packet.SNR_A = SNR_A;
	packet.SNR_B = SNR_B;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_NET, (const char *)&packet, MAVLINK_MSG_ID_SWARMIX_NET_LEN, MAVLINK_MSG_ID_SWARMIX_NET_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_NET, (const char *)&packet, MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif
#endif
}

#endif

// MESSAGE SWARMIX_NET UNPACKING


/**
 * @brief Get field id from swarmix_net message
 *
 * @return uint8_t
 */
static inline uint8_t mavlink_msg_swarmix_net_get_id(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field lat from swarmix_net message
 *
 * @return int32_t
 */
static inline int32_t mavlink_msg_swarmix_net_get_lat(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from swarmix_net message
 *
 * @return int32_t
 */
static inline int32_t mavlink_msg_swarmix_net_get_lon(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field alt from swarmix_net message
 *
 * @return int32_t
 */
static inline int32_t mavlink_msg_swarmix_net_get_alt(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field heading from swarmix_net message
 *
 * @return uint16_t
 */
static inline uint16_t mavlink_msg_swarmix_net_get_heading(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field xacc from swarmix_net message
 *
 * @return int16_t
 */
static inline int16_t mavlink_msg_swarmix_net_get_xacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field yacc from swarmix_net message
 *
 * @return int16_t
 */
static inline int16_t mavlink_msg_swarmix_net_get_yacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field zacc from swarmix_net message
 *
 * @return int16_t
 */
static inline int16_t mavlink_msg_swarmix_net_get_zacc(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  18);
}

/**
 * @brief Get field voltage_battery from swarmix_net message
 *
 * @return float
 */
static inline uint16_t mavlink_msg_swarmix_net_get_voltage_battery(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field RSSI_A from swarmix_net message
 *
 * @return int8_t
 */
static inline int8_t mavlink_msg_swarmix_net_get_RSSI_A(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  23);
}

/**
 * @brief Get field RSSI_B from swarmix_net message
 *
 * @return int8_t
 */
static inline int8_t mavlink_msg_swarmix_net_get_RSSI_B(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  24);
}

/**
 * @brief Get field SNR_A from swarmix_net message
 *
 * @return int8_t
 */
static inline int8_t mavlink_msg_swarmix_net_get_SNR_A(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  25);
}

/**
 * @brief Get field SNR_B from swarmix_net message
 *
 * @return int8_t
 */
static inline int8_t mavlink_msg_swarmix_net_get_SNR_B(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int8_t(msg,  26);
}

/**
 * @brief Decode a swarmix_net message into a struct
 *
 * @param msg The message to decode
 * @param swarmix_net C-struct to decode the message contents into
 */
static inline void mavlink_msg_swarmix_net_decode(const mavlink_message_t* msg, mavlink_swarmix_net_t* swarmix_net)
{
#if MAVLINK_NEED_BYTE_SWAP
	swarmix_net->lat = mavlink_msg_swarmix_net_get_lat(msg);
	swarmix_net->lon = mavlink_msg_swarmix_net_get_lon(msg);
	swarmix_net->alt = mavlink_msg_swarmix_net_get_alt(msg);
	swarmix_net->heading = mavlink_msg_swarmix_net_get_heading(msg);
	swarmix_net->xacc = mavlink_msg_swarmix_net_get_xacc(msg);
	swarmix_net->yacc = mavlink_msg_swarmix_net_get_yacc(msg);
	swarmix_net->zacc = mavlink_msg_swarmix_net_get_zacc(msg);
	swarmix_net->voltage_battery = mavlink_msg_swarmix_net_get_voltage_battery(msg);
	swarmix_net->id = mavlink_msg_swarmix_net_get_id(msg);
	swarmix_net->RSSI_A = mavlink_msg_swarmix_net_get_RSSI_A(msg);
	swarmix_net->RSSI_B = mavlink_msg_swarmix_net_get_RSSI_B(msg);
	swarmix_net->SNR_A = mavlink_msg_swarmix_net_get_SNR_A(msg);
	swarmix_net->SNR_B = mavlink_msg_swarmix_net_get_SNR_B(msg);
#else
	memcpy(swarmix_net, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SWARMIX_NET_LEN);
#endif
}
