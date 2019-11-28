/******************************************************************************
* DISCLAIMER

* This software is supplied by Renesas Electronics Corporation and is only 
* intended for use with Renesas products. No other uses are authorized.

* This software is owned by Renesas Electronics Corporation and is protected under 
* all applicable laws, including copyright laws.

* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES
* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, 
* INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
* PARTICULAR PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY 
* DISCLAIMED.

* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS 
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE 
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES 
* FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS 
* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

* Renesas reserves the right, without notice, to make changes to this 
* software and to discontinue the availability of this software.  
* By using this software, you agree to the additional terms and 
* conditions found by accessing the following link:
* http://www.renesas.com/disclaimer
******************************************************************************
* Copyright (C) 2010-2013 Renesas Electronics Corporation.
* and Renesas Solutions Corporation. All rights reserved.
******************************************************************************
* File Name    : R_PG_ADC_10_AD0.c
* Version      : 1.00
* Device(s)    : 
* Tool-Chain   : 
* H/W Platform : 
* Description  : 
* Limitations  : 
******************************************************************************
* History : 28.11.2019 Version Description
*         :   
******************************************************************************/


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include "R_PG_ADC_10_AD0.h"


/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_ADC_10_Set_AD0(void)
*
* Function Name: R_PG_ADC_10_Set_AD0
*
* Description  : Set up the A/D converter unit
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_ADC_10_Create
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_ADC_10_Set_AD0(void)
{
	return R_ADC_10_Create(
		0,
		PDL_ADC_10_CHANNELS_OPTION_1 | PDL_ADC_10_MODE_CONTINUOUS_SCAN | PDL_ADC_10_TRIGGER_SOFTWARE | PDL_ADC_10_DATA_ALIGNMENT_RIGHT | PDL_ADC_10_DMAC_DTC_TRIGGER_DISABLE | PDL_ADC_10_ADSSTR_SPECIFY | PDL_ADC_10_SELF_DIAGNOSTIC_DISABLE,
		6000000,
		25,
		Ad0IntFunc,
		15
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_ADC_10_StartConversionSW_AD0(void)
*
* Function Name: R_PG_ADC_10_StartConversionSW_AD0
*
* Description  : Start the A/D conversion (Software trigger)
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_ADC_10_Control
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_ADC_10_StartConversionSW_AD0(void)
{
	return R_ADC_10_Control( PDL_ADC_10_0_ON );

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_ADC_10_StopConversion_AD0(void)
*
* Function Name: R_PG_ADC_10_StopConversion_AD0
*
* Description  : Stop the A/D conversion
*
* Arguments    : None
*
* Return Value : true  : Stopping conversion succeeded.
*              : false : Stopping conversion failed.
*
* Calling Functions : R_ADC_10_Control
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_ADC_10_StopConversion_AD0(void)
{
	return R_ADC_10_Control( PDL_ADC_10_0_OFF );

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_ADC_10_GetResult_AD0(uint16_t * result)
*
* Function Name: R_PG_ADC_10_GetResult_AD0
*
* Description  : Get the A/D conversion result
*
* Arguments    : uint16_t * result : Destination for storage of the result of A/D conversion.
*
* Return Value : true  : Acquisition of the result succeeded.
*              : false : Acquisition of the result failed.
*
* Calling Functions : R_ADC_10_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_ADC_10_GetResult_AD0(uint16_t * result)
{
	if( result == 0 )
	{
		return false;
	}

	return R_ADC_10_Read(
		0,
		result
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_ADC_10_StopModule_AD0(void)
*
* Function Name: R_PG_ADC_10_StopModule_AD0
*
* Description  : Shut down the A/D converter unit
*
* Arguments    : None
*
* Return Value : true  : Shutting down succeeded.
*              : false : Shutting down failed.
*
* Calling Functions : R_ADC_10_Destroy
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_ADC_10_StopModule_AD0(void)
{
	return R_ADC_10_Destroy( 0 );

}



