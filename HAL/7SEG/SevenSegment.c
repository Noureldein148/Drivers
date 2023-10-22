/*

 * SevenSegment.c
 *
 *  Created on: Oct 21, 2023
 *      Author: admin
 */
#include "STD_TYPES_H_.h"
#include "BITMATH.h"

#include "SevenSegment.h"
#include "SevenSegment_Config.h"
#include "DIO_interface.h"


void sev_seg_Init()
{

        //COM1:
            DIO_SetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);

        //COM2:
            DIO_SetPinDirection(DIO_PORTA,DIO_PIN2,DIO_PIN_HIGH);

        //COM3:
            DIO_SetPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_HIGH);

        //COM4:
            DIO_SetPinDirection(DIO_PORTB,DIO_PIN6,DIO_PIN_HIGH);


    DIO_SetPinDirection(DIO_PORTB , DIO_PIN0 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTB , DIO_PIN1 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTB , DIO_PIN2 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTB , DIO_PIN4 , DIO_PIN_HIGH);


}


void sev_seg_enable(u8 sev_seg_num)
{
	switch(sev_seg_num)
	    {
	        case COM1:
	            DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
	            break;
	        case COM2:
	            DIO_SetPinValue(DIO_PORTA,DIO_PIN2,DIO_PIN_LOW);
	            break;
	        case COM3:
	            DIO_SetPinValue(DIO_PORTB,DIO_PIN5,DIO_PIN_LOW);
	            break;
	        case COM4:
	            DIO_SetPinValue(DIO_PORTB,DIO_PIN6,DIO_PIN_LOW);
	            break;
	        default :
	        	break;
	    }

}
void sev_seg_disable(u8 sev_seg_num)
{
	switch(sev_seg_num)
	    {
	        case COM1:
	            DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
	            break;
	        case COM2:
	            DIO_SetPinValue(DIO_PORTA,DIO_PIN2,DIO_PIN_HIGH);
	            break;
	        case COM3:
	            DIO_SetPinValue(DIO_PORTB,DIO_PIN5,DIO_PIN_HIGH);
	            break;
	        case COM4:
	            DIO_SetPinValue(DIO_PORTB,DIO_PIN6,DIO_PIN_HIGH);
	            break;
	        default :
	        	break;
	    }

}

void sev_seg_Display(u8 data)
{
    DIO_SetPinValue(DIO_PORTB , DIO_PIN0 , GetBit(data ,0)); //A
    DIO_SetPinValue(DIO_PORTB , DIO_PIN1 , GetBit(data ,1)); //B
    DIO_SetPinValue(DIO_PORTB , DIO_PIN2 , GetBit(data ,2)); //C
    DIO_SetPinValue(DIO_PORTB , DIO_PIN4 , GetBit(data ,3)); //D
}

