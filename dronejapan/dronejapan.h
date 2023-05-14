/** @file
 *  @brief MAVLink comm protocol generated from dronejapan.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_DRONEJAPAN_H
#define MAVLINK_DRONEJAPAN_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_DRONEJAPAN.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_DRONEJAPAN_XML_HASH -241630304892424073

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{50505, 133, 15, 15, 1, 14, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_DRONEJAPAN

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_reset_position_local_ned.h"

// base include



#if MAVLINK_DRONEJAPAN_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_RESET_POSITION_LOCAL_NED}
# define MAVLINK_MESSAGE_NAMES {{ "RESET_POSITION_LOCAL_NED", 50505 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_DRONEJAPAN_H
