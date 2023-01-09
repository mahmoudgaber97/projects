/*
 * USART.c
 *
 *  Created on: Dec 27, 2022
 *      Author: MAHMOUD GA
 */
#include"TYpes_lib.h"
#include"reg.h"
#include"interface.h"
#include"GPIO_V3_inter.h"
#include"GPIO_V3_REG.h"


void MUSARTIntivoid(void){



/*make USART Enable or disable */
	SET_BIT(MUSART->USART_CR1,13);

	/*Data are 8bits*/

	CLEAR_BIT(MUSART->USART_CR1,12);

	/*enable or disable  transmitter mode*/
	SET_BIT(MUSART->USART_CR1,3);
	/*enable RX*/
	SET_BIT(MUSART->USART_CR1,2);
	/*select stop fram mode*/
	//set_registerValue(0b00,12,MUSART->USART_CR1);

	SET_BIT(MUSART->USART_CR1,10);
}

u8 Receive_u8Char(void){

	u8 u8Char;


while(GET_BIT(MUSART->USART_SR,5)==0);


u8Char=(u8)MUSART->USART_DR;
MUSART->USART_DR;

CLEAR_BIT(MUSART->USART_SR,5);
return u8Char;

}






u8* Receive_u8String(void){
u8 u8CharElement=0;
u8* Ru8String;
while(Ru8String[u8CharElement]!='\0'){
Ru8String[u8CharElement]=Receive_u8Char();
u8CharElement++;

}
return (Ru8String);

}

