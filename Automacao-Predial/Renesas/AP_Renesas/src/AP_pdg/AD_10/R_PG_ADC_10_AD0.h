/******************************************************************************
* DISCLAIMER
* Please refer to http://www.renesas.com/disclaimer
******************************************************************************
* Copyright (C) 2010-2013 Renesas Electronics Corporation.
* and Renesas Solutions Corporation. All rights reserved.
******************************************************************************
* File Name    : R_PG_ADC_10_AD0.h
* Version      : 1.00
* Description  : 
******************************************************************************
* History : 28.11.2019 Version Description
*         :   
******************************************************************************/


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include "r_pdl_adc_10.h"
#include "r_pdl_adc_10_RX62Nxx.h"
#include "R_PG_IntFuncsExtern.h"

bool R_PG_ADC_10_Set_AD0(void);
bool R_PG_ADC_10_StartConversionSW_AD0(void);
bool R_PG_ADC_10_StopConversion_AD0(void);
bool R_PG_ADC_10_GetResult_AD0(uint16_t * result);
bool R_PG_ADC_10_StopModule_AD0(void);



