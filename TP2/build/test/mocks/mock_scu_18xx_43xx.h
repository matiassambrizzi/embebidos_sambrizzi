/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SCU_18XX_43XX_H
#define _MOCK_SCU_18XX_43XX_H

#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include "scu_18xx_43xx.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_scu_18xx_43xx_Init(void);
void mock_scu_18xx_43xx_Destroy(void);
void mock_scu_18xx_43xx_Verify(void);




#define Chip_SCU_PinMuxSet_Ignore() Chip_SCU_PinMuxSet_CMockIgnore()
void Chip_SCU_PinMuxSet_CMockIgnore(void);
#define Chip_SCU_PinMuxSet_StopIgnore() Chip_SCU_PinMuxSet_CMockStopIgnore()
void Chip_SCU_PinMuxSet_CMockStopIgnore(void);
#define Chip_SCU_PinMuxSet_Expect(port, pin, modefunc) Chip_SCU_PinMuxSet_CMockExpect(__LINE__, port, pin, modefunc)
void Chip_SCU_PinMuxSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t port, uint8_t pin, uint16_t modefunc);
#define Chip_SCU_PinMux_Ignore() Chip_SCU_PinMux_CMockIgnore()
void Chip_SCU_PinMux_CMockIgnore(void);
#define Chip_SCU_PinMux_StopIgnore() Chip_SCU_PinMux_CMockStopIgnore()
void Chip_SCU_PinMux_CMockStopIgnore(void);
#define Chip_SCU_PinMux_Expect(port, pin, mode, func) Chip_SCU_PinMux_CMockExpect(__LINE__, port, pin, mode, func)
void Chip_SCU_PinMux_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t port, uint8_t pin, uint16_t mode, uint8_t func);
#define Chip_SCU_ClockPinMuxSet_Ignore() Chip_SCU_ClockPinMuxSet_CMockIgnore()
void Chip_SCU_ClockPinMuxSet_CMockIgnore(void);
#define Chip_SCU_ClockPinMuxSet_StopIgnore() Chip_SCU_ClockPinMuxSet_CMockStopIgnore()
void Chip_SCU_ClockPinMuxSet_CMockStopIgnore(void);
#define Chip_SCU_ClockPinMuxSet_Expect(clknum, modefunc) Chip_SCU_ClockPinMuxSet_CMockExpect(__LINE__, clknum, modefunc)
void Chip_SCU_ClockPinMuxSet_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t clknum, uint16_t modefunc);
#define Chip_SCU_ClockPinMux_Ignore() Chip_SCU_ClockPinMux_CMockIgnore()
void Chip_SCU_ClockPinMux_CMockIgnore(void);
#define Chip_SCU_ClockPinMux_StopIgnore() Chip_SCU_ClockPinMux_CMockStopIgnore()
void Chip_SCU_ClockPinMux_CMockStopIgnore(void);
#define Chip_SCU_ClockPinMux_Expect(clknum, mode, func) Chip_SCU_ClockPinMux_CMockExpect(__LINE__, clknum, mode, func)
void Chip_SCU_ClockPinMux_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t clknum, uint16_t mode, uint8_t func);
#define Chip_SCU_GPIOIntPinSel_Ignore() Chip_SCU_GPIOIntPinSel_CMockIgnore()
void Chip_SCU_GPIOIntPinSel_CMockIgnore(void);
#define Chip_SCU_GPIOIntPinSel_StopIgnore() Chip_SCU_GPIOIntPinSel_CMockStopIgnore()
void Chip_SCU_GPIOIntPinSel_CMockStopIgnore(void);
#define Chip_SCU_GPIOIntPinSel_Expect(PortSel, PortNum, PinNum) Chip_SCU_GPIOIntPinSel_CMockExpect(__LINE__, PortSel, PortNum, PinNum)
void Chip_SCU_GPIOIntPinSel_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t PortSel, uint8_t PortNum, uint8_t PinNum);
#define Chip_SCU_I2C0PinConfig_Ignore() Chip_SCU_I2C0PinConfig_CMockIgnore()
void Chip_SCU_I2C0PinConfig_CMockIgnore(void);
#define Chip_SCU_I2C0PinConfig_StopIgnore() Chip_SCU_I2C0PinConfig_CMockStopIgnore()
void Chip_SCU_I2C0PinConfig_CMockStopIgnore(void);
#define Chip_SCU_I2C0PinConfig_Expect(I2C0Mode) Chip_SCU_I2C0PinConfig_CMockExpect(__LINE__, I2C0Mode)
void Chip_SCU_I2C0PinConfig_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t I2C0Mode);
#define Chip_SCU_ADC_Channel_Config_Ignore() Chip_SCU_ADC_Channel_Config_CMockIgnore()
void Chip_SCU_ADC_Channel_Config_CMockIgnore(void);
#define Chip_SCU_ADC_Channel_Config_StopIgnore() Chip_SCU_ADC_Channel_Config_CMockStopIgnore()
void Chip_SCU_ADC_Channel_Config_CMockStopIgnore(void);
#define Chip_SCU_ADC_Channel_Config_Expect(ADC_ID, channel) Chip_SCU_ADC_Channel_Config_CMockExpect(__LINE__, ADC_ID, channel)
void Chip_SCU_ADC_Channel_Config_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32_t ADC_ID, uint8_t channel);
#define Chip_SCU_DAC_Analog_Config_Ignore() Chip_SCU_DAC_Analog_Config_CMockIgnore()
void Chip_SCU_DAC_Analog_Config_CMockIgnore(void);
#define Chip_SCU_DAC_Analog_Config_StopIgnore() Chip_SCU_DAC_Analog_Config_CMockStopIgnore()
void Chip_SCU_DAC_Analog_Config_CMockStopIgnore(void);
#define Chip_SCU_DAC_Analog_Config_Expect() Chip_SCU_DAC_Analog_Config_CMockExpect(__LINE__)
void Chip_SCU_DAC_Analog_Config_CMockExpect(UNITY_LINE_TYPE cmock_line);
#define Chip_SCU_SetPinMuxing_Ignore() Chip_SCU_SetPinMuxing_CMockIgnore()
void Chip_SCU_SetPinMuxing_CMockIgnore(void);
#define Chip_SCU_SetPinMuxing_StopIgnore() Chip_SCU_SetPinMuxing_CMockStopIgnore()
void Chip_SCU_SetPinMuxing_CMockStopIgnore(void);
#define Chip_SCU_SetPinMuxing_Expect(pinArray, arrayLength) Chip_SCU_SetPinMuxing_CMockExpect(__LINE__, pinArray, arrayLength)
void Chip_SCU_SetPinMuxing_CMockExpect(UNITY_LINE_TYPE cmock_line, const PINMUX_GRP_T* pinArray, uint32_t arrayLength);

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
