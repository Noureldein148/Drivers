#include "SevenSegment.h"
#include "STD_TYPES_H_.h"
#include "DIO_interface.h"
#include "BITMATH.h"

void SEV_SEG_Init(void)
{
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
