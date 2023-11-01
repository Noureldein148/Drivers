/*
 * SPI.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Nour
 */
#include"SPI.h"
void SPI_Init()
{
	SPCR_REG->SPE=0b1;  //SPI Enable
	SPCR_REG->DORD=0b1; //LSB of the data word is transmitted first
	SPCR_REG->CPOL = 0b0;
	SPCR_REG->CPHA = 0b0;
	SPCR_REG->SPR= 0b01;   // Fosc/16
	SPCR_REG->MSTR=0b1;  //MASTER
}

void SPI_Send(u8 data)
{

	SPDR_REG = data;
	while(SPSR_REG->SPIF == 0);
}

u8 SPI_Recieve(void)
{
	SPDR_REG = 0; //Start Transmission
	while(SPSR_REG->SPIF == 0);
	return SPDR_REG;
}
u8 SPI_SEND_Recieve(u8 data)
{
	SPDR_REG = data;
	while(SPSR_REG->SPIF == 0);
	return SPDR_REG;
}


