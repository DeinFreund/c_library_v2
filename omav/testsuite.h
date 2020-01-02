/** @file
 *    @brief MAVLink comm protocol testsuite generated from omav.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef OMAV_TESTSUITE_H
#define OMAV_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_omav(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_omav(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_set_wrench_target_body_ned(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_wrench_target_body_ned_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,18691,223
    };
    mavlink_set_wrench_target_body_ned_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.acc_x = packet_in.acc_x;
        packet1.acc_y = packet_in.acc_y;
        packet1.acc_z = packet_in.acc_z;
        packet1.acc_roll = packet_in.acc_roll;
        packet1.acc_pitch = packet_in.acc_pitch;
        packet1.acc_yaw = packet_in.acc_yaw;
        packet1.type_mask = packet_in.type_mask;
        packet1.coordinate_frame = packet_in.coordinate_frame;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_wrench_target_body_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_wrench_target_body_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_wrench_target_body_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_wrench_target_body_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_wrench_target_body_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_attitude_thrust_vector_target_ned(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_attitude_thrust_vector_target_ned_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,20147,51
    };
    mavlink_set_attitude_thrust_vector_target_ned_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.acc_x = packet_in.acc_x;
        packet1.acc_y = packet_in.acc_y;
        packet1.acc_z = packet_in.acc_z;
        packet1.q_w = packet_in.q_w;
        packet1.q_x = packet_in.q_x;
        packet1.q_y = packet_in.q_y;
        packet1.q_z = packet_in.q_z;
        packet1.p = packet_in.p;
        packet1.q = packet_in.q;
        packet1.r = packet_in.r;
        packet1.acc_roll = packet_in.acc_roll;
        packet1.acc_pitch = packet_in.acc_pitch;
        packet1.acc_yaw = packet_in.acc_yaw;
        packet1.type_mask = packet_in.type_mask;
        packet1.coordinate_frame = packet_in.coordinate_frame;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.q_w , packet1.q_x , packet1.q_y , packet1.q_z , packet1.p , packet1.q , packet1.r , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.q_w , packet1.q_x , packet1.q_y , packet1.q_z , packet1.p , packet1.q , packet1.r , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.q_w , packet1.q_x , packet1.q_y , packet1.q_z , packet1.p , packet1.q , packet1.r , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_rotor_tilt_target(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_rotor_tilt_target_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0 }
    };
    mavlink_set_rotor_tilt_target_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        
        mav_array_memcpy(packet1.alpha, packet_in.alpha, sizeof(float)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_rotor_tilt_target_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.alpha );
    mavlink_msg_set_rotor_tilt_target_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.alpha );
    mavlink_msg_set_rotor_tilt_target_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_rotor_tilt_target_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.alpha );
    mavlink_msg_set_rotor_tilt_target_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_allocation_matrix(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_allocation_matrix_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0, 51.0, 52.0, 53.0, 54.0, 55.0, 56.0, 57.0, 58.0, 59.0, 60.0, 61.0, 62.0, 63.0, 64.0, 65.0, 66.0, 67.0, 68.0, 69.0, 70.0, 71.0, 72.0, 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0 },{ 1053.0, 1054.0, 1055.0, 1056.0, 1057.0, 1058.0 }
    };
    mavlink_set_allocation_matrix_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        
        mav_array_memcpy(packet1.allocation_matrix, packet_in.allocation_matrix, sizeof(float)*36);
        mav_array_memcpy(packet1.tilt_angles, packet_in.tilt_angles, sizeof(float)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_allocation_matrix_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_allocation_matrix_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_allocation_matrix_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.allocation_matrix , packet1.tilt_angles );
    mavlink_msg_set_allocation_matrix_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_allocation_matrix_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.allocation_matrix , packet1.tilt_angles );
    mavlink_msg_set_allocation_matrix_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_allocation_matrix_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_allocation_matrix_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.allocation_matrix , packet1.tilt_angles );
    mavlink_msg_set_allocation_matrix_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_tiltrotor_actuator_commands(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_tiltrotor_actuator_commands_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0 },{ 18691, 18692, 18693, 18694, 18695, 18696, 18697, 18698, 18699, 18700, 18701, 18702 }
    };
    mavlink_set_tiltrotor_actuator_commands_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        
        mav_array_memcpy(packet1.u_tiltangles, packet_in.u_tiltangles, sizeof(float)*6);
        mav_array_memcpy(packet1.u_rotors, packet_in.u_rotors, sizeof(uint16_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_TILTROTOR_ACTUATOR_COMMANDS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_tiltrotor_actuator_commands_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_tiltrotor_actuator_commands_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_tiltrotor_actuator_commands_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.u_tiltangles , packet1.u_rotors );
    mavlink_msg_set_tiltrotor_actuator_commands_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_tiltrotor_actuator_commands_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.u_tiltangles , packet1.u_rotors );
    mavlink_msg_set_tiltrotor_actuator_commands_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_tiltrotor_actuator_commands_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_tiltrotor_actuator_commands_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.u_tiltangles , packet1.u_rotors );
    mavlink_msg_set_tiltrotor_actuator_commands_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_dynamixel_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DYNAMIXEL_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dynamixel_status_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0, 77.0, 78.0, 79.0, 80.0 },{ 297.0, 298.0, 299.0, 300.0, 301.0, 302.0, 303.0, 304.0 },221
    };
    mavlink_dynamixel_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_us = packet_in.time_boot_us;
        packet1.noutputs = packet_in.noutputs;
        
        mav_array_memcpy(packet1.anglesMeasured, packet_in.anglesMeasured, sizeof(float)*8);
        mav_array_memcpy(packet1.anglesSet, packet_in.anglesSet, sizeof(float)*8);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DYNAMIXEL_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dynamixel_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dynamixel_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dynamixel_status_pack(system_id, component_id, &msg , packet1.time_boot_us , packet1.noutputs , packet1.anglesMeasured , packet1.anglesSet );
    mavlink_msg_dynamixel_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dynamixel_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_us , packet1.noutputs , packet1.anglesMeasured , packet1.anglesSet );
    mavlink_msg_dynamixel_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dynamixel_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dynamixel_status_send(MAVLINK_COMM_1 , packet1.time_boot_us , packet1.noutputs , packet1.anglesMeasured , packet1.anglesSet );
    mavlink_msg_dynamixel_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_omav(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_set_wrench_target_body_ned(system_id, component_id, last_msg);
    mavlink_test_set_attitude_thrust_vector_target_ned(system_id, component_id, last_msg);
    mavlink_test_set_rotor_tilt_target(system_id, component_id, last_msg);
    mavlink_test_set_allocation_matrix(system_id, component_id, last_msg);
    mavlink_test_set_tiltrotor_actuator_commands(system_id, component_id, last_msg);
    mavlink_test_dynamixel_status(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // OMAV_TESTSUITE_H
