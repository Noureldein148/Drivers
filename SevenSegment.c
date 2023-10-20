#include "SevenSegment.h"
#include "STD_TYPES_H_.h"

#define F_CPU	8000000
#include <util/delay.h>
void SEV_SEG_Init(void)
{
    DIO_SetPinDirection(DIO_PORTA , DIO_PIN4 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTA , DIO_PIN5 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTA , DIO_PIN6 , DIO_PIN_HIGH);
    DIO_SetPinDirection(DIO_PORTA , DIO_PIN7 , DIO_PIN_HIGH);

    // Enable
    DIO_SetPinDirection(DIO_PORTB,DIO_PIN2 , DIO_PIN_HIGH );
    DIO_SetPinDirection(DIO_PORTB,DIO_PIN1 , DIO_PIN_HIGH );


void SEV_SEG_Enable(void)
{
     //Control Enable
    DIO_SetPinValue(DIO_PORTB,DIO_PIN2, DIO_PIN_HIGH); // EN1
    DIO_SetPinValue(DIO_PORTB,DIO_PIN1, DIO_PIN_HIGH); // EN2
}
}
void SEV_SEG_Disable(void)
{
     //Control Disable
    DIO_SetPinValue(DIO_PORTB,DIO_PIN2, DIO_PIN_LOW); // EN1
    DIO_SetPinValue(DIO_PORTB,DIO_PIN1, DIO_PIN_LOW); // EN2
}
}

void SEV_SEG_Display(u8 data)
{
    if()
}
