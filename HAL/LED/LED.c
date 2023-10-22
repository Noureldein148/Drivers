/*

 * LED.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Nour
 */
#include "LED.h"
LEDs_Init()
{
	DIO_SetPinDirection(LED_RED_PORT,LED_RED_PIN,DIO_PIN_HIGH);
	DIO_SetPinDirection(LED_YEL_PORT,LED_YEL_PIN,DIO_PIN_HIGH);
	DIO_SetPinDirection(LED_GRN_PORT,LED_GRN_PIN,DIO_PIN_HIGH);
	DIO_SetPinDirection(LED_BLU_PORT,LED_BLU_PIN,DIO_PIN_HIGH);
}
