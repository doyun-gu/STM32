#include "timer.h"
#include "nongigu.h"

/**
  * @brief System Clock Configuration
  * @retval None
  */
// void SystemClock_Config(void)
// {
//   RCC_OscInitTypeDef RCC_OscInitStruct = {0};
//   RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
//   __HAL_RCC_PWR_CLK_ENABLE();
//   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
//   RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
//   RCC_OscInitStruct.HSIState = RCC_HSI_ON;
//   RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
//   RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
//   RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
//   RCC_OscInitStruct.PLL.PLLM = 16;
//   RCC_OscInitStruct.PLL.PLLN = 336;
//   RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
//   RCC_OscInitStruct.PLL.PLLQ = 7;
//   if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
//   {
//     Error_Handler();
//   }

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
// static void MX_TIM3_Init(void) {

//   TIM_ClockConfigTypeDef sClockSourceConfig = {0};
//   TIM_MasterConfigTypeDef sMasterConfig = {0};

//   /* USER CODE END TIM3_Init 1 */
//   htim3.Instance = TIM3;
//   htim3.Init.Prescaler = 840;
//   htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
//   htim3.Init.Period = 65535;
//   htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
//   htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
//   if (HAL_TIM_Base_Init(&htim3) != HAL_OK){
//     Error_Handler();
//   }
//   sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
//   if (HAL_TIM_ConfigClockSource(&htim3, &sClockSourceConfig) != HAL_OK){
//     Error_Handler();
//   }
//   sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
//   sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
//   if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK){
//     Error_Handler();
//   }
// }