/*******************************************************************************
* File Name: Seven_Segment.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Seven_Segment_H) /* Pins Seven_Segment_H */
#define CY_PINS_Seven_Segment_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Seven_Segment_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Seven_Segment__PORT == 15 && ((Seven_Segment__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Seven_Segment_Write(uint8 value);
void    Seven_Segment_SetDriveMode(uint8 mode);
uint8   Seven_Segment_ReadDataReg(void);
uint8   Seven_Segment_Read(void);
void    Seven_Segment_SetInterruptMode(uint16 position, uint16 mode);
uint8   Seven_Segment_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Seven_Segment_SetDriveMode() function.
     *  @{
     */
        #define Seven_Segment_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Seven_Segment_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Seven_Segment_DM_RES_UP          PIN_DM_RES_UP
        #define Seven_Segment_DM_RES_DWN         PIN_DM_RES_DWN
        #define Seven_Segment_DM_OD_LO           PIN_DM_OD_LO
        #define Seven_Segment_DM_OD_HI           PIN_DM_OD_HI
        #define Seven_Segment_DM_STRONG          PIN_DM_STRONG
        #define Seven_Segment_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Seven_Segment_MASK               Seven_Segment__MASK
#define Seven_Segment_SHIFT              Seven_Segment__SHIFT
#define Seven_Segment_WIDTH              7u

/* Interrupt constants */
#if defined(Seven_Segment__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Seven_Segment_SetInterruptMode() function.
     *  @{
     */
        #define Seven_Segment_INTR_NONE      (uint16)(0x0000u)
        #define Seven_Segment_INTR_RISING    (uint16)(0x0001u)
        #define Seven_Segment_INTR_FALLING   (uint16)(0x0002u)
        #define Seven_Segment_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Seven_Segment_INTR_MASK      (0x01u) 
#endif /* (Seven_Segment__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Seven_Segment_PS                     (* (reg8 *) Seven_Segment__PS)
/* Data Register */
#define Seven_Segment_DR                     (* (reg8 *) Seven_Segment__DR)
/* Port Number */
#define Seven_Segment_PRT_NUM                (* (reg8 *) Seven_Segment__PRT) 
/* Connect to Analog Globals */                                                  
#define Seven_Segment_AG                     (* (reg8 *) Seven_Segment__AG)                       
/* Analog MUX bux enable */
#define Seven_Segment_AMUX                   (* (reg8 *) Seven_Segment__AMUX) 
/* Bidirectional Enable */                                                        
#define Seven_Segment_BIE                    (* (reg8 *) Seven_Segment__BIE)
/* Bit-mask for Aliased Register Access */
#define Seven_Segment_BIT_MASK               (* (reg8 *) Seven_Segment__BIT_MASK)
/* Bypass Enable */
#define Seven_Segment_BYP                    (* (reg8 *) Seven_Segment__BYP)
/* Port wide control signals */                                                   
#define Seven_Segment_CTL                    (* (reg8 *) Seven_Segment__CTL)
/* Drive Modes */
#define Seven_Segment_DM0                    (* (reg8 *) Seven_Segment__DM0) 
#define Seven_Segment_DM1                    (* (reg8 *) Seven_Segment__DM1)
#define Seven_Segment_DM2                    (* (reg8 *) Seven_Segment__DM2) 
/* Input Buffer Disable Override */
#define Seven_Segment_INP_DIS                (* (reg8 *) Seven_Segment__INP_DIS)
/* LCD Common or Segment Drive */
#define Seven_Segment_LCD_COM_SEG            (* (reg8 *) Seven_Segment__LCD_COM_SEG)
/* Enable Segment LCD */
#define Seven_Segment_LCD_EN                 (* (reg8 *) Seven_Segment__LCD_EN)
/* Slew Rate Control */
#define Seven_Segment_SLW                    (* (reg8 *) Seven_Segment__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Seven_Segment_PRTDSI__CAPS_SEL       (* (reg8 *) Seven_Segment__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Seven_Segment_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Seven_Segment__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Seven_Segment_PRTDSI__OE_SEL0        (* (reg8 *) Seven_Segment__PRTDSI__OE_SEL0) 
#define Seven_Segment_PRTDSI__OE_SEL1        (* (reg8 *) Seven_Segment__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Seven_Segment_PRTDSI__OUT_SEL0       (* (reg8 *) Seven_Segment__PRTDSI__OUT_SEL0) 
#define Seven_Segment_PRTDSI__OUT_SEL1       (* (reg8 *) Seven_Segment__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Seven_Segment_PRTDSI__SYNC_OUT       (* (reg8 *) Seven_Segment__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Seven_Segment__SIO_CFG)
    #define Seven_Segment_SIO_HYST_EN        (* (reg8 *) Seven_Segment__SIO_HYST_EN)
    #define Seven_Segment_SIO_REG_HIFREQ     (* (reg8 *) Seven_Segment__SIO_REG_HIFREQ)
    #define Seven_Segment_SIO_CFG            (* (reg8 *) Seven_Segment__SIO_CFG)
    #define Seven_Segment_SIO_DIFF           (* (reg8 *) Seven_Segment__SIO_DIFF)
#endif /* (Seven_Segment__SIO_CFG) */

/* Interrupt Registers */
#if defined(Seven_Segment__INTSTAT)
    #define Seven_Segment_INTSTAT            (* (reg8 *) Seven_Segment__INTSTAT)
    #define Seven_Segment_SNAP               (* (reg8 *) Seven_Segment__SNAP)
    
	#define Seven_Segment_0_INTTYPE_REG 		(* (reg8 *) Seven_Segment__0__INTTYPE)
	#define Seven_Segment_1_INTTYPE_REG 		(* (reg8 *) Seven_Segment__1__INTTYPE)
	#define Seven_Segment_2_INTTYPE_REG 		(* (reg8 *) Seven_Segment__2__INTTYPE)
	#define Seven_Segment_3_INTTYPE_REG 		(* (reg8 *) Seven_Segment__3__INTTYPE)
	#define Seven_Segment_4_INTTYPE_REG 		(* (reg8 *) Seven_Segment__4__INTTYPE)
	#define Seven_Segment_5_INTTYPE_REG 		(* (reg8 *) Seven_Segment__5__INTTYPE)
	#define Seven_Segment_6_INTTYPE_REG 		(* (reg8 *) Seven_Segment__6__INTTYPE)
#endif /* (Seven_Segment__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Seven_Segment_H */


/* [] END OF FILE */
