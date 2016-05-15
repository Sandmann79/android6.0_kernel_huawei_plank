

#ifndef __EDMA_BALONG_H__
#define __EDMA_BALONG_H__

#include "drv_edma_enum.h"


#define    HI_CH_STAT_OFFSET                                 (0x690) /* 全局DMA状态寄存器。 */
/* +cn*0x40 */
#define    HI_CX_BINDX_OFFSET                              (0x804) /* 通道X的二维地址偏移量配置寄存器。 */
#define    HI_CX_CINDX_OFFSET                              (0x808) /* 通道X的三维地址偏移量配置寄存器。 */
#define    HI_CX_CNT1_0_OFFSET                               (0x80C) /* 通道X的传输长度1配置寄存器。 */
#define    HI_CX_CNT0_0_OFFSET                               (0x810) /* 通道X的传输长度配置寄存器。 */
#define    HI_CX_SRC_ADDR_0_OFFSET                           (0x814) /* 通道X的源地址寄存器。 */
#define    HI_CX_DES_ADDR_0_OFFSET                           (0x818) /* 通道X的目的地址寄存器。 */
#define    HI_CX_CONFIG_0_OFFSET                             (0x81C) /* 通道X的配置寄存器。 */
#define    HI_CX_AXI_CONF_0_OFFSET                           (0x820) /* 通道X的AXI特殊操作配置寄存器。 */


/* CX_CONFIG 寄存器配置  */

/* ch_en    [0..0]   当前通道使能控制。当写该寄存器，控制当前通道的运行。0：通道禁能/复位；1：通道使能。当读该寄存器，显示当前通道的状态。0：通道停止中；1：通道运行中(链表传输使能时，通道一直使能)。 */
/* itc_en   [1..1]   链表节点传输完成中断使能。该位用于配置当前链表节点传输完成后是否触发节点传输完成中断。0：当前链表节点传输完成以后不触发链表节点传输完成中断；1：当前链表节点传输完成以后触发链表节点传输完成中断，但是最后一个节点传输完成以后，链表节点传输完成中断不会被触发。注意：无论该bit配置为0或1，通道所有链表节点传输完成以后均会上报通道传输完成中断。 */
/* flow_ctrl[3..2]   流控制和传输类型。00：存储器和存储器之间传输，DMAC流控；01：存储器和外设之间传输，DMAC流控；10：存储器和外设之间传输，外设流控；11：Reserved；配置reserved值会上报配置错误中断。 */
/* peri     [9..4]   外设请求号。如果是存储器到存储器，这些位将被忽略。目前最大支持32个外设请求，所以bit9目前不起作用，实际使用的为bit8:bit4。在不同的外设请求宏定义配置下面，peri的有效值会根据外设请求的有效数目变化，比如宏定义只使用16个外设请求，则peri从0到15的值是有效的，更高位的值可以配置，但是会被忽略掉。 */
/* reserve  [11..10] 保留。 */
/* dw       [14..12] 目的数据宽度。000：8bit；001：16bit；010：32bit；011：64bit；100：128bit；101：256bit；110、111：reserved。 */
/* reserve  [15..15] 保留。 */
/* sw       [18..16] 源数据宽度。000：8bit；001：16bit；010：32bit；011：64bit；100：128bit；101：256bit；110、111：reserved。 */
/* reserve  [19..19] 保留。 */
/* dl       [23..20] 目的传输burst长度。0000：burst length为1；0001：burst length为2；…1111：burst length为16。 */
/* sl       [27..24] 源传输burst长度。0000：burst length为1；0001：burst length为2；…1111：burst length为16。 */
/* dmode    [28..28] 目的地址的递增模式。0：A-sync模式，三维的地址偏移是一个frame的最后一个array的首地址到下一个frame的第一个array的首地址间隔；1：AB_sync模式，三维的地址偏移是一个frame的第一个array的首地址到下一个frame的第一个array的首地址的间隔。 */
/* smode    [29..29] 源地址的递增模式。0：A-sync模式，三维的地址偏移是一个frame的最后一个array的首地址到下一个frame的第一个array的首地址间隔；1：AB_sync模式，三维的地址偏移是一个frame的第一个array的首地址到下一个frame的第一个array的首地址的间隔。 */
/* di       [30..30] 目的地址递增设置。0：目的地址不递增；1：目的地址每传一个数就递增一次。目的设备为外设时目的地址不递增；目的设备为存储器时目的地址递增。 */
/* si       [31..31] 源地址递增设置。0：源地址不递增；1：源地址每传一个数就递增一次。源设备为外设时源地址不递增；源设备为存储器时源地址递增。 */

/* CX_CONFIG 寄存器配置 使用 M2M 传输，源目的地址均递增
在C核测试，burst len配成 64bit [011], len 配置成 [1111]
即 CX_CONFIG 配成 0xCFF33000速度最快 */
#define  EDMA_CONFIG_FAST   (0xCFF33000) /*si=1,di=1,sl=0xf,dl=0xf,sw=3,dw=3*/
#define  EDMA_CONFIG_CH_EN  (0x1)


/*******************************************************************************
函数名:     s32 bsp_edma_channel_state(u32 channel_id)
函数描述:   判断 edma 通道 id 是否在工作 。
输入参数:   u32 channel_id
输出参数:   无
返回值:     busy：非0,非-1
            idle：0
            error: -1
*******************************************************************************/
s32 bsp_edma_channel_state(u32 channel_id);


/*******************************************************************************
函数名:     s32 bsp_edma_state(void)
函数描述:   判断 edma 是否有通道在工作。
输入参数:   无
输出参数:   无
返回值:     busy：非0
            idle：0
*******************************************************************************/
u32 bsp_edma_state(void);


/*******************************************************************************
函数名:     u32 bsp_edma_m2m_chan(u32 chan, u32 src_addr, u32 dest_addr, u32 len)

函数描述:   启动一次 EDMA传输。启动EDMA传输后，就返回，需要用户通过接口
            判断通道是否搬移完成。

输入参数:   channel_id：通道ID, TL DSP 搬移 TCM 使用 0 / 1 通道, 低功耗复用。
            src_addr：数据传输源地址，必须是物理地址
            des_addr：数据传输目的地址，必须是物理地址
            len：数据传输长度，单位：字节；
                可支持 len<65535字节的任意长度。
                当len>=64k，需要使用二维传输，要求 len 4k(0x1000)对齐
输出参数:   无
返回值:     成功：0
            失败：负数
*******************************************************************************/
s32 bsp_edma_m2m_channel(u32 channel_id, u32 src_addr, u32 dest_addr, u32 len);


#endif


