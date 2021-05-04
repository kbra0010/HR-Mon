/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Digit_0 */
#define Digit_0__0__INTTYPE CYREG_PICU1_INTTYPE7
#define Digit_0__0__MASK 0x80u
#define Digit_0__0__PC CYREG_PRT1_PC7
#define Digit_0__0__PORT 1u
#define Digit_0__0__SHIFT 7u
#define Digit_0__AG CYREG_PRT1_AG
#define Digit_0__AMUX CYREG_PRT1_AMUX
#define Digit_0__BIE CYREG_PRT1_BIE
#define Digit_0__BIT_MASK CYREG_PRT1_BIT_MASK
#define Digit_0__BYP CYREG_PRT1_BYP
#define Digit_0__CTL CYREG_PRT1_CTL
#define Digit_0__DM0 CYREG_PRT1_DM0
#define Digit_0__DM1 CYREG_PRT1_DM1
#define Digit_0__DM2 CYREG_PRT1_DM2
#define Digit_0__DR CYREG_PRT1_DR
#define Digit_0__INP_DIS CYREG_PRT1_INP_DIS
#define Digit_0__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Digit_0__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Digit_0__LCD_EN CYREG_PRT1_LCD_EN
#define Digit_0__MASK 0x80u
#define Digit_0__PORT 1u
#define Digit_0__PRT CYREG_PRT1_PRT
#define Digit_0__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Digit_0__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Digit_0__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Digit_0__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Digit_0__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Digit_0__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Digit_0__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Digit_0__PS CYREG_PRT1_PS
#define Digit_0__SHIFT 7u
#define Digit_0__SLW CYREG_PRT1_SLW

/* Digit_1 */
#define Digit_1__0__INTTYPE CYREG_PICU1_INTTYPE6
#define Digit_1__0__MASK 0x40u
#define Digit_1__0__PC CYREG_PRT1_PC6
#define Digit_1__0__PORT 1u
#define Digit_1__0__SHIFT 6u
#define Digit_1__AG CYREG_PRT1_AG
#define Digit_1__AMUX CYREG_PRT1_AMUX
#define Digit_1__BIE CYREG_PRT1_BIE
#define Digit_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define Digit_1__BYP CYREG_PRT1_BYP
#define Digit_1__CTL CYREG_PRT1_CTL
#define Digit_1__DM0 CYREG_PRT1_DM0
#define Digit_1__DM1 CYREG_PRT1_DM1
#define Digit_1__DM2 CYREG_PRT1_DM2
#define Digit_1__DR CYREG_PRT1_DR
#define Digit_1__INP_DIS CYREG_PRT1_INP_DIS
#define Digit_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Digit_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Digit_1__LCD_EN CYREG_PRT1_LCD_EN
#define Digit_1__MASK 0x40u
#define Digit_1__PORT 1u
#define Digit_1__PRT CYREG_PRT1_PRT
#define Digit_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Digit_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Digit_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Digit_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Digit_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Digit_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Digit_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Digit_1__PS CYREG_PRT1_PS
#define Digit_1__SHIFT 6u
#define Digit_1__SLW CYREG_PRT1_SLW

/* Digit_2 */
#define Digit_2__0__INTTYPE CYREG_PICU1_INTTYPE5
#define Digit_2__0__MASK 0x20u
#define Digit_2__0__PC CYREG_PRT1_PC5
#define Digit_2__0__PORT 1u
#define Digit_2__0__SHIFT 5u
#define Digit_2__AG CYREG_PRT1_AG
#define Digit_2__AMUX CYREG_PRT1_AMUX
#define Digit_2__BIE CYREG_PRT1_BIE
#define Digit_2__BIT_MASK CYREG_PRT1_BIT_MASK
#define Digit_2__BYP CYREG_PRT1_BYP
#define Digit_2__CTL CYREG_PRT1_CTL
#define Digit_2__DM0 CYREG_PRT1_DM0
#define Digit_2__DM1 CYREG_PRT1_DM1
#define Digit_2__DM2 CYREG_PRT1_DM2
#define Digit_2__DR CYREG_PRT1_DR
#define Digit_2__INP_DIS CYREG_PRT1_INP_DIS
#define Digit_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Digit_2__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Digit_2__LCD_EN CYREG_PRT1_LCD_EN
#define Digit_2__MASK 0x20u
#define Digit_2__PORT 1u
#define Digit_2__PRT CYREG_PRT1_PRT
#define Digit_2__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Digit_2__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Digit_2__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Digit_2__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Digit_2__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Digit_2__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Digit_2__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Digit_2__PS CYREG_PRT1_PS
#define Digit_2__SHIFT 5u
#define Digit_2__SLW CYREG_PRT1_SLW

/* Digit_3 */
#define Digit_3__0__INTTYPE CYREG_PICU1_INTTYPE4
#define Digit_3__0__MASK 0x10u
#define Digit_3__0__PC CYREG_PRT1_PC4
#define Digit_3__0__PORT 1u
#define Digit_3__0__SHIFT 4u
#define Digit_3__AG CYREG_PRT1_AG
#define Digit_3__AMUX CYREG_PRT1_AMUX
#define Digit_3__BIE CYREG_PRT1_BIE
#define Digit_3__BIT_MASK CYREG_PRT1_BIT_MASK
#define Digit_3__BYP CYREG_PRT1_BYP
#define Digit_3__CTL CYREG_PRT1_CTL
#define Digit_3__DM0 CYREG_PRT1_DM0
#define Digit_3__DM1 CYREG_PRT1_DM1
#define Digit_3__DM2 CYREG_PRT1_DM2
#define Digit_3__DR CYREG_PRT1_DR
#define Digit_3__INP_DIS CYREG_PRT1_INP_DIS
#define Digit_3__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Digit_3__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Digit_3__LCD_EN CYREG_PRT1_LCD_EN
#define Digit_3__MASK 0x10u
#define Digit_3__PORT 1u
#define Digit_3__PRT CYREG_PRT1_PRT
#define Digit_3__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Digit_3__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Digit_3__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Digit_3__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Digit_3__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Digit_3__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Digit_3__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Digit_3__PS CYREG_PRT1_PS
#define Digit_3__SHIFT 4u
#define Digit_3__SLW CYREG_PRT1_SLW

/* Digit_Reg */
#define Digit_Reg_Sync_ctrl_reg__0__MASK 0x01u
#define Digit_Reg_Sync_ctrl_reg__0__POS 0
#define Digit_Reg_Sync_ctrl_reg__1__MASK 0x02u
#define Digit_Reg_Sync_ctrl_reg__1__POS 1
#define Digit_Reg_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define Digit_Reg_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define Digit_Reg_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB08_09_CTL
#define Digit_Reg_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define Digit_Reg_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB08_09_CTL
#define Digit_Reg_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB08_09_MSK
#define Digit_Reg_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define Digit_Reg_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB08_09_MSK
#define Digit_Reg_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define Digit_Reg_Sync_ctrl_reg__2__MASK 0x04u
#define Digit_Reg_Sync_ctrl_reg__2__POS 2
#define Digit_Reg_Sync_ctrl_reg__3__MASK 0x08u
#define Digit_Reg_Sync_ctrl_reg__3__POS 3
#define Digit_Reg_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define Digit_Reg_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB08_CTL
#define Digit_Reg_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB08_ST_CTL
#define Digit_Reg_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB08_CTL
#define Digit_Reg_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB08_ST_CTL
#define Digit_Reg_Sync_ctrl_reg__MASK 0x0Fu
#define Digit_Reg_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define Digit_Reg_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define Digit_Reg_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB08_MSK

/* Decimal_place */
#define Decimal_place__0__INTTYPE CYREG_PICU2_INTTYPE7
#define Decimal_place__0__MASK 0x80u
#define Decimal_place__0__PC CYREG_PRT2_PC7
#define Decimal_place__0__PORT 2u
#define Decimal_place__0__SHIFT 7u
#define Decimal_place__AG CYREG_PRT2_AG
#define Decimal_place__AMUX CYREG_PRT2_AMUX
#define Decimal_place__BIE CYREG_PRT2_BIE
#define Decimal_place__BIT_MASK CYREG_PRT2_BIT_MASK
#define Decimal_place__BYP CYREG_PRT2_BYP
#define Decimal_place__CTL CYREG_PRT2_CTL
#define Decimal_place__DM0 CYREG_PRT2_DM0
#define Decimal_place__DM1 CYREG_PRT2_DM1
#define Decimal_place__DM2 CYREG_PRT2_DM2
#define Decimal_place__DR CYREG_PRT2_DR
#define Decimal_place__INP_DIS CYREG_PRT2_INP_DIS
#define Decimal_place__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Decimal_place__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Decimal_place__LCD_EN CYREG_PRT2_LCD_EN
#define Decimal_place__MASK 0x80u
#define Decimal_place__PORT 2u
#define Decimal_place__PRT CYREG_PRT2_PRT
#define Decimal_place__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Decimal_place__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Decimal_place__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Decimal_place__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Decimal_place__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Decimal_place__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Decimal_place__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Decimal_place__PS CYREG_PRT2_PS
#define Decimal_place__SHIFT 7u
#define Decimal_place__SLW CYREG_PRT2_SLW

/* Seven_Segment */
#define Seven_Segment__0__INTTYPE CYREG_PICU2_INTTYPE0
#define Seven_Segment__0__MASK 0x01u
#define Seven_Segment__0__PC CYREG_PRT2_PC0
#define Seven_Segment__0__PORT 2u
#define Seven_Segment__0__SHIFT 0u
#define Seven_Segment__1__INTTYPE CYREG_PICU2_INTTYPE1
#define Seven_Segment__1__MASK 0x02u
#define Seven_Segment__1__PC CYREG_PRT2_PC1
#define Seven_Segment__1__PORT 2u
#define Seven_Segment__1__SHIFT 1u
#define Seven_Segment__2__INTTYPE CYREG_PICU2_INTTYPE2
#define Seven_Segment__2__MASK 0x04u
#define Seven_Segment__2__PC CYREG_PRT2_PC2
#define Seven_Segment__2__PORT 2u
#define Seven_Segment__2__SHIFT 2u
#define Seven_Segment__3__INTTYPE CYREG_PICU2_INTTYPE3
#define Seven_Segment__3__MASK 0x08u
#define Seven_Segment__3__PC CYREG_PRT2_PC3
#define Seven_Segment__3__PORT 2u
#define Seven_Segment__3__SHIFT 3u
#define Seven_Segment__4__INTTYPE CYREG_PICU2_INTTYPE4
#define Seven_Segment__4__MASK 0x10u
#define Seven_Segment__4__PC CYREG_PRT2_PC4
#define Seven_Segment__4__PORT 2u
#define Seven_Segment__4__SHIFT 4u
#define Seven_Segment__5__INTTYPE CYREG_PICU2_INTTYPE5
#define Seven_Segment__5__MASK 0x20u
#define Seven_Segment__5__PC CYREG_PRT2_PC5
#define Seven_Segment__5__PORT 2u
#define Seven_Segment__5__SHIFT 5u
#define Seven_Segment__6__INTTYPE CYREG_PICU2_INTTYPE6
#define Seven_Segment__6__MASK 0x40u
#define Seven_Segment__6__PC CYREG_PRT2_PC6
#define Seven_Segment__6__PORT 2u
#define Seven_Segment__6__SHIFT 6u
#define Seven_Segment__AG CYREG_PRT2_AG
#define Seven_Segment__AMUX CYREG_PRT2_AMUX
#define Seven_Segment__BIE CYREG_PRT2_BIE
#define Seven_Segment__BIT_MASK CYREG_PRT2_BIT_MASK
#define Seven_Segment__BYP CYREG_PRT2_BYP
#define Seven_Segment__CTL CYREG_PRT2_CTL
#define Seven_Segment__DM0 CYREG_PRT2_DM0
#define Seven_Segment__DM1 CYREG_PRT2_DM1
#define Seven_Segment__DM2 CYREG_PRT2_DM2
#define Seven_Segment__DR CYREG_PRT2_DR
#define Seven_Segment__INP_DIS CYREG_PRT2_INP_DIS
#define Seven_Segment__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define Seven_Segment__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define Seven_Segment__LCD_EN CYREG_PRT2_LCD_EN
#define Seven_Segment__MASK 0x7Fu
#define Seven_Segment__PORT 2u
#define Seven_Segment__PRT CYREG_PRT2_PRT
#define Seven_Segment__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define Seven_Segment__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define Seven_Segment__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define Seven_Segment__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define Seven_Segment__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define Seven_Segment__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define Seven_Segment__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define Seven_Segment__PS CYREG_PRT2_PS
#define Seven_Segment__SHIFT 0u
#define Seven_Segment__SLW CYREG_PRT2_SLW
#define Seven_Segment_Reg_Sync_ctrl_reg__0__MASK 0x01u
#define Seven_Segment_Reg_Sync_ctrl_reg__0__POS 0
#define Seven_Segment_Reg_Sync_ctrl_reg__1__MASK 0x02u
#define Seven_Segment_Reg_Sync_ctrl_reg__1__POS 1
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB09_10_ACTL
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB09_10_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB09_10_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB09_10_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB09_10_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB09_10_MSK
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB09_10_MSK
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB09_10_MSK
#define Seven_Segment_Reg_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB09_10_MSK
#define Seven_Segment_Reg_Sync_ctrl_reg__2__MASK 0x04u
#define Seven_Segment_Reg_Sync_ctrl_reg__2__POS 2
#define Seven_Segment_Reg_Sync_ctrl_reg__3__MASK 0x08u
#define Seven_Segment_Reg_Sync_ctrl_reg__3__POS 3
#define Seven_Segment_Reg_Sync_ctrl_reg__4__MASK 0x10u
#define Seven_Segment_Reg_Sync_ctrl_reg__4__POS 4
#define Seven_Segment_Reg_Sync_ctrl_reg__5__MASK 0x20u
#define Seven_Segment_Reg_Sync_ctrl_reg__5__POS 5
#define Seven_Segment_Reg_Sync_ctrl_reg__6__MASK 0x40u
#define Seven_Segment_Reg_Sync_ctrl_reg__6__POS 6
#define Seven_Segment_Reg_Sync_ctrl_reg__7__MASK 0x80u
#define Seven_Segment_Reg_Sync_ctrl_reg__7__POS 7
#define Seven_Segment_Reg_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB09_ACTL
#define Seven_Segment_Reg_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB09_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB09_ST_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB09_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB09_ST_CTL
#define Seven_Segment_Reg_Sync_ctrl_reg__MASK 0xFFu
#define Seven_Segment_Reg_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB09_MSK_ACTL
#define Seven_Segment_Reg_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB09_MSK_ACTL
#define Seven_Segment_Reg_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB09_MSK

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "HRMon"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */