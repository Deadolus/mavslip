// MESSAGE SWARMIX_IP PACKING

#define MAVLINK_MSG_ID_SWARMIX_IP 201

typedef struct __mavlink_swarmix_ip_t
{
 uint8_t payload[96]; ///< uint8_t
} mavlink_swarmix_ip_t;

#define MAVLINK_MSG_ID_SWARMIX_IP_LEN 96
#define MAVLINK_MSG_ID_201_LEN 96

#define MAVLINK_MSG_ID_SWARMIX_IP_CRC 153
#define MAVLINK_MSG_ID_201_CRC 153

#define MAVLINK_MSG_SWARMIX_IP_FIELD_PAYLOAD_LEN 96

#define MAVLINK_MESSAGE_INFO_SWARMIX_IP { \
	"SWARMIX_IP", \
	1, \
	{  { "payload", NULL, MAVLINK_TYPE_UINT8_T, 96, 0, offsetof(mavlink_swarmix_ip_t, payload) }, \
         } \
}


/**
 * @brief Pack a swarmix_ip message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param payload uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_swarmix_ip_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SWARMIX_IP_LEN];

	_mav_put_uint8_t_array(buf, 0, payload, 96);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#else
	mavlink_swarmix_ip_t packet;

	mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*96);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SWARMIX_IP;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SWARMIX_IP_LEN, MAVLINK_MSG_ID_SWARMIX_IP_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif
}

/**
 * @brief Pack a swarmix_ip message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param payload uint8_t
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_swarmix_ip_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SWARMIX_IP_LEN];

	_mav_put_uint8_t_array(buf, 0, payload, 96);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#else
	mavlink_swarmix_ip_t packet;

	mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*96);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_SWARMIX_IP;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SWARMIX_IP_LEN, MAVLINK_MSG_ID_SWARMIX_IP_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif
}

/**
 * @brief Encode a swarmix_ip struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param swarmix_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_swarmix_ip_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_swarmix_ip_t* swarmix_ip)
{
	return mavlink_msg_swarmix_ip_pack(system_id, component_id, msg, swarmix_ip->payload);
}

/**
 * @brief Encode a swarmix_ip struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param swarmix_ip C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_swarmix_ip_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_swarmix_ip_t* swarmix_ip)
{
	return mavlink_msg_swarmix_ip_pack_chan(system_id, component_id, chan, msg, swarmix_ip->payload);
}

/**
 * @brief Send a swarmix_ip message
 * @param chan MAVLink channel to send the message
 *
 * @param payload uint8_t
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_swarmix_ip_send(mavlink_channel_t chan, const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_SWARMIX_IP_LEN];

	_mav_put_uint8_t_array(buf, 0, payload, 96);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_IP, buf, MAVLINK_MSG_ID_SWARMIX_IP_LEN, MAVLINK_MSG_ID_SWARMIX_IP_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_IP, buf, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif
#else
	mavlink_swarmix_ip_t packet;

	mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*96);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_IP, (const char *)&packet, MAVLINK_MSG_ID_SWARMIX_IP_LEN, MAVLINK_MSG_ID_SWARMIX_IP_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SWARMIX_IP, (const char *)&packet, MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif
#endif
}

#endif

// MESSAGE SWARMIX_IP UNPACKING


/**
 * @brief Get field payload from swarmix_ip message
 *
 * @return uint8_t
 */
static inline uint16_t mavlink_msg_swarmix_ip_get_payload(const mavlink_message_t* msg, uint8_t *payload)
{
	return _MAV_RETURN_uint8_t_array(msg, payload, 96,  0);
}

/**
 * @brief Decode a swarmix_ip message into a struct
 *
 * @param msg The message to decode
 * @param swarmix_ip C-struct to decode the message contents into
 */
static inline void mavlink_msg_swarmix_ip_decode(const mavlink_message_t* msg, mavlink_swarmix_ip_t* swarmix_ip)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_swarmix_ip_get_payload(msg, swarmix_ip->payload);
#else
	memcpy(swarmix_ip, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_SWARMIX_IP_LEN);
#endif
}
