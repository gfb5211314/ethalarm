/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define debug_rx_Pin GPIO_PIN_7
#define debug_rx_GPIO_Port GPIOB
#define speak_data_Pin GPIO_PIN_14
#define speak_data_GPIO_Port GPIOC
#define speak_busy_Pin GPIO_PIN_15
#define speak_busy_GPIO_Port GPIOC
#define BELL_EN_Pin GPIO_PIN_0
#define BELL_EN_GPIO_Port GPIOA
#define eth_rst_Pin GPIO_PIN_1
#define eth_rst_GPIO_Port GPIOA
#define eth_tx_Pin GPIO_PIN_2
#define eth_tx_GPIO_Port GPIOA
#define eth_rx_Pin GPIO_PIN_3
#define eth_rx_GPIO_Port GPIOA
#define eth_at_Pin GPIO_PIN_4
#define eth_at_GPIO_Port GPIOA
#define ring_key_Pin GPIO_PIN_6
#define ring_key_GPIO_Port GPIOA
#define system_led_Pin GPIO_PIN_7
#define system_led_GPIO_Port GPIOA
#define ring_led_Pin GPIO_PIN_8
#define ring_led_GPIO_Port GPIOA
#define debug_tx_Pin GPIO_PIN_6
#define debug_tx_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
