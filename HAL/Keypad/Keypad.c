/*

 * Keypad.c
 *
 *  Created on: Oct 22, 2023
 *      Author: Nour
 *      Layer : HAL
 */
#include"Keypad.h"
u8 arr_data[4][4] = { {'1','2','3','A'},
					  {'4','5','6','B'},
					  {'7','8','9','C'},
					  {'*','0','#','D'} } ;



u8 row_pins[4] = {5,4,3,2};
u8 col_pins[4] = {7,6,5,3};
void keypad_Init(void)
{
	DIO_SetPinDirection(ROW1_PORT , ROW1_PIN , DIO_PIN_HIGH);
	DIO_SetPinDirection(ROW2_PORT , ROW2_PIN , DIO_PIN_HIGH);
	DIO_SetPinDirection(ROW3_PORT , ROW3_PIN , DIO_PIN_HIGH);
	DIO_SetPinDirection(ROW4_PORT , ROW3_PIN , DIO_PIN_HIGH);

	DIO_SetPinDirection(COL1_PORT , COL1_PIN , DIO_PIN_LOW);
	DIO_SetPinDirection(COL2_PORT , COL2_PIN , DIO_PIN_LOW);
	DIO_SetPinDirection(COL3_PORT , COL3_PIN , DIO_PIN_LOW);
	DIO_SetPinDirection(COL4_PORT , COL4_PIN , DIO_PIN_LOW);

	DIO_SetPinValue(ROW1_PORT , ROW1_PIN , DIO_PIN_HIGH);
	DIO_SetPinValue(ROW2_PORT , ROW2_PIN , DIO_PIN_HIGH);
	DIO_SetPinValue(ROW3_PORT , ROW3_PIN , DIO_PIN_HIGH);
	DIO_SetPinValue(ROW4_PORT , ROW3_PIN , DIO_PIN_HIGH);


}
u8 KPD_voidGetPressedKey(void)
{
	u8 value = 255;
	u8 Flag = 0;
	for(u8 i =0 ; i<4 ;i++)
	{
		// all rows have the same port
		DIO_SetPinValue(ROW1_PORT,row_pins[i] ,DIO_PIN_LOW);
		for(u8 j =0; j<4 ; j++)
		{
			if(DIO_GetPinValue(COL1_PORT,col_pins[j]) == 0 )
			{
				value = arr_data[i][j];
				while(!DIO_GetPinValue(COL1_PORT,col_pins[j]));
				Flag = 1;
				break;
			}
		}
		DIO_SetPinValue(ROW1_PORT,row_pins[i],DIO_PIN_HIGH  );

		if(Flag == 1)
		{
			break;
		}

	}
	return value;
}
