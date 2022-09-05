#ifndef UART_H_
#define UART_H_

void UART_init(void);
char UARTReceive(void);
void UARTSend(char c);
char UARTReceive2Digits(void);
void UARTSendString(char string[]);


#endif