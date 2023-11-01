/*
 * Keypad_Config.h

 *
 *  Created on: Oct 22, 2023
 *      Author: Nour
 *      Layer : HAL
 */
#include "STD_TYPES_H_.h"
#include "BITMATH.h"
#include "DIO_interface.h"

#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

#define COL1_PORT 		DIO_PORTD
#define COL1_PIN		DIO_PIN7

#define COL2_PORT 		DIO_PORTD
#define COL2_PIN		DIO_PIN6

#define COL3_PORT 		DIO_PORTD
#define COL3_PIN		DIO_PIN5

#define COL4_PORT 		DIO_PORTD
#define COL4_PIN		DIO_PIN3


#define ROW1_PORT		DIO_PORTC
#define ROW1_PIN 		DIO_PIN5

#define ROW2_PORT		DIO_PORTC
#define ROW2_PIN 		DIO_PIN4

#define ROW3_PORT		DIO_PORTC
#define ROW3_PIN 		DIO_PIN3

#define ROW4_PORT		DIO_PORTC
#define ROW4_PIN 		DIO_PIN2




#endif /* KEYPAD_CONFIG_H_ */
