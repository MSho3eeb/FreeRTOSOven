In this project we design an ON-OFF temperature control project based on a FreeRTOS. An ON-OFF temperature controller, also known as a bang-bang controller, will turn OFF the heater whenever the temperature is above a pre-defined setpoint (the required value). Similarly, if the temperature is below the setpoint then the heater is turned ON.
1. Tasks
We created 3 tasks, used a LED as the oven as we will give signal to the Relay to turn the oven on, and used a Pot as the Temperature sensor, beside the LCD.
The project takes setpoint from UART, and measures the RealTemp by ADC, then compare setpoint with RealTemp, if setpoint is greater than RealTemp the oven turns off, if setpoint is less than RealTemp the oven turns on. Then the setpoint and RealTemp is sent to LCD to see the difference.
a. Main task
This task is responsible for the control of oven and comparing RealTemp value with Setpoint value, then send the data to LCD through queues to display them.
b. UART task
This task is responsible for taking the value of setpoint from the user and send it to the Main task.
c. LCD task
This task is responsible for showing us the values of the setpoint and the RealTemp.


2. Functions
ADC.c/ADC.h: Files for ADC configuration
Bit_Math.h: macro functions for Set, Clear, Read bits
DIO.c/DIO.h: initialization of GPIO as digital pins, write on pins or port as well as read
DIO_Types.h: configurations for all the pins we use in the project for Tiva
LCD.c/ LCD.h: initialization of LCD and writing on it
Types.h: our datatypes
UART.c/UART.h: initialization of UART, write and read data
DIO_Init(): Initialize GPIO port
ADC0Init(): Initialize ADC
LCD_Init(): Initialize LCD
UART_init(): Initialize UART
ADC0Read(): Get data from ADC
UARTSendString(): Send string through UART
UARTReceive2Digits(): Get 2 digits integer from UART
LCD_GoToString(): Write string from certain position
LCD_Write_Int(): Write integer on LCD
5. Video: https://drive.google.com/file/d/1tbKke_uZ-oRxMLR4V7F3MKrVQTkfgxDT/view
