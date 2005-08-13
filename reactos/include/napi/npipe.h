#ifndef __INCLUDE_NAPI_NPIPE_H
#define __INCLUDE_NAPI_NPIPE_H

#ifndef __NTDDK_H
#error you must not include <napi/npipe.h> directly, include <ddk/ntddk.h> instead
#endif /* __NTDDK_H */

#define FSCTL_PIPE_ASSIGN_EVENT \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 0, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_DISCONNECT \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 1, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_LISTEN \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_PEEK \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 3, METHOD_BUFFERED, FILE_READ_DATA)

#define FSCTL_PIPE_QUERY_EVENT \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 4, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_TRANSCEIVE \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 5, METHOD_NEITHER,  FILE_READ_DATA | FILE_WRITE_DATA)

#define FSCTL_PIPE_WAIT \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 6, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_IMPERSONATE \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 7, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_SET_CLIENT_PROCESS \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 8, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_QUERY_CLIENT_PROCESS \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 9, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_PIPE_INTERNAL_READ \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2045, METHOD_BUFFERED, FILE_READ_DATA)

#define FSCTL_PIPE_INTERNAL_WRITE \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2046, METHOD_BUFFERED, FILE_WRITE_DATA)

#define FSCTL_PIPE_INTERNAL_TRANSCEIVE \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2047, METHOD_NEITHER, FILE_READ_DATA | FILE_WRITE_DATA)

#define FSCTL_PIPE_INTERNAL_READ_OVFLOW \
        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2048, METHOD_BUFFERED, FILE_READ_DATA)


#define FILE_PIPE_BYTE_STREAM_TYPE	0x00000000
#define FILE_PIPE_MESSAGE_TYPE		0x00000001

#define FILE_PIPE_BYTE_STREAM_MODE	0x00000000
#define FILE_PIPE_MESSAGE_MODE		0x00000001

#define FILE_PIPE_QUEUE_OPERATION	0x00000000
#define FILE_PIPE_COMPLETE_OPERATION	0x00000001

#define FILE_PIPE_INBOUND		0x00000000
#define FILE_PIPE_OUTBOUND		0x00000001
#define FILE_PIPE_FULL_DUPLEX		0x00000002

#define FILE_PIPE_DISCONNECTED_STATE	0x00000001
#define FILE_PIPE_LISTENING_STATE	0x00000002
#define FILE_PIPE_CONNECTED_STATE	0x00000003
#define FILE_PIPE_CLOSING_STATE		0x00000004

#define FILE_PIPE_CLIENT_END		0x00000000
#define FILE_PIPE_SERVER_END		0x00000001

#define FILE_PIPE_READ_DATA		0x00000000
#define FILE_PIPE_WRITE_SPACE		0x00000001


#endif /* __INCLUDE_NAPI_NPIPE_H */
