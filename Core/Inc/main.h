/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32h7xx_hal.h"

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
#define UART_RS717 huart3
#define UART_EXT_IF huart1
#define UART_DELTAIMU huart4
#define PIN_TOV_Pin GPIO_PIN_10
#define PIN_TOV_GPIO_Port GPIOG
#define PIN_EXT_TRIG_Pin GPIO_PIN_11
#define PIN_EXT_TRIG_GPIO_Port GPIOG
#define PIN_PROG_Pin GPIO_PIN_9
#define PIN_PROG_GPIO_Port GPIOG
#define PIN_RS717_MODE0_Pin GPIO_PIN_4
#define PIN_RS717_MODE0_GPIO_Port GPIOG
#define PIN_RS717_TERM_RX_Pin GPIO_PIN_6
#define PIN_RS717_TERM_RX_GPIO_Port GPIOG
#define PIN_RS717_SHDN_N_Pin GPIO_PIN_7
#define PIN_RS717_SHDN_N_GPIO_Port GPIOG
#define PIN_USER_LED_Pin GPIO_PIN_8
#define PIN_USER_LED_GPIO_Port GPIOG
#define PIN_RS717_MODE2_Pin GPIO_PIN_2
#define PIN_RS717_MODE2_GPIO_Port GPIOG
#define PIN_RS717_MODE1_Pin GPIO_PIN_3
#define PIN_RS717_MODE1_GPIO_Port GPIOG
#define PIN_RS717_TERM_TX_Pin GPIO_PIN_5
#define PIN_RS717_TERM_TX_GPIO_Port GPIOG
#define PIN_RS717_SLEWRATE_CTRL_Pin GPIO_PIN_0
#define PIN_RS717_SLEWRATE_CTRL_GPIO_Port GPIOG
#define PIN_RS717_DIR_Pin GPIO_PIN_1
#define PIN_RS717_DIR_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
