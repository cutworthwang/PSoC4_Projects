/***************************************************************************//**
* \file cy8c6347bzi_bld53.h
*
* \brief
* CY8C6347BZI-BLD53 device header
*
* \note
* Generator version: 1.2.0.117
* Database revision: rev#1059753
*
********************************************************************************
* \copyright
* Copyright 2016-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef _CY8C4147AZI_S475_H_
#define _CY8C4147AZI_S475_H_

/**
* \addtogroup group_device CY8C4147AZI-S475
* \{
*/

/**
* \addtogroup Configuration_of_CMSIS
* \{
*/

#include "core_cm0plus_psoc4.h"

#define SCB_GET_EZ_DATA_NR(base)        256u
#define SCB_IS_I2C_SLAVE_CAPABLE(base)  true
#define SCB_IS_I2C_MASTER_CAPABLE(base) ((base) != SCB2)
#define SCB_IS_I2C_DS_CAPABLE(base)     ((base) == SCB2)
#define SCB_IS_SPI_SLAVE_CAPABLE(base)  true
#define SCB_IS_SPI_MASTER_CAPABLE(base) ((base) != SCB2)
#define SCB_IS_SPI_DS_CAPABLE(base)     ((base) == SCB2)
#define SCB_IS_UART_CAPABLE(base)       ((base) != SCB2)
    
/* IP List */
#define CY_IP_MXSCB                     1u
#define CY_IP_MXSCB_INSTANCES           3u
#define CY_IP_MXSCB_VERSION             1u    
    
/* Include IP definitions */
#include "cyip_scb.h"


/*******************************************************************************
*                                     SCB
*******************************************************************************/

#define SCB0_BASE                               0x40240000UL
#define SCB1_BASE                               0x40250000UL
#define SCB2_BASE                               0x40260000UL
#define SCB0                                    ((CySCB_Type*) SCB0_BASE)                                         /* 0x40610000 */
#define SCB1                                    ((CySCB_Type*) SCB1_BASE)                                         /* 0x40620000 */
#define SCB2                                    ((CySCB_Type*) SCB2_BASE)                                         /* 0x40630000 */


/** \} CY8C4147AZI-S475 */

#endif /* _CY8C4147AZI_S475_H_ */


/* [] END OF FILE */
