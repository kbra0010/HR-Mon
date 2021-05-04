/*******************************************************************************
* File Name: Decimal_place.h  
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

#if !defined(CY_PINS_Decimal_place_H) /* Pins Decimal_place_H */
#define CY_PINS_Decimal_place_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Decimal_place_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Decimal_place__PORT == 15 && ((Decimal_place__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Decimal_place_Write(uint8 value);
void    Decimal_place_SetDriveMode(uint8 mode);
uint8   Decimal_place_ReadDataReg(void);
uint8   Decimal_place_Read(void);
void    Decimal_place_SetInterruptMode(uint16 position, uint16 mode);
uint8   Decimal_place_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Decimal_place_SetDriveMode() function.
     *  @{
     */
        #define Decimal_place_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Decimal_place_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Decimal_place_DM_RES_UP          PIN_DM_RES_UP
        #define Decimal_place_DM_RES_DWN         PIN_DM_RES_DWN
        #define Decimal_place_DM_OD_LO           PIN_DM_OD_LO
        #define Decimal_place_DM_OD_HI           PIN_DM_OD_HI
        #define Decimal_place_DM_STRONG          PIN_DM_STRONG
        #define Decimal_place_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Decimal_place_MASK               Decimal_place__MASK
#define Decimal_place_SHIFT              Decimal_place__SHIFT
#define Decimal_place_WIDTH              1u

/* Interrupt constants */
#if defined(Decimal_place__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Decimal_place_SetInterruptMode() function.
     *  @{
     */
        #define Decimal_place_INTR_NONE      (uint16)(0x0000u)
        #define Decimal_place_INTR_RISING    (uint16)(0x0001u)
        #define Decimal_place_INTR_FALLING   (uint16)(0x0002u)
        #define Decimal_place_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Decimal_place_INTR_MASK      (0x01u) 
#endif /* (Decimal_place__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Decimal_place_PS                     (* (reg8 *) Decimal_place__PS)
/* Data Register */
#define Decimal_place_DR                     (* (reg8 *) Decimal_place__DR)
/* Port Number */
#define Decimal_place_PRT_NUM                (* (reg8 *) Decimal_place__PRT) 
/* Connect to Analog Globals */                                                  
#define Decimal_place_AG                     (* (reg8 *) Decimal_place__AG)                       
/* Analog MUX bux enable */
#define Decimal_place_AMUX                   (* (reg8 *) Decimal_place__AMUX) 
/* Bidirectional Enable */                                                        
#define Decimal_place_BIE                    (* (reg8 *) Decimal_place__BIE)
/* Bit-mask for Aliased Register Access */
#define Decimal_place_BIT_MASK               (* (reg8 *) Decimal_place__BIT_MASK)
/* Bypass Enable */
#define Decimal_place_BYP                    (* (reg8 *) Decimal_place__BYP)
/* Port wide control signals */                                                   
#define Decimal_place_CTL                    (* (reg8 *) Decimal_place__CTL)
/* Drive Modes */
#define Decimal_place_DM0                    (* (reg8 *) Decimal_place__DM0) 
#define Decimal_place_DM1                    (* (reg8 *) Decimal_place__DM1)
#define Decimal_place_DM2                    (* (reg8 *) Decimal_place__DM2) 
/* Input Buffer Disable Override */
#define Decimal_place_INP_DIS                (* (reg8 *) Decimal_place__INP_DIS)
/* LCD Common or Segment Drive */
#define Decimal_place_LCD_COM_SEG            (* (reg8 *) Decimal_place__LCD_COM_SEG)
/* Enable Segment LCD */
#define Decimal_place_LCD_EN                 (* (reg8 *) Decimal_place__LCD_EN)
/* Slew Rate Control */
#define Decimal_place_SLW                    (* (reg8 *) Decimal_place__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Decimal_place_PRTDSI__CAPS_SEL       (* (reg8 *) Decimal_place__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Decimal_place_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Decimal_place__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Decimal_place_PRTDSI__OE_SEL0        (* (reg8 *) Decimal_place__PRTDSI__OE_SEL0) 
#define Decimal_place_PRTDSI__OE_SEL1        (* (reg8 *) Decimal_place__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Decimal_place_PRTDSI__OUT_SEL0       (* (reg8 *) Decimal_place__PRTDSI__OUT_SEL0) 
#define Decimal_place_PRTDSI__OUT_SEL1       (* (reg8 *) Decimal_place__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Decimal_place_PRTDSI__SYNC_OUT       (* (reg8 *) Decimal_place__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Decimal_place__SIO_CFG)
    #define Decimal_place_SIO_HYST_EN        (* (reg8 *) Decimal_place__SIO_HYST_EN)
    #define Decimal_place_SIO_REG_HIFREQ     (* (reg8 *) Decimal_place__SIO_REG_HIFREQ)
    #define Decimal_place_SIO_CFG            (* (reg8 *) Decimal_place__SIO_CFG)
    #define Decimal_place_SIO_DIFF           (* (reg8 *) Decimal_place__SIO_DIFF)
#endif /* (Decimal_place__SIO_CFG) */

/* Interrupt Registers */
#if defined(Decimal_place__INTSTAT)
    #define Decimal_place_INTSTAT            (* (reg8 *) Decimal_place__INTSTAT)
    #define Decimal_place_SNAP               (* (reg8 *) Decimal_place__SNAP)
    
	#define Decimal_place_0_INTTYPE_REG 		(* (reg8 *) Decimal_place__0__INTTYPE)
#endif /* (Decimal_place__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Decimal_place_H */


/* [] END OF FILE */
