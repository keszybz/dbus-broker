#pragma once

/*
 * DBus Protocol Constants
 */

#define DBUS_NAME_FLAG_ALLOW_REPLACEMENT        (1ULL << 0)
#define DBUS_NAME_FLAG_REPLACE_EXISTING         (1ULL << 1)
#define DBUS_NAME_FLAG_DO_NOT_QUEUE             (1ULL << 2)

#define DBUS_REQUEST_NAME_REPLY_PRIMARY_OWNER   (1)
#define DBUS_REQUEST_NAME_REPLY_IN_QUEUE        (2)
#define DBUS_REQUEST_NAME_REPLY_EXISTS          (3)
#define DBUS_REQUEST_NAME_REPLY_ALREADY_OWNER   (4)

#define DBUS_RELEASE_NAME_REPLY_RELEASED        (1)
#define DBUS_RELEASE_NAME_REPLY_NON_EXISTENT    (2)
#define DBUS_RELEASE_NAME_REPLY_NOT_OWNER       (3)

#define DBUS_MESSAGE_TYPE_INVALID       (0)
#define DBUS_MESSAGE_TYPE_METHOD_CALL   (1)
#define DBUS_MESSAGE_TYPE_METHOD_REPLY  (2)
#define DBUS_MESSAGE_TYPE_ERROR         (3)
#define DBUS_MESSAGE_TYPE_SIGNAL        (4)

#define DBUS_MESSAGE_FIELD_INVALID      (0)
#define DBUS_MESSAGE_FIELD_PATH         (1)
#define DBUS_MESSAGE_FIELD_INTERFACE    (2)
#define DBUS_MESSAGE_FIELD_MEMBER       (3)
#define DBUS_MESSAGE_FIELD_ERROR_NAME   (4)
#define DBUS_MESSAGE_FIELD_REPLY_SERIAL (5)
#define DBUS_MESSAGE_FIELD_DESTINATION  (6)
#define DBUS_MESSAGE_FIELD_SENDER       (7)
#define DBUS_MESSAGE_FIELD_SIGNATURE    (8)
#define DBUS_MESSAGE_FIELD_UNIX_FDS     (9)

#define DBUS_HEADER_FLAG_NO_REPLY_EXPECTED                      (1UL << 0)
#define DBUS_HEADER_FLAG_NO_AUTO_START                          (1UL << 1)
#define DBUS_HEADER_FLAG_ALLOW_INTERACTIVE_AUTHORIZATION        (1UL << 2)
