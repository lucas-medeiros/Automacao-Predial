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
* File Name    : R_PG_IO_PORT_P0.c
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
#include "R_PG_IO_PORT_P0.h"


/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P0(void)
*
* Function Name: R_PG_IO_PORT_Set_P0
*
* Description  : Set up the I/O port
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P0(void)
{
	bool res;

	res = R_IO_PORT_Set(
		PDL_IO_PORT_0_5,
		PDL_IO_PORT_INPUT | PDL_IO_PORT_INPUT_BUFFER_OFF | PDL_IO_PORT_CMOS
	);

	if( !res ){
		return res;
	}

	return res;
}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Set_P05(void)
*
* Function Name: R_PG_IO_PORT_Set_P05
*
* Description  : Set up the I/O port pin
*
* Arguments    : None
*
* Return Value : true  : Setting was made correctly.
*              : false : Setting failed.
*
* Calling Functions : R_IO_PORT_Set
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Set_P05(void)
{
	return R_IO_PORT_Set(
		PDL_IO_PORT_0_5,
		PDL_IO_PORT_INPUT | PDL_IO_PORT_INPUT_BUFFER_OFF | PDL_IO_PORT_CMOS
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P0(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P0
*
* Description  : Read data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P0(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_0,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P05(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P05
*
* Description  : Read 1-bit data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P05(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_0_5,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Read_P07(uint8_t * data)
*
* Function Name: R_PG_IO_PORT_Read_P07
*
* Description  : Read 1-bit data from the I/O port register
*
* Arguments    : uint8_t * data : Destination for storage of the read pin state.
*
* Return Value : true  : Reading proceeded correctly.
*              : false : Reading failed.
*
* Calling Functions : R_IO_PORT_Read
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Read_P07(uint8_t * data)
{
	if( data == 0 ){ return false; }

	return R_IO_PORT_Read(
		PDL_IO_PORT_0_7,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P0(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P0
*
* Description  : Write data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P0(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_0,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P05(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P05
*
* Description  : Write 1-bit data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P05(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_0_5,
		data
	);

}

/******************************************************************************
* ID           : 
*
* Include      : 
*
* Declaration  : bool R_PG_IO_PORT_Write_P07(uint8_t data)
*
* Function Name: R_PG_IO_PORT_Write_P07
*
* Description  : Write 1-bit data to the I/O port data register
*
* Arguments    : uint8_t data : Value to be written.
*
* Return Value : true  : Writing proceeded correctly.
*              : false : Writing failed.
*
* Calling Functions : R_IO_PORT_Write
*
* Details      : Please refer to the Reference Manual.
******************************************************************************/
bool R_PG_IO_PORT_Write_P07(uint8_t data)
{
	return R_IO_PORT_Write(
		PDL_IO_PORT_0_7,
		data
	);

}



