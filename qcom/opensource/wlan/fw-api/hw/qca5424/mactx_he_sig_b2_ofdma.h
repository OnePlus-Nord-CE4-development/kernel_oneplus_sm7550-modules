
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MACTX_HE_SIG_B2_OFDMA_H_
#define _MACTX_HE_SIG_B2_OFDMA_H_
#if !defined(__ASSEMBLER__)
#endif

#include "he_sig_b2_ofdma_info.h"
#define NUM_OF_DWORDS_MACTX_HE_SIG_B2_OFDMA 2

#define NUM_OF_QWORDS_MACTX_HE_SIG_B2_OFDMA 1


struct mactx_he_sig_b2_ofdma {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   he_sig_b2_ofdma_info                                      mactx_he_sig_b2_ofdma_info_details;
#else
             struct   he_sig_b2_ofdma_info                                      mactx_he_sig_b2_ofdma_info_details;
#endif
};


 


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_OFFSET      0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_LSB         0
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_MSB         10
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_MASK        0x00000000000007ff


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_OFFSET        0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_LSB           11
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_MSB           13
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_MASK          0x0000000000003800


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_OFFSET        0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_LSB           14
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_MSB           14
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_MASK          0x0000000000004000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_OFFSET     0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_LSB        15
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_MSB        18
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_MASK       0x0000000000078000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_OFFSET     0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_LSB        19
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_MSB        19
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_MASK       0x0000000000080000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_LSB     20
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_MSB     20
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_MASK    0x0000000000100000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_LSB     21
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_MSB     30
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_MASK    0x000000007fe00000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 31
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 31
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x0000000080000000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_LSB     32
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_MSB     39
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_MASK    0x000000ff00000000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_CC_MASK_OFFSET     0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_CC_MASK_LSB        40
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_CC_MASK_MSB        47
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_CC_MASK_MASK       0x0000ff0000000000


 

#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_LSB    48
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_MSB    63
#define MACTX_HE_SIG_B2_OFDMA_MACTX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_MASK   0xffff000000000000



#endif    
