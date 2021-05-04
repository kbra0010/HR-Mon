/*******************************************************************************
* File Name: Seven_Segment.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Seven_Segment_ALIASES_H) /* Pins Seven_Segment_ALIASES_H */
#define CY_PINS_Seven_Segment_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Seven_Segment_0			(Seven_Segment__0__PC)
#define Seven_Segment_0_INTR	((uint16)((uint16)0x0001u << Seven_Segment__0__SHIFT))

#define Seven_Segment_1			(Seven_Segment__1__PC)
#define Seven_Segment_1_INTR	((uint16)((uint16)0x0001u << Seven_Segment__1__SHIFT))

#define Seven_Segment_2			(Seven_Segment__2__PC)
#define Seven_Segment_2_INTR	((uint16)((uint16)0x0001u << Seven_Segment__2__SHIFT))

#define Seven_Segment_3			(Seven_Segment__3__PC)
#define Seven_Segment_3_INTR	((uint16)((uint16)0x0001u << Seven_Segment__3__SHIFT))

#define Seven_Segment_4			(Seven_Segment__4__PC)
#define Seven_Segment_4_INTR	((uint16)((uint16)0x0001u << Seven_Segment__4__SHIFT))

#define Seven_Segment_5			(Seven_Segment__5__PC)
#define Seven_Segment_5_INTR	((uint16)((uint16)0x0001u << Seven_Segment__5__SHIFT))

#define Seven_Segment_6			(Seven_Segment__6__PC)
#define Seven_Segment_6_INTR	((uint16)((uint16)0x0001u << Seven_Segment__6__SHIFT))

#define Seven_Segment_INTR_ALL	 ((uint16)(Seven_Segment_0_INTR| Seven_Segment_1_INTR| Seven_Segment_2_INTR| Seven_Segment_3_INTR| Seven_Segment_4_INTR| Seven_Segment_5_INTR| Seven_Segment_6_INTR))

#endif /* End Pins Seven_Segment_ALIASES_H */


/* [] END OF FILE */
