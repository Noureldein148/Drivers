/*
 * LED_Config.h
 *
 *  Created on: Oct 22, 2023
 *      Author: admin
 */
#include "STD_TYPES_H_.h"
#include "BITMATH.h"
#include "DIO_interface.h"
#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_

#define LED_RED_PORT DIO_PORTB
#define LED_RED_PIN DIO_PIN7

#define LED_YEL_PORT DIO_PORTA
#define LED_YEL_PIN	 DIO_PIN6

#define LED_GRN_PORT DIO_PORTA
#define LED_GRN_PIN DIO_PIN4

#define LED_BLU_PORT DIO_PORTA
#define LED_BLU_PIN DIO_PIN5

#endif /* LED_CONFIG_H_ */
