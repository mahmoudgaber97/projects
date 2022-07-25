/*
 * main.c
 *
 *  Created on: Jul 1, 2022
 *      Author: DELL
 */


#include"TYPES.h"
#include"MATH.h"
#include"RCC_config.h"
#include"RCC_interface.h"
#include"RCC_privet.h"
#include"GPIO_V3_inter.h"
#include"GPIO_V3_REG.h"
int main(){
	RCC_void_HSEDRIVER(RCC_MODE_CYRSTAL);
	RCC_EN_Prepheral(APB2_BUS,GPIOA_RCC);
	PORTvoidCONFIGRATION(PORTA, INPUT_PULLUP_PULLDOWN );
	RCC_EN_Prepheral(APB2_BUS,GPIOB_RCC);
	PORTvoidCONFIGRATION(PORTB, OUTPUT_SPEED_2MHZ_PP );
 
	while(1){

		 if(MGPIO_u16GetPortValue(PORTA,LOW)<=20)
			 SETPORT_Void(PORTB,0x00000000);
		 else if(21<MGPIO_u16GetPortValue(PORTA,LOW))
			 SETPORT_Void(PORTB,0xffffffff);
		


	}



return 0;
}
