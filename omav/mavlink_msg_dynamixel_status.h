#pragma once
// MESSAGE DYNAMIXEL_STATUS PACKING

#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS 99

MAVPACKED(
typedef struct __mavlink_dynamixel_status_t {
 uint64_t time_boot_us; /*< [us] Timestamp (time since system boot).*/
 float anglesMeasured[8]; /*< [rad] Current angle measurements.*/
 float anglesSet[8]; /*< [rad] Current angle targets.*/
 uint8_t noutputs; /*< [1] Number of measured dynamixels.*/
}) mavlink_dynamixel_status_t;

#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN 73
#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN 73
#define MAVLINK_MSG_ID_99_LEN 73
#define MAVLINK_MSG_ID_99_MIN_LEN 73

#define MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC 85
#define MAVLINK_MSG_ID_99_CRC 85

#define MAVLINK_MSG_DYNAMIXEL_STATUS_FIELD_ANGLESMEASURED_LEN 8
#define MAVLINK_MSG_DYNAMIXEL_STATUS_FIELD_ANGLESSET_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DYNAMIXEL_STATUS { \
    99, \
    "DYNAMIXEL_STATUS", \
    4, \
    {  { "time_boot_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dynamixel_status_t, time_boot_us) }, \
         { "noutputs", NULL, MAVLINK_TYPE_UINT8_T, 0, 72, offsetof(mavlink_dynamixel_status_t, noutputs) }, \
         { "anglesMeasured", NULL, MAVLINK_TYPE_FLOAT, 8, 8, offsetof(mavlink_dynamixel_status_t, anglesMeasured) }, \
         { "anglesSet", NULL, MAVLINK_TYPE_FLOAT, 8, 40, offsetof(mavlink_dynamixel_status_t, anglesSet) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DYNAMIXEL_STATUS { \
    "DYNAMIXEL_STATUS", \
    4, \
    {  { "time_boot_us", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_dynamixel_status_t, time_boot_us) }, \
         { "noutputs", NULL, MAVLINK_TYPE_UINT8_T, 0, 72, offsetof(mavlink_dynamixel_status_t, noutputs) }, \
         { "anglesMeasured", NULL, MAVLINK_TYPE_FLOAT, 8, 8, offsetof(mavlink_dynamixel_status_t, anglesMeasured) }, \
         { "anglesSet", NULL, MAVLINK_TYPE_FLOAT, 8, 40, offsetof(mavlink_dynamixel_status_t, anglesSet) }, \
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
 * @param anglesMeasured [rad] Current angle measurements.
 * @param anglesSet [rad] Current angle targets.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dynamixel_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_boot_us, uint8_t noutputs, const float *anglesMeasured, const float *anglesSet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 72, noutputs);
    _mav_put_float_array(buf, 8, anglesMeasured, 8);
    _mav_put_float_array(buf, 40, anglesSet, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
#else
    mavlink_dynamixel_status_t packet;
    packet.time_boot_us = time_boot_us;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.anglesMeasured, anglesMeasured, sizeof(float)*8);
    mav_array_memcpy(packet.anglesSet, anglesSet, sizeof(float)*8);
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
 * @param anglesMeasured [rad] Current angle measurements.
 * @param anglesSet [rad] Current angle targets.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dynamixel_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_boot_us,uint8_t noutputs,const float *anglesMeasured,const float *anglesSet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 72, noutputs);
    _mav_put_float_array(buf, 8, anglesMeasured, 8);
    _mav_put_float_array(buf, 40, anglesSet, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
#else
    mavlink_dynamixel_status_t packet;
    packet.time_boot_us = time_boot_us;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.anglesMeasured, anglesMeasured, sizeof(float)*8);
    mav_array_memcpy(packet.anglesSet, anglesSet, sizeof(float)*8);
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
    return mavlink_msg_dynamixel_status_pack(system_id, component_id, msg, dynamixel_status->time_boot_us, dynamixel_status->noutputs, dynamixel_status->anglesMeasured, dynamixel_status->anglesSet);
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
    return mavlink_msg_dynamixel_status_pack_chan(system_id, component_id, chan, msg, dynamixel_status->time_boot_us, dynamixel_status->noutputs, dynamixel_status->anglesMeasured, dynamixel_status->anglesSet);
}

/**
 * @brief Send a dynamixel_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_us [us] Timestamp (time since system boot).
 * @param noutputs [1] Number of measured dynamixels.
 * @param anglesMeasured [rad] Current angle measurements.
 * @param anglesSet [rad] Current angle targets.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dynamixel_status_send(mavlink_channel_t chan, uint64_t time_boot_us, uint8_t noutputs, const float *anglesMeasured, const float *anglesSet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 72, noutputs);
    _mav_put_float_array(buf, 8, anglesMeasured, 8);
    _mav_put_float_array(buf, 40, anglesSet, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#else
    mavlink_dynamixel_status_t packet;
    packet.time_boot_us = time_boot_us;
    packet.noutputs = noutputs;
    mav_array_memcpy(packet.anglesMeasured, anglesMeasured, sizeof(float)*8);
    mav_array_memcpy(packet.anglesSet, anglesSet, sizeof(float)*8);
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
    mavlink_msg_dynamixel_status_send(chan, dynamixel_status->time_boot_us, dynamixel_status->noutputs, dynamixel_status->anglesMeasured, dynamixel_status->anglesSet);
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
static inline void mavlink_msg_dynamixel_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_boot_us, uint8_t noutputs, const float *anglesMeasured, const float *anglesSet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_boot_us);
    _mav_put_uint8_t(buf, 72, noutputs);
    _mav_put_float_array(buf, 8, anglesMeasured, 8);
    _mav_put_float_array(buf, 40, anglesSet, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DYNAMIXEL_STATUS, buf, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_CRC);
#else
    mavlink_dynamixel_status_t *packet = (mavlink_dynamixel_status_t *)msgbuf;
    packet->time_boot_us = time_boot_us;
    packet->noutputs = noutputs;
    mav_array_memcpy(packet->anglesMeasured, anglesMeasured, sizeof(float)*8);
    mav_array_memcpy(packet->anglesSet, anglesSet, sizeof(float)*8);
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
    return _MAV_RETURN_uint8_t(msg,  72);
}

/**
 * @brief Get field anglesMeasured from dynamixel_status message
 *
 * @return [rad] Current angle measurements.
 */
static inline uint16_t mavlink_msg_dynamixel_status_get_anglesMeasured(const mavlink_message_t* msg, float *anglesMeasured)
{
    return _MAV_RETURN_float_array(msg, anglesMeasured, 8,  8);
}

/**
 * @brief Get field anglesSet from dynamixel_status message
 *
 * @return [rad] Current angle targets.
 */
static inline uint16_t mavlink_msg_dynamixel_status_get_anglesSet(const mavlink_message_t* msg, float *anglesSet)
{
    return _MAV_RETURN_float_array(msg, anglesSet, 8,  40);
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
    mavlink_msg_dynamixel_status_get_anglesMeasured(msg, dynamixel_status->anglesMeasured);
    mavlink_msg_dynamixel_status_get_anglesSet(msg, dynamixel_status->anglesSet);
    dynamixel_status->noutputs = mavlink_msg_dynamixel_status_get_noutputs(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN? msg->len : MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN;
        memset(dynamixel_status, 0, MAVLINK_MSG_ID_DYNAMIXEL_STATUS_LEN);
    memcpy(dynamixel_status, _MAV_PAYLOAD(msg), len);
#endif
}
