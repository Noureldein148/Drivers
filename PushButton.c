#include "PushButton.h"
#include "DIO_interface.h"
void pushButton(void)
{
    DIO_SetPinDirection(DIO_PORTA,DIO_PIN6,DIO_PIN_HIGH); // yellow led output
    DIO_SetpinDirection(DIO_PORTB , DIO_PIN1 , DIO_PIN_LOW);// input pushbutton

    if( GetBit(DIO_PORTB,DIO_PIN1) == 1)
    {
        DIO_SetPinValue(DIO_PORTA,DIO_PIN6 , DIO_PIN_HIGH);
    }
    else if( GetBit(DIO_PORTB,DIO_PIN1) == 0)
    {
        DIO_SetPinValue(DIO_PORTA,DIO_PIN6 , DIO_PIN_LOW);
    }
}
