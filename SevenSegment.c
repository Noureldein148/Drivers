/************************************************************
*   Author  : Nour El Dein Hany
*   Layer   : HAL
*   SWC     : Seven Segment
*   Date    : 20/10/2023
*   Version : 1.0
*/
#include "SevenSegment.h"
#include "SevenSegment_Config.h"
#include "STD_TYPES_H_.h"
#include "DIO_interface.h"
#include "BITMATH.h"


void SEV_SEG_Init(u8 sev_seg_num)
{
    switch(sev_seg_num)
    {
        case COM1:
            DIO_SetPinDirection(DIO_PORTA,DIO_PIN3,DIO_PIN_HIGH);
            DIO_SetPinValue(DIO_PORTA,DIO_PIN3,DIO_PIN_LOW);
            break;
        case COM2:
            DIO_SetPinDirection(DIO_PORTA,DIO_PIN2,DIO_PIN_HIGH);
            DIO_SetPinValue(DIO_PORTA,DIO_PIN2,DIO_PIN_LOW);
            break;
        case COM3:
            DIO_SetPinDirection(DIO_PORTB,DIO_PIN5,DIO_PIN_HIGH);
            DIO_SetPinValue(DIO_PORTB,DIO_PIN5,DIO_PIN_LOW);
            break;
        case COM4:
            DIO_SetPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_HIGH);
            DIO_SetPinValue(DIO_PORTA,DIO_PIN6,DIO_PIN_LOW);
            break;
    }

    DIO_SetPinDirection(DIO_PORTB , DIO_PIN0 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTB , DIO_PIN1 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTB , DIO_PIN2 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTB , DIO_PIN4 , DIO_PIN_HIGH);


}

void SEV_SEG_Display(u8 data)
{
    DIO_SetPinValue(DIO_PORTB , DIO_PIN0 , GetBit(data ,0)); //A
    DIO_SetPinValue(DIO_PORTB , DIO_PIN1 , GetBit(data ,1)); //B
    DIO_SetPinValue(DIO_PORTB , DIO_PIN2 , GetBit(data ,2)); //C
    DIO_SetPinValue(DIO_PORTB , DIO_PIN4 , GetBit(data ,3)); //D
}
