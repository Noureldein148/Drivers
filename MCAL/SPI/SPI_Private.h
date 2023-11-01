/*
 * SPI_Private.h

 *
 *  Created on: Oct 30, 2023
 *      Author: Nour
 */

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_
#include "STD_TYPES_H_.h"

#define SPDR_REG	*((volatile u8*)0X2F)

typedef struct
{
	u8 SPR  : 2 ;
	u8 CPHA : 1 ;
	u8 CPOL : 1 ;
	u8 MSTR : 1 ;
	u8 DORD : 1 ;
	u8 SPE  : 1 ;
	u8 SPIE : 1 ;
}SPCR;
#define SPCR_REG ((volatile SPCR*)0X2D)

typedef struct
{
	u8 SPI2X: 1 ;
	u8  	: 5 ;
	u8 WCOL : 1 ;
	u8 SPIF : 1 ;

}SPSR;
#define SPSR_REG ((volatile SPSR*)0X2E)





#endif /* SPI_PRIVATE_H_ */
