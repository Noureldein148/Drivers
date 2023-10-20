#ifndef SEVENSEGMENT_CONFIG_H_INCLUDED
#define SEVENSEGMENT_CONFIG_H_INCLUDED
#include"DIO_interface.h"

//S7 Data & Enable & DP Ports
#define SEV_SEG_Data_Port				DIO_PORTA
#define SEV_SEG7_Data_Bus					PORTA
#define SEV_SEG7_Enable_Port				DIO_PORTB
#define SSEV_SEG_DP_Port					DIO_PORTB

// S7 Data Pins
#define S7_Data_Pin0				DIO_PIN4
#define S7_Data_Pin1				DIO_PIN5
#define S7_Data_Pin2				DIO_PIN6
#define S7_Data_Pin3				DIO_PIN7
#define S7_DP_Pin					DIO_PIN3

// S7 Enable Pins
#define S7_PIN_E1					DIO_PIN2
#define S7_PIN_E2					DIO_PIN1


#endif // SEVENSEGMENT_CONFIG_H_INCLUDED
