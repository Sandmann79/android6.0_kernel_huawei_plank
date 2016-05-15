

#ifndef __IMMMEMZC_H__
#define __IMMMEMZC_H__


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "PsTypeDef.h"
#include "product_config.h"
#if ( FEATURE_ON == FEATURE_SKB_EXP )
#include "IMMmem.h"
#else
#include "IMMmem_Intra.h"
#endif




#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

#if (FEATURE_OFF == FEATURE_SKB_EXP)
/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define IMM_PRIV_CB(skb)    ((IMM_PRIV_CB_STRU *)((skb)->cb))


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
typedef struct  
{
    unsigned short usApp;
    unsigned char  aucRsv[2];
}IMM_PRIV_CB_STRU;


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
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

#endif /* end of IMMmemZC.h */
