/*""FILE COMMENT""*************************************************************
* System Name	: Voltage detection circuit API for RX62Nxx
* File Name		: r_pdl_lvd_RX62Nxx.h
* Version		: 1.10
* Contents		: LVD API header
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
*******************************************************************************
* Copyright, 2013. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2013.10.29
*				: Ver 1.10
*				: CS release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_LVD_RX62Nxx_H
#define R_PDL_LVD_RX62Nxx_H

/* Library prototypes */
bool R_LVD_ControlAll(
	const uint8_t
);

/* Macro definitions */

#define R_LVD_Control(a) \
( \
R_LVD_ControlAll( (a) ) \
)

#endif
/* End of file */
