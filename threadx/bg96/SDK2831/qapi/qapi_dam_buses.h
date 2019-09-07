#ifndef __QAPI_DAM_BUSES_H__
#define __QAPI_DAM_BUSES_H__

/**
 * @file qapi_dam_buses.h
 */

/*==================================================================================================
Copyright (c) 2017 Qualcomm Technologies, Inc.
        All Rights Reserved.
Qualcomm Technologies, Inc. Confidential and Proprietary.

==================================================================================================*/
/*==================================================================================================
                                            DESCRIPTION
====================================================================================================

==================================================================================================*/
/*==================================================================================================
Edit History

$Header: //components/rel/core.tx/1.0.c3/buses/api/qapi_dam_buses.h#1 $

when       who     what, where, why
--------   ---     --------------------------------------------------------
02/28/17   ska     Created Initial version

==================================================================================================*/

/*==================================================================================================
                                           INCLUDE FILES
==================================================================================================*/
//#include "qurt_txm_qapi_fwk.h" //Hyman_20180102 comments because no this file.
#include "qapi_txm_base.h"



/*==================================================================================================
                                             ENUMERATIONS
==================================================================================================*/
#define TXM_QAPI_BUSES_UART_BASE TXM_QAPI_BUSES_BASE
#define TXM_QAPI_BUSES_SPI_BASE  TXM_QAPI_BUSES_BASE + 30
#define TXM_QAPI_BUSES_I2C_BASE  TXM_QAPI_BUSES_BASE + 60

#endif

