

#ifndef __TAFCBAPROCAT_H__
#define __TAFCBAPROCAT_H__

/*****************************************************************************
  1 其他头文件包含                            
*****************************************************************************/
#include  "TafCbaCtx.h"
#include  "TafCbsInterface.h"
#include  "MnMsgApi.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

#if ((FEATURE_ON == FEATURE_GCBS) || (FEATURE_ON == FEATURE_WCBS))


/*****************************************************************************
  2 宏定义 
*****************************************************************************/


/*****************************************************************************
  3 枚举定义 
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


VOS_VOID TAF_CBA_ProcAtMsg(
    struct MsgCB                       *pstMsg
);

VOS_UINT32 TAF_CBA_RcvAtModifyMsgIds(VOS_VOID);

VOS_VOID TAF_CBA_UpdateAsCbsActiveState(VOS_VOID);

VOS_VOID TAF_CBA_SndAtRcvCbmMsg(
    const MN_MSG_CBRAW_TS_DATA_STRU    *pstTpduData
);

VOS_VOID  TAF_CBA_SndAtGetAllCbMidsRslt(
    const MN_MSG_EVENT_PARM_STRU       *pstEventParm
);

VOS_UINT32 TAF_CBA_GetActiveMids(
    TAF_CBA_CBMI_RANGE_LIST_STRU       *pstActiveCbMids
);

#if (FEATURE_ON == FEATURE_ETWS)

VOS_VOID  TAF_CBA_SndAtEtwsPrimNtfMsg(
    RR_CBS_ETWS_PRIMARY_NOTIFY_IND_STRU                    *pstPrimNtfMsg
);

#endif

#endif


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of TafCbaProcAt.h */
