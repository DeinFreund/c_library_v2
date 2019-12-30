#pragma once
// MESSAGE DYNAMIXEL_STATUS PACKING

#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS 99

MAVPACKED(
typedef struct __mavlink_dynamixel_status_t {
 uint64_t time_boot_us; /*< [us] Timestamp (time since system boot).*/
 float angles[8]; /*< [rad] Current angles.*/
 uint8_t noutputs; /*< [1] Number of measured dynamixels.*/
}) mavlink_dynamixel_status_t;

#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN 41
#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN 41
#define MAVLINK_MSG_ID_99_LEN 41
#define MAVLINK_MSG_ID_99_MIN_LEN 41

#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC 48
#define MAVLINK_MSG_ID_99_CRC 48

#define MAVLINK_MSG_DYNAMIXEL_STATUS_FIELD_ANGLES_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DYNAMIXEL_STATUS { \
    99, \
    "DYNAMIXEL_STATUS", \
    3, \
    {  { "time_boot_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dynamixel_status_t, time_boot_us) }, \
         { "noutputs", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_dynamixel_status_t, noutputs) }, \
         { "angles", NULL, MAVLINK_TYPE_FLOAT, 8, 8, offsetof(mavlink_dynamixel_status_t, angles) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DYNAMIXEL_STATUS { \
    "DYNAMIXEL_STATUS", \
    3, \
    {  { "time_boot_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dynamixel_status_t, time_boot_us) }, \
         { "noutputs", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_dynamixel_status_t, noutputs) }, \
         { "angles", NULL, MAVLINK_TYPE_FLOAT, 8, 8, offsetof(mavlink_dynamixel_status_t, angles) }, \
         } \
}
#endif

/**
 * @brief Pack a dynamixel_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_us [us] Timestamp (time since system boot).
 * @param noutputs [1] Number of measured dynamixels.
 * @param angles [rad] Current angles.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dynamixel_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_boot_us, uint8_t noutputs, const float *angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 40, noutputs);
    _mav_put_float_array(buf, 8, angles, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
#else
    mavlink_dynamixel_status_t packet;
    packet.time_boot_us = time_boot_us;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.angles, angles, sizeof(float)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DYNAMIXEL_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
}

/**
 * @brief Pack a dynamixel_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_us [us] Timestamp (time since system boot).
 * @param noutputs [1] Number of measured dynamixels.
 * @param angles [rad] Current angles.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dynamixel_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_boot_us,uint8_t noutputs,const float *angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 40, noutputs);
    _mav_put_float_array(buf, 8, angles, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
#else
    mavlink_dynamixel_status_t packet;
    packet.time_boot_us = time_boot_us;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.angles, angles, sizeof(float)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DYNAMIXEL_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
}

/**
 * @brief Encode a dynamixel_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dynamixel_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dynamixel_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dynamixel_status_t* dynamixel_status)
{
    return mavlink_msg_dynamixel_status_pack(system_id, component_id, msg, dynamixel_status->time_boot_us, dynamixel_status->noutputs, dynamixel_status->angles);
}

/**
 * @brief Encode a dynamixel_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dynamixel_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dynamixel_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dynamixel_status_t* dynamixel_status)
{
    return mavlink_msg_dynamixel_status_pack_chan(system_id, component_id, chan, msg, dynamixel_status->time_boot_us, dynamixel_status->noutputs, dynamixel_status->angles);
}

/**
 * @brief Send a dynamixel_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_us [us] Timestamp (time since system boot).
 * @param noutputs [1] Number of measured dynamixels.
 * @param angles [rad] Current angles.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dynamixel_status_send(mavlink_channel_t chan, uint64_t time_boot_us, uint8_t noutputs, const float *angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 40, noutputs);
    _mav_put_float_array(buf, 8, angles, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#else
    mavlink_dynamixel_status_t packet;
    packet.time_boot_us = time_boot_us;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.angles, angles, sizeof(float)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, (const char *)&packet, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#endif
}

/**
 * @brief Send a dynamixel_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dynamixel_status_send_struct(mavlink_channel_t chan, const mavlink_dynamixel_status_t* dynamixel_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dynamixel_status_send(chan, dynamixel_status->time_boot_us, dynamixel_status->noutputs, dynamixel_status->angles);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, (const char *)dynamixel_status, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dynamixel_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_boot_us, uint8_t noutputs, const float *angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 40, noutputs);
    _mav_put_float_array(buf, 8, angles, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#else
    mavlink_dynamixel_status_t *packet = (mavlink_dynamixel_status_t *)msgbuf;
    packet->time_boot_us = time_boot_us;
    packet->noutputs = noutputs;
    mav_array_memcpy(packet->angles, angles, sizeof(float)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, (const char *)packet, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE DYNAMIXEL_STATUS UNPACKING


/**
 * @brief Get field time_boot_us from dynamixel_status message
 *
 * @return [us] Timestamp (time since system boot).
 */
static inline uint64_t mavlink_msg_dynamixel_status_get_time_boot_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field noutputs from dynamixel_status message
 *
 * @return [1] Number of measured dynamixels.
 */
static inline uint8_t mavlink_msg_dynamixel_status_get_noutputs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field angles from dynamixel_status message
 *
 * @return [rad] Current angles.
 */
static inline uint16_t mavlink_msg_dynamixel_status_get_angles(const mavlink_message_t* msg, float *angles)
{
    return _MAV_RETURN_float_array(msg, angles, 8,  8);
}

/**
 * @brief Decode a dynamixel_status message into a struct
 *
 * @param msg The message to decode
 * @param dynamixel_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_dynamixel_status_decode(const mavlink_message_t* msg, mavlink_dynamixel_status_t* dynamixel_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dynamixel_status->time_boot_us = mavlink_msg_dynamixel_status_get_time_boot_us(msg);
    mavlink_msg_dynamixel_status_get_angles(msg, dynamixel_status->angles);
    dynamixel_status->noutputs = mavlink_msg_dynamixel_status_get_noutputs(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN;
        memset(dynamixel_status, 0, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
    memcpy(dynamixel_status, _MAV_PAYLOAD(msg), len);
#endif
}
