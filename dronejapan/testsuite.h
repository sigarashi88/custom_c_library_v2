/** @file
 *    @brief MAVLink comm protocol testsuite generated from dronejapan.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef DRONEJAPAN_TESTSUITE_H
#define DRONEJAPAN_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_dronejapan(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_dronejapan(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_reset_position_local_ned(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RESET_POSITION_LOCAL_NED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_reset_position_local_ned_t packet_in = {
        963497464,963497672,963497880,17859,175
    };
    mavlink_reset_position_local_ned_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.altitude = packet_in.altitude;
        packet1.yaw = packet_in.yaw;
        packet1.target_system = packet_in.target_system;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RESET_POSITION_LOCAL_NED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RESET_POSITION_LOCAL_NED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reset_position_local_ned_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_reset_position_local_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reset_position_local_ned_pack(system_id, component_id, &msg , packet1.target_system , packet1.latitude , packet1.longitude , packet1.altitude , packet1.yaw );
    mavlink_msg_reset_position_local_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reset_position_local_ned_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.latitude , packet1.longitude , packet1.altitude , packet1.yaw );
    mavlink_msg_reset_position_local_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_reset_position_local_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_reset_position_local_ned_send(MAVLINK_COMM_1 , packet1.target_system , packet1.latitude , packet1.longitude , packet1.altitude , packet1.yaw );
    mavlink_msg_reset_position_local_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RESET_POSITION_LOCAL_NED") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RESET_POSITION_LOCAL_NED) != NULL);
#endif
}

static void mavlink_test_dronejapan(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_reset_position_local_ned(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DRONEJAPAN_TESTSUITE_H
