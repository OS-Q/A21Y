/*
 * Copyright (c) 2017-2020 Thomas Roell.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimers.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimers in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of Thomas Roell, nor the names of its contributors
 *     may be used to endorse or promote products derived from this Software
 *     without specific prior written permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * WITH THE SOFTWARE.
 */

#if !defined(_STM32L0_DMA_H)
#define _STM32L0_DMA_H

#include "armv6m.h"
#include "stm32l0xx.h"

#ifdef __cplusplus
extern "C" {
#endif

#define STM32L0_DMA_CHANNEL_NONE                 0x0000
#define STM32L0_DMA_CHANNEL_MASK                 0x0fff

#define STM32L0_DMA_CHANNEL_DMA1_CH1_INDEX       0
#define STM32L0_DMA_CHANNEL_DMA1_CH2_INDEX       1
#define STM32L0_DMA_CHANNEL_DMA1_CH3_INDEX       2
#define STM32L0_DMA_CHANNEL_DMA1_CH4_INDEX       3
#define STM32L0_DMA_CHANNEL_DMA1_CH5_INDEX       4
#define STM32L0_DMA_CHANNEL_DMA1_CH6_INDEX       5
#define STM32L0_DMA_CHANNEL_DMA1_CH7_INDEX       6


#if defined(STM32L052xx)

#define STM32L0_DMA_CHANNEL_DMA1_CH1_ADC         0x0f00
#define STM32L0_DMA_CHANNEL_DMA1_CH1_TIM2_CH3    0x0f40

#define STM32L0_DMA_CHANNEL_DMA1_CH2_ADC         0x0f01
#define STM32L0_DMA_CHANNEL_DMA1_CH2_SPI1_RX     0x0f11
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART1_TX   0x0f31
#define STM32L0_DMA_CHANNEL_DMA1_CH2_LPUART1_TX  0x0f51
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C1_TX     0x0f61
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM2_UP     0x0f81
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM6_UP     0x0f91
#define STM32L0_DMA_CHANNEL_DMA1_CH2_DAC1        0x0f91

#define STM32L0_DMA_CHANNEL_DMA1_CH3_SPI1_TX     0x0f12
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART1_RX   0x0f32
#define STM32L0_DMA_CHANNEL_DMA1_CH3_LPUART1_RX  0x0f52
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C1_RX     0x0f62
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM2_CH2    0x0f82

#define STM32L0_DMA_CHANNEL_DMA1_CH4_SPI2_RX     0x0f23
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART1_TX   0x0f33
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART2_TX   0x0f43
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C2_TX     0x0f73
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM2_CH4    0x0f83

#define STM32L0_DMA_CHANNEL_DMA1_CH5_SPI2_TX     0x0f24
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART1_RX   0x0f34
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART2_RX   0x0f44
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C2_RX     0x0f74
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM2_CH1    0x0f84

#define STM32L0_DMA_CHANNEL_DMA1_CH6_SPI2_RX     0x0f25
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART2_RX   0x0f45
#define STM32L0_DMA_CHANNEL_DMA1_CH6_LPUART1_RX  0x0f55
#define STM32L0_DMA_CHANNEL_DMA1_CH6_I2C1_TX     0x0f65

#define STM32L0_DMA_CHANNEL_DMA1_CH7_SPI2_TX     0x0f26
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART2_TX   0x0f46
#define STM32L0_DMA_CHANNEL_DMA1_CH7_LPUART1_TX  0x0f56
#define STM32L0_DMA_CHANNEL_DMA1_CH7_I2C1_RX     0x0f66
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH2    0x0f86
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH4    0x0f86

#endif /* STM32L052xx */

#if defined(STM32L072xx)

#define STM32L0_DMA_CHANNEL_DMA1_CH1_ADC         0x0f00
#define STM32L0_DMA_CHANNEL_DMA1_CH1_TIM2_CH3    0x0f40

#define STM32L0_DMA_CHANNEL_DMA1_CH2_ADC         0x0f01
#define STM32L0_DMA_CHANNEL_DMA1_CH2_SPI1_RX     0x0f11
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART1_TX   0x0f31
#define STM32L0_DMA_CHANNEL_DMA1_CH2_LPUART1_TX  0x0f51
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C1_TX     0x0f61
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM2_UP     0x0f81
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM6_UP     0x0f91
#define STM32L0_DMA_CHANNEL_DMA1_CH2_DAC1        0x0f91
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM3_CH3    0x0fa1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART4_RX   0x0fc1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART5_RX   0x0fd1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C3_TX     0x0fe1

#define STM32L0_DMA_CHANNEL_DMA1_CH3_SPI1_TX     0x0f12
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART1_RX   0x0f32
#define STM32L0_DMA_CHANNEL_DMA1_CH3_LPUART1_RX  0x0f52
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C1_RX     0x0f62
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM2_CH2    0x0f82
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM3_CH4    0x0fa2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM3_UP     0x0fa2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART4_TX   0x0fc2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART5_TX   0x0fd2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C3_RX     0x0fe2

#define STM32L0_DMA_CHANNEL_DMA1_CH4_SPI2_RX     0x0f23
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART1_TX   0x0f33
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART2_TX   0x0f43
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C2_TX     0x0f73
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM2_CH4    0x0f83
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C3_TX     0x0fe3
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM7_UP     0x0ff3
#define STM32L0_DMA_CHANNEL_DMA1_CH4_DAC2        0x0ff3

#define STM32L0_DMA_CHANNEL_DMA1_CH5_SPI2_TX     0x0f24
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART1_RX   0x0f34
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART2_RX   0x0f44
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C2_RX     0x0f74
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM2_CH1    0x0f84
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM3_CH1    0x0fa4
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C3_RX     0x0fe4

#define STM32L0_DMA_CHANNEL_DMA1_CH6_SPI2_RX     0x0f25
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART2_RX   0x0f45
#define STM32L0_DMA_CHANNEL_DMA1_CH6_LPUART1_RX  0x0f55
#define STM32L0_DMA_CHANNEL_DMA1_CH6_I2C1_TX     0x0f65
#define STM32L0_DMA_CHANNEL_DMA1_CH6_TIM3_TRIG   0x0fa5
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART4_RX   0x0fc5
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART5_RX   0x0fd5

#define STM32L0_DMA_CHANNEL_DMA1_CH7_SPI2_TX     0x0f26
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART2_TX   0x0f46
#define STM32L0_DMA_CHANNEL_DMA1_CH7_LPUART1_TX  0x0f56
#define STM32L0_DMA_CHANNEL_DMA1_CH7_I2C1_RX     0x0f66
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH2    0x0f86
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH4    0x0f86
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART4_TX   0x0fc6
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART5_TX   0x0fd6

#endif /* STM32L072xx */

#if defined(STM32L082xx)

#define STM32L0_DMA_CHANNEL_DMA1_CH1_ADC         0x0f00
#define STM32L0_DMA_CHANNEL_DMA1_CH1_TIM2_CH3    0x0f40
#define STM32L0_DMA_CHANNEL_DMA1_CH1_AES_IN      0x0fb0

#define STM32L0_DMA_CHANNEL_DMA1_CH2_ADC         0x0f01
#define STM32L0_DMA_CHANNEL_DMA1_CH2_SPI1_RX     0x0f11
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART1_TX   0x0f31
#define STM32L0_DMA_CHANNEL_DMA1_CH2_LPUART1_TX  0x0f51
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C1_TX     0x0f61
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM2_UP     0x0f81
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM6_UP     0x0f91
#define STM32L0_DMA_CHANNEL_DMA1_CH2_DAC1        0x0f91
#define STM32L0_DMA_CHANNEL_DMA1_CH2_TIM3_CH3    0x0fa1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_AES_OUT     0x0fb1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART4_RX   0x0fc1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_USART5_RX   0x0fd1
#define STM32L0_DMA_CHANNEL_DMA1_CH2_I2C3_TX     0x0fe1

#define STM32L0_DMA_CHANNEL_DMA1_CH3_SPI1_TX     0x0f12
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART1_RX   0x0f32
#define STM32L0_DMA_CHANNEL_DMA1_CH3_LPUART1_RX  0x0f52
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C1_RX     0x0f62
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM2_CH2    0x0f82
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM3_CH4    0x0fa2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_TIM3_UP     0x0fa2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_AES_OUT     0x0fb2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART4_TX   0x0fc2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_USART5_TX   0x0fd2
#define STM32L0_DMA_CHANNEL_DMA1_CH3_I2C3_RX     0x0fe2

#define STM32L0_DMA_CHANNEL_DMA1_CH4_SPI2_RX     0x0f23
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART1_TX   0x0f33
#define STM32L0_DMA_CHANNEL_DMA1_CH4_USART2_TX   0x0f43
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C2_TX     0x0f73
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM2_CH4    0x0f83
#define STM32L0_DMA_CHANNEL_DMA1_CH4_I2C3_TX     0x0fe3
#define STM32L0_DMA_CHANNEL_DMA1_CH4_TIM7_UP     0x0ff3
#define STM32L0_DMA_CHANNEL_DMA1_CH4_DAC2        0x0ff3

#define STM32L0_DMA_CHANNEL_DMA1_CH5_SPI2_TX     0x0f24
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART1_RX   0x0f34
#define STM32L0_DMA_CHANNEL_DMA1_CH5_USART2_RX   0x0f44
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C2_RX     0x0f74
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM2_CH1    0x0f84
#define STM32L0_DMA_CHANNEL_DMA1_CH5_TIM3_CH1    0x0fa4
#define STM32L0_DMA_CHANNEL_DMA1_CH5_AES_IN      0x0fb4
#define STM32L0_DMA_CHANNEL_DMA1_CH5_I2C3_RX     0x0fe4

#define STM32L0_DMA_CHANNEL_DMA1_CH6_SPI2_RX     0x0f25
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART2_RX   0x0f45
#define STM32L0_DMA_CHANNEL_DMA1_CH6_LPUART1_RX  0x0f55
#define STM32L0_DMA_CHANNEL_DMA1_CH6_I2C1_TX     0x0f65
#define STM32L0_DMA_CHANNEL_DMA1_CH6_TIM3_TRIG   0x0fa5
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART4_RX   0x0fc5
#define STM32L0_DMA_CHANNEL_DMA1_CH6_USART5_RX   0x0fd5

#define STM32L0_DMA_CHANNEL_DMA1_CH7_SPI2_TX     0x0f26
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART2_TX   0x0f46
#define STM32L0_DMA_CHANNEL_DMA1_CH7_LPUART1_TX  0x0f56
#define STM32L0_DMA_CHANNEL_DMA1_CH7_I2C1_RX     0x0f66
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH2    0x0f86
#define STM32L0_DMA_CHANNEL_DMA1_CH7_TIM2_CH4    0x0f86
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART4_TX   0x0fc6
#define STM32L0_DMA_CHANNEL_DMA1_CH7_USART5_TX   0x0fd6

#endif /* STM32L082xx */


#define STM32L0_DMA_OPTION_EVENT_TRANSFER_DONE        0x00000002
#define STM32L0_DMA_OPTION_EVENT_TRANSFER_HALF        0x00000004
#define STM32L0_DMA_OPTION_EVENT_TRANSFER_ERROR       0x00000008

#define STM32L0_DMA_OPTION_PERIPHERAL_TO_MEMORY       0x00000000
#define STM32L0_DMA_OPTION_MEMORY_TO_PERIPHERAL       0x00000010
#define STM32L0_DMA_OPTION_CIRCULAR                   0x00000020
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_INCREMENT  0x00000040
#define STM32L0_DMA_OPTION_MEMORY_DATA_INCREMENT      0x00000080
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_MASK  0x00000300
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_SHIFT 8
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_8     0x00000000
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_16    0x00000100
#define STM32L0_DMA_OPTION_PERIPHERAL_DATA_SIZE_32    0x00000200
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_MASK      0x00000c00
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_SHIFT     10
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_8         0x00000000
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_16        0x00000400
#define STM32L0_DMA_OPTION_MEMORY_DATA_SIZE_32        0x00000800
#define STM32L0_DMA_OPTION_PRIORITY_MASK              0x00003000
#define STM32L0_DMA_OPTION_PRIORITY_SHIFT             12
#define STM32L0_DMA_OPTION_PRIORITY_LOW               0x00000000
#define STM32L0_DMA_OPTION_PRIORITY_MEDIUM            0x00001000
#define STM32L0_DMA_OPTION_PRIORITY_HIGH              0x00002000
#define STM32L0_DMA_OPTION_PRIORITY_VERY_HIGH         0x00003000
#define STM32L0_DMA_OPTION_MEMORY_TO_MEMORY           0x00004000

#define STM32L0_DMA_EVENT_TRANSFER_DONE               0x00000002
#define STM32L0_DMA_EVENT_TRANSFER_HALF               0x00000004
#define STM32L0_DMA_EVENT_TRANSFER_ERROR              0x00000008

typedef void (*stm32l0_dma_callback_t)(void *context, uint32_t events);

extern void __stm32l0_dma_initialize(void);
extern void __stm32l0_dma_sleep_enter(void);
extern void __stm32l0_dma_sleep_leave(void);
extern void stm32l0_dma_configure(uint8_t priority_1, uint8_t priority_2_3, uint8_t priority_4_5_6_7);
extern uint8_t stm32l0_dma_priority(uint16_t channel);
extern bool stm32l0_dma_channel(uint16_t channel);
extern bool stm32l0_dma_lock(uint16_t channel);
extern void stm32l0_dma_unlock(uint16_t channel);
extern bool stm32l0_dma_enable(uint16_t channel, stm32l0_dma_callback_t callback, void *context);
extern void stm32l0_dma_disable(uint16_t channel);
extern void stm32l0_dma_start(uint16_t channel, uint32_t tx_data, uint32_t rx_data, uint16_t xf_count, uint32_t option);
extern uint16_t stm32l0_dma_stop(uint16_t channel);
extern uint16_t stm32l0_dma_count(uint16_t channel);
extern bool stm32l0_dma_done(uint16_t channel);

#ifdef __cplusplus
}
#endif

#endif /* _STM32L0_DMA_H */
