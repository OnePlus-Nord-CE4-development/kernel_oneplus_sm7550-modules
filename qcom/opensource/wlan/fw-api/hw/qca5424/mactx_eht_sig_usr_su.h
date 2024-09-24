
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MACTX_EHT_SIG_USR_SU_H_
#define _MACTX_EHT_SIG_USR_SU_H_
#if !defined(__ASSEMBLER__)
#endif

#include "eht_sig_usr_su_info.h"
#define NUM_OF_DWORDS_MACTX_EHT_SIG_USR_SU 2

#define NUM_OF_QWORDS_MACTX_EHT_SIG_USR_SU 1


struct mactx_eht_sig_usr_su {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   eht_sig_usr_su_info                                       mactx_eht_sig_usr_su_info_details;
             uint32_t tlv64_padding                                           : 32;  
#else
             struct   eht_sig_usr_su_info                                       mactx_eht_sig_usr_su_info_details;
             uint32_t tlv64_padding                                           : 32;  
#endif
};


 


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_ID_OFFSET        0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_ID_LSB           0
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_ID_MSB           10
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_ID_MASK          0x00000000000007ff


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_MCS_OFFSET       0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_MCS_LSB          11
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_MCS_MSB          14
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_MCS_MASK         0x0000000000007800


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_VALIDATE_0A_OFFSET   0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_VALIDATE_0A_LSB      15
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_VALIDATE_0A_MSB      15
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_VALIDATE_0A_MASK     0x0000000000008000


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_NSS_OFFSET           0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_NSS_LSB              16
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_NSS_MSB              19
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_NSS_MASK             0x00000000000f0000


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_TXBF_OFFSET          0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_TXBF_LSB             20
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_TXBF_MSB             20
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_TXBF_MASK            0x0000000000100000


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_CODING_OFFSET    0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_CODING_LSB       21
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_CODING_MSB       21
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_STA_CODING_MASK      0x0000000000200000


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RESERVED_0B_OFFSET   0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RESERVED_0B_LSB      22
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RESERVED_0B_MSB      30
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RESERVED_0B_MASK     0x000000007fc00000


 

#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 31
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 31
#define MACTX_EHT_SIG_USR_SU_MACTX_EHT_SIG_USR_SU_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x0000000080000000


 

#define MACTX_EHT_SIG_USR_SU_TLV64_PADDING_OFFSET                                   0x0000000000000000
#define MACTX_EHT_SIG_USR_SU_TLV64_PADDING_LSB                                      32
#define MACTX_EHT_SIG_USR_SU_TLV64_PADDING_MSB                                      63
#define MACTX_EHT_SIG_USR_SU_TLV64_PADDING_MASK                                     0xffffffff00000000



#endif    
