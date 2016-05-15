/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : TafApsSndNd.h
  版 本 号   : 初稿
  作    者   : A00165503
  生成日期   : 2011年12月31日
  最近修改   :
  功能描述   : TafApsSndNd.c的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2011年12月31日
    作    者   : A00165503
    修改内容   : 创建文件

******************************************************************************/

#ifndef __TAF_APS_SNDND_H__
#define __TAF_APS_SNDND_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

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


/******************************************************************************
   2 外部函数变量声明
******************************************************************************/


/******************************************************************************
   3 私有定义
******************************************************************************/


/******************************************************************************
   4 全局变量定义
*****************************************************************************/


/******************************************************************************
   5 函数实现
******************************************************************************/

/*****************************************************************************
 函 数 名  : TAF_APS_SndNdPdpActInd
 功能描述  : 向ND Client发送ID_APS_NDCLIENT_PDP_ACT_IND消息
 输入参数  : ucRabId                    - RAB ID
             pucIpv6Addr                - IPv6地址
 输出参数  : 无
 返 回 值  : VOS_OK                     - 发送消息成功
             VOS_ERR                    - 发送消息失败
 调用函数  :
 被调函数  :
*****************************************************************************/
VOS_UINT32 TAF_APS_SndNdPdpActInd(
    VOS_UINT8                           ucRabId,
    VOS_UINT8                          *pucIpv6Addr
);


/*****************************************************************************
 函 数 名  : TAF_APS_SndNdPdpDeactInd
 功能描述  : 向ND Client发送ID_APS_NDCLIENT_PDP_DEACT_IND消息
 输入参数  : ucRabId                    - RAB ID
 输出参数  : 无
 返 回 值  : VOS_OK                     - 发送消息成功
             VOS_ERR                    - 发送消息失败
 调用函数  :
 被调函数  :
*****************************************************************************/
VOS_UINT32 TAF_APS_SndNdPdpDeactInd(
    VOS_UINT8                           ucRabId
);


/*****************************************************************************
 函 数 名  : TAF_APS_SndNdRelInd
 功能描述  : 向ND Client发送ID_APS_NDCLIENT_REL_IND消息
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_OK                     - 发送消息成功
             VOS_ERR                    - 发送消息失败
 调用函数  :
 被调函数  :
*****************************************************************************/
VOS_UINT32 TAF_APS_SndNdRelInd(VOS_VOID);








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

#endif /* end of TafApsSndSm.h */
