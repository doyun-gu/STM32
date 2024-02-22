#pragma once

// Timer Libraries
#include "stm32f4xx_hal_rcc.h"

/* Globals variables ---------------------------------------------------------*/
extern TIM_HandleTypeDef htim3;
extern UART_HandleTypeDef huart2;

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
extern void MX_GPIO_Init(void);
extern void MX_TIM3_Init(void);
extern void MX_USART2_UART_Init(void);