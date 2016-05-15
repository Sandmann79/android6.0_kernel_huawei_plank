#ifndef DTS_EAGLE_DRV_H
#define DTS_EAGLE_DRV_H


#include <linux/compat.h>
#include <linux/ioctl.h>

#define EAGLE_DRIVER_ID 0xF2

#ifdef CONFIG_COMPAT
    #define DTS_EAGLE_COMPAT_IOCTL_GET_CACHE_SIZE          _IOR(EAGLE_DRIVER_ID, 0, __s32)
    #define DTS_EAGLE_COMPAT_IOCTL_SET_CACHE_SIZE          _IOW(EAGLE_DRIVER_ID, 1, __s32)
    #define DTS_EAGLE_COMPAT_IOCTL_GET_PARAM               _IOR(EAGLE_DRIVER_ID, 2, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_SET_PARAM               _IOW(EAGLE_DRIVER_ID, 3, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_SET_CACHE_BLOCK         _IOW(EAGLE_DRIVER_ID, 4, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_SET_ACTIVE_DEVICE       _IOW(EAGLE_DRIVER_ID, 5, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_GET_LICENSE             _IOR(EAGLE_DRIVER_ID, 6, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_SET_LICENSE             _IOW(EAGLE_DRIVER_ID, 7, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_SEND_LICENSE            _IOW(EAGLE_DRIVER_ID, 8, __s32)
    #define DTS_EAGLE_COMPAT_IOCTL_SET_VOLUME_COMMANDS     _IOW(EAGLE_DRIVER_ID, 9, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_GET_CACHE_PREMIX        _IOR(EAGLE_DRIVER_ID, 10, compat_uptr_t)
    #define DTS_EAGLE_COMPAT_IOCTL_GET_CACHE_POSTMIX       _IOR(EAGLE_DRIVER_ID, 11, compat_uptr_t)
#endif

    #define DTS_EAGLE_IOCTL_GET_CACHE_SIZE          _IOR(EAGLE_DRIVER_ID, 0, int)
    #define DTS_EAGLE_IOCTL_SET_CACHE_SIZE          _IOW(EAGLE_DRIVER_ID, 1, int)
    #define DTS_EAGLE_IOCTL_GET_PARAM               _IOR(EAGLE_DRIVER_ID, 2, void*)
    #define DTS_EAGLE_IOCTL_SET_PARAM               _IOW(EAGLE_DRIVER_ID, 3, void*)
    #define DTS_EAGLE_IOCTL_SET_CACHE_BLOCK         _IOW(EAGLE_DRIVER_ID, 4, void*)
    #define DTS_EAGLE_IOCTL_SET_ACTIVE_DEVICE       _IOW(EAGLE_DRIVER_ID, 5, void*)
    #define DTS_EAGLE_IOCTL_GET_LICENSE             _IOR(EAGLE_DRIVER_ID, 6, void*)
    #define DTS_EAGLE_IOCTL_SET_LICENSE             _IOW(EAGLE_DRIVER_ID, 7, void*)
    #define DTS_EAGLE_IOCTL_SEND_LICENSE            _IOW(EAGLE_DRIVER_ID, 8, int)
    #define DTS_EAGLE_IOCTL_SET_VOLUME_COMMANDS     _IOW(EAGLE_DRIVER_ID, 9, void*)
    #define DTS_EAGLE_IOCTL_GET_CACHE_PREMIX        _IOR(EAGLE_DRIVER_ID, 10, void*)
    #define DTS_EAGLE_IOCTL_GET_CACHE_POSTMIX       _IOR(EAGLE_DRIVER_ID, 11, void*)


#define DTS_EAGLE_FLAG_IOCTL_PRE                (1<<30)
#define DTS_EAGLE_FLAG_IOCTL_JUSTSETCACHE       (1<<31)
#define DTS_EAGLE_FLAG_IOCTL_GETFROMCORE        DTS_EAGLE_FLAG_IOCTL_JUSTSETCACHE
#define DTS_EAGLE_FLAG_IOCTL_MASK               (~(DTS_EAGLE_FLAG_IOCTL_PRE | DTS_EAGLE_FLAG_IOCTL_JUSTSETCACHE))


struct dts_eagle_param_desc {
        uint32_t        id;
        int32_t         size;
        int32_t         offset;
        uint32_t        device;
} __packed;

/*****************************************************************************
 实体名称  : AUDIO_EFFECT_HPX_PARAM_SYNC_STRU
 功能描述  : AP发送该消息ID_AP_AUDIO_CMD_PARAM_SYNC_CMD给DSP_PID_AUDIO，开始刷新HPX参数
*****************************************************************************/
 typedef struct
{
    unsigned short                      uhwMsgId;              /*0xDD3D*//*AP开始刷新HPX共享内存参数 */
    unsigned short                      uhwReserve;
} AUDIO_EFFECT_HPX_PARAM_SYNC_STRU;

/*****************************************************************************
 实体名称  : AUDIO_EFFECT_HPX_PARAM_SYNC_CNF_STRU
 功能描述  : 该消息通知AP, HIFI已经获取对共享内存的同步权限
*****************************************************************************/
 typedef struct
{
    unsigned short                          uhwMsgId;           /*_H2ASN_Skip */
    unsigned short                          uhwResult;          /* 是否执行成功 */ /*_H2ASN_Replace VOS_UINT16 uhwResult;*/
} AUDIO_EFFECT_HPX_PARAM_SYNC_CNF_STRU;

/*****************************************************************************
 实体名称  : AUDIO_EFFECT_HPX_PARAM_FINISH_STRU
 功能描述  : AP发送该消息ID_AP_AUDIO_CMD_PARAM_FINISH_CMD给DSP_PID_AUDIO，HPX参数刷新完成
*****************************************************************************/
 typedef struct
{
    unsigned short                      uhwMsgId;              /*0xDDA0*//* 参数刷新完成参数ID */
    unsigned short                      uhwReserve;
    unsigned int                         uhwParaId;           /* 参数ID */
    unsigned int                         uhwOffset;           /* 参数在共享内存中的偏移地址 */
    unsigned int                         uhwSize;           /* 传递参数的大小 */
} AUDIO_EFFECT_HPX_PARAM_FINISH_STRU;

/*****************************************************************************
 实体名称  : AUDIO_EFFECT_HPX_PARAM_FINISH_CNF_STRU
 功能描述  : 该消息通知AP，hifi已经成功取完参数
*****************************************************************************/
 typedef struct
{
    unsigned short                          uhwMsgId;           /*_H2ASN_Skip */
    unsigned short                          uhwResult;          /* 是否执行成功 */ /*_H2ASN_Replace VOS_UINT16 uhwResult;*/
} AUDIO_EFFECT_HPX_PARAM_FINISH_CNF_STRU;

#endif

