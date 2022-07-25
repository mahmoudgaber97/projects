/*
 * GPIO_V3_inter.h
 *
 *  Created on: Apr 15, 2022
 *      Author: DELL
 */

#ifndef GPIO_V3_INTER_H_
#define GPIO_V3_INTER_H_
/*
 * GPIO_V3_inter.c
 *
 *  Created on: Apr 15, 2022
 *      Author: DELL
 */

#ifndef GPIO_V3_INTER_C_
#define GPIO_V3_INTER_C_

void SETPORT_Void(u8 NUMBERPORT, u32 Portu32value);
#define PORTA  0
#define PORTB  1
#define PORTC  2

void PORTvoidCONFIGRATION(u8 NUMBERPORT ,u32 PORTu32conFIG);
/*this CONFIGRATION OF PORTS*/
#define INPUT_ANLOG               0X00000000
#define INPUT_FLOATING            0X44444444
#define INPUT_PULLUP_PULLDOWN     0X88888888

//For Speed 10
#define OUTPUT_SPEED_10MHZ_PP     0X11111111
#define OUTPUT_SPEED_10MHZ_OD     0X55555555
#define OUTPUT_SPEED_10MHZ_AFPP   0X99999999
#define OUTPUT_SPEED_10MHZ_AFOD   0XCCCCCCCC

//For Speed 2
#define OUTPUT_SPEED_2MHZ_PP      0X22222222
#define OUTPUT_SPEED_2MHZ_OD      0X66666666
#define OUTPUT_SPEED_2MHZ_AFPP    0XAAAAAAAA
#define OUTPUT_SPEED_2MHZ_AFOD    0XEEEEEEEE

//For Speed 2
#define OUTPUT_SPEED_50MHZ_PP     0x33333333
#define OUTPUT_SPEED_50MHZ_OD     0x77777777
#define OUTPUT_SPEED_50MHZ_AFPP   0xBBBBBBBB
#define OUTPUT_SPEED_50MHZ_AFOD   0XFFFFFFFF


void SETPINvalue(u8 NUMBERPORT,u8 PIu8Nnumber, u8 STATE);
void PINCONFIGvoid(u8 NUMBERPORT,u8 PIu8Nnumber, u32 config);


#define HIGH  1
#define LOW   0

#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4    4
#define PIN5   5
#define PIN6   6
#define PIN7   7
#define PIN8   8
#define PIN9   9
#define PIN10  10
#define PIN11  11
#define PIN12  12
#define PIN13  13
#define PIN14  14
#define PIN15  15

/*this CONFIGRATION OF PINS*/
#define INPUT_ANLOG_PIN               0X0
#define INPUT_FLOATING_PIN            0X4
#define INPUT_PULLUP_PULLDOWN_PIN     0X8

//For Speed 10
#define OUTPUT_SPEED_10MHZ_PP_PIN     0X1
#define OUTPUT_SPEED_10MHZ_OD_PIN     0X5
#define OUTPUT_SPEED_10MHZ_AFP_PIN    0X9
#define OUTPUT_SPEED_10MHZ_AFOD_PIN   0XC

//For Speed 2
#define OUTPUT_SPEED_2MHZ_PP_PIN     0x2
#define OUTPUT_SPEED_2MHZ_OD_PIN      0X6
#define OUTPUT_SPEED_2MHZ_AFPP_PIN    0XA
#define OUTPUT_SPEED_2MHZ_AFOD_PIN    0XE

//For Speed 2
#define OUTPUT_SPEED_50MHZ_PP_PIN     0x3
#define OUTPUT_SPEED_50MHZ_OD_PIN     0x7
#define OUTPUT_SPEED_50MHZ_AFPP_PIN   0xB
#define OUTPUT_SPEED_50MHZ_AFOD_PIN   0XF


u8 GETu8PIN(u8 NUMBERPORT,u8 PIu8Nnumber);
//u16 GETu8PORT(u8 NUMBERPORT);
u16 MGPIO_u16GetPortValue( u8 Copy_u8Port , u8 Copy_u8Position );


#endif /* GPIO_V3_INTER_C_ */



#endif /* GPIO_V3_INTER_H_ */
