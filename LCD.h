#ifndef LCD_H_
#define LCD_H_


#include "DIO_Types.h"
#include "DIO.h"

#define LCDPort DIO_PortB
#define RS DIO_ChannelF1
#define RW DIO_ChannelF2
#define EN DIO_ChannelF3

void delayMs(int n);
void delayUs(int n);

void LCD_Cmd(char cmd);
void LCD_Clear(void);
void LCD_Init(void);
void LCD_Char(char data);
void LCD_String(uint8 string[]);
void LCD_GoToString(uint8 line, uint8 pos, uint8 string[]);
void LCD_Write_Int(int num);


#endif 