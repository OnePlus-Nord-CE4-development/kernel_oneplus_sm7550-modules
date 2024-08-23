
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MACTX_VHT_SIG_B_SU160_H_
#define _MACTX_VHT_SIG_B_SU160_H_
#if !defined(__ASSEMBLER__)
#endif

#include "vht_sig_b_su160_info.h"
#define NUM_OF_DWORDS_MACTX_VHT_SIG_B_SU160 8

#define NUM_OF_QWORDS_MACTX_VHT_SIG_B_SU160 4


struct mactx_vht_sig_b_su160 {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   vht_sig_b_su160_info                                      mactx_vht_sig_b_su160_info_details;
#else
             struct   vht_sig_b_su160_info                                      mactx_vht_sig_b_su160_info_details;
#endif
};


 


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_OFFSET      0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_LSB         0
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_MSB         20
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_MASK        0x00000000001fffff


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_LSB  21
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_MSB  22
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_MASK 0x0000000000600000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_OFFSET        0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_LSB           23
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_MSB           28
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_MASK          0x000000001f800000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_0_OFFSET  0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_0_LSB     29
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_0_MSB     30
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_0_MASK    0x0000000060000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_OFFSET      0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_LSB         31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_MSB         31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_MASK        0x0000000080000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_A_LSB  32
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_A_MSB  52
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_A_MASK 0x001fffff00000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_A_LSB 53
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_A_MSB 54
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_A_MASK 0x0060000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_A_LSB    55
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_A_MSB    60
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_A_MASK   0x1f80000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_1_OFFSET  0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_1_LSB     61
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_1_MSB     62
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_1_MASK    0x6000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_A_OFFSET 0x0000000000000000
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_A_LSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_A_MSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_A_MASK 0x8000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_B_LSB  0
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_B_MSB  20
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_B_MASK 0x00000000001fffff


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_B_LSB 21
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_B_MSB 22
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_B_MASK 0x0000000000600000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_B_LSB    23
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_B_MSB    28
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_B_MASK   0x000000001f800000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_2_OFFSET  0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_2_LSB     29
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_2_MSB     30
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_2_MASK    0x0000000060000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_B_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_B_LSB  31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_B_MSB  31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_B_MASK 0x0000000080000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_C_LSB  32
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_C_MSB  52
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_C_MASK 0x001fffff00000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_C_LSB 53
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_C_MSB 54
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_C_MASK 0x0060000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_C_LSB    55
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_C_MSB    60
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_C_MASK   0x1f80000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_3_OFFSET  0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_3_LSB     61
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_3_MSB     62
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_3_MASK    0x6000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_C_OFFSET 0x0000000000000008
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_C_LSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_C_MSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_C_MASK 0x8000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_D_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_D_LSB  0
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_D_MSB  20
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_D_MASK 0x00000000001fffff


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_D_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_D_LSB 21
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_D_MSB 22
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_D_MASK 0x0000000000600000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_D_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_D_LSB    23
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_D_MSB    28
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_D_MASK   0x000000001f800000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_4_OFFSET  0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_4_LSB     29
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_4_MSB     30
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_4_MASK    0x0000000060000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_D_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_D_LSB  31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_D_MSB  31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_D_MASK 0x0000000080000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_E_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_E_LSB  32
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_E_MSB  52
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_E_MASK 0x001fffff00000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_E_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_E_LSB 53
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_E_MSB 54
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_E_MASK 0x0060000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_E_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_E_LSB    55
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_E_MSB    60
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_E_MASK   0x1f80000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_5_OFFSET  0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_5_LSB     61
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_5_MSB     62
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_5_MASK    0x6000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_E_OFFSET 0x0000000000000010
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_E_LSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_E_MSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_E_MASK 0x8000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_F_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_F_LSB  0
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_F_MSB  20
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_F_MASK 0x00000000001fffff


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_F_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_F_LSB 21
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_F_MSB 22
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_F_MASK 0x0000000000600000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_F_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_F_LSB    23
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_F_MSB    28
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_F_MASK   0x000000001f800000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_6_OFFSET  0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_6_LSB     29
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_6_MSB     30
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_6_MASK    0x0000000060000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_F_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_F_LSB  31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_F_MSB  31
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_F_MASK 0x0000000080000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_G_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_G_LSB  32
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_G_MSB  52
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_LENGTH_COPY_G_MASK 0x001fffff00000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_G_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_G_LSB 53
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_G_MSB 54
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_VHTB_RESERVED_COPY_G_MASK 0x0060000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_G_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_G_LSB    55
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_G_MSB    60
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_TAIL_COPY_G_MASK   0x1f80000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_7_OFFSET  0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_7_LSB     61
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_7_MSB     62
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RESERVED_7_MASK    0x6000000000000000


 

#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_G_OFFSET 0x0000000000000018
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_G_LSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_G_MSB  63
#define MACTX_VHT_SIG_B_SU160_MACTX_VHT_SIG_B_SU160_INFO_DETAILS_RX_NDP_COPY_G_MASK 0x8000000000000000



#endif    
