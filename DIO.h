#ifndef DIO_H__
#define DIO_H__
////////////////////////////////////////////////////
#include "tm4c123gh6pm.h"
#include "Bit_Math.h"
#include "types.h"
#include "DIO_Types.h"

void DIO_Init(DIO_PortTypes portx);
void DIO_WritePort(DIO_PortTypes portx , uint32 data);
void DIO_WritePin(DIO_ChannelTypes channel, STD_Level level);
void DIO_WritePin_Port(unsigned int data);
uint8 DIO_Read(DIO_ChannelTypes channel);
uint8 DIO_ReadPort(DIO_PortTypes portx);
//void GPIOIntEnable(DIO_ChannelTypes channel);
//void GPIOIntDisable(DIO_ChannelTypes channel);
//uint8 GPIOIntStatus(DIO_ChannelTypes channel);



#endif