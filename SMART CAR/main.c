/*
 * main.c

 *
 *  Created on: Dec 27, 2022
 *      Author: MAHMOUD GA
 */


#include"TYpes_lib.h"
#include"reg.h"
#include"GPIO_V3_inter.h"
#include"GPIO_V3_REG.h"
#include"interface.h"
#include"HAL_MOTORS_DIRECTIONS.h"
#include"RCC_interface.h"
#include"RCC_config.h"
#include"systick_config.h"
#include"systick_interface.h"
#include"systick_privite.h"



int main(){
//u32 LOC_u64Mantissa=104;
//u32 LOC_u64Fraction=3;

	RCC_void_HSIdrive(ClockErorrDefualt);
	RCC_EN_Prepheral( APB2_BUS ,GPIOA_RCC);
	RCC_EN_Prepheral( APB2_BUS ,USART1_RCC);
	PINCONFIGvoid(PORTA, PIN9,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN0,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN1,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN2,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN3,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN10,INPUT_PULLUP_PULLDOWN);
	PINCONFIGvoid(PORTA, PIN7,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN4,OUTPUT_SPEED_2MHZ_PP);
	PINCONFIGvoid(PORTA, PIN5,OUTPUT_SPEED_2MHZ_PP);
	//MUSART->USART_BRR=52;
			MUSART->USART_BRR=0x341;
	MUSARTIntivoid();

	//MSTK_voidInit(Clk_SuorceState);

	//MUSART->USART_BRR = ( LOC_u64Mantissa << 4  ) | ( LOC_u64Fraction / 100 ) ;
		//	SET_BIT( MUSART->USART_BRR , 13 );

	//MUSARTSetvoid_boudRate(9600);


	//MUSART->USART_BRR;
	u8 DATA;
	while(1){





		DATA=Receive_u8Char();


		//DATA=Receive_u8Char();


		switch(DATA){
		          case 'a':
					forword();
					MSTK_VoidBasyWait(400000);
					break;


		          case 'b':
					BACK();
					MSTK_VoidBasyWait(400000);
					break;
		          case 'c':
				 RIGHT();
				 MSTK_VoidBasyWait(400000);
		          break;
		          case 'd':
					LEFT();
					MSTK_VoidBasyWait(400000);
					break;
		          case 'e':
					BACK_LEFT();
					MSTK_VoidBasyWait(400000);
		          break;
		          case 'f':
					BACK_RIGHT();
					MSTK_VoidBasyWait(400000);
		          break;

		          case 's':
		        	  SETPINvalue(PORTA,PIN4,HIGH);
		        	  SETPINvalue(PORTA,PIN5,HIGH);


		        	  break;
		          case 'n':
	  SETPINvalue(PORTA,PIN4,HIGH);
	        SETPINvalue(PORTA,PIN5,HIGH);
		     MSTK_VoidBasyWait(100000);
		  SETPINvalue(PORTA,PIN4,LOW);
		    SETPINvalue(PORTA,PIN5,LOW);


		    break;





		}
		MSTK_VoidBasyWait(500000);
		 STOP();
		  SETPINvalue(PORTA,PIN4,LOW);
	SETPINvalue(PORTA,PIN5,LOW);


}




	return 0;
}
