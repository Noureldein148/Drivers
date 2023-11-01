/*
 * SPI.h
 *
 *  Created on: Oct 30, 2023
 *      Author: admin
 */

#ifndef SPI_H_
#define SPI_H_
#include"SPI_Config.h"
void SPI_Init(void);
void SPI_Send(u8 data);
u8 SPI_SEND_Recieve(u8 data);


#endif /* SPI_H_ */
