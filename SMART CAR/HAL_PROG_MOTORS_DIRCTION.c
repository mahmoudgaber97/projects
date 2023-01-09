/*
 * HAL_PROG_MOTORS_DIRCTION.c

 *
 *  Created on: Dec 27, 2022
 *      Author: MAHMOUD GA
 */
#include"TYpes_lib.h"
#include"GPIO_V3_inter.h"
#include"GPIO_V3_REG.h"
#include"RCC_config.h"
#include"systick_config.h"
#include"systick_interface.h"
#include"systick_privite.h"

void motors_movments_Inti(void){





	PINCONFIGvoid(PORTA,PIN0,OUTPUT_SPEED_2MHZ_PP_PIN );
	PINCONFIGvoid(PORTA,PIN1,OUTPUT_SPEED_2MHZ_PP_PIN  );
	PINCONFIGvoid(PORTA,PIN2,OUTPUT_SPEED_2MHZ_PP_PIN  );
	PINCONFIGvoid(PORTA,PIN3,OUTPUT_SPEED_2MHZ_PP_PIN  );


}

void STOP(void){
	SETPINvalue(PORTA,PIN0,LOW);
	SETPINvalue(PORTA,PIN1,LOW);
	SETPINvalue(PORTA,PIN2,LOW);
	SETPINvalue(PORTA,PIN3,LOW);


}

void forword(void){
/*N1,N3 ARE  HIGH*/
	    SETPINvalue(PORTA,PIN0,HIGH);
		SETPINvalue(PORTA,PIN1,LOW);
		SETPINvalue(PORTA,PIN2,HIGH);
		SETPINvalue(PORTA,PIN3,LOW);


}


void BACK(void){

	 SETPINvalue(PORTA,PIN0,LOW);
	 SETPINvalue(PORTA,PIN1,HIGH);
	 SETPINvalue(PORTA,PIN2,LOW);
     SETPINvalue(PORTA,PIN3,HIGH);
}


void RIGHT(void){
	           SETPINvalue(PORTA,PIN0,HIGH);
				SETPINvalue(PORTA,PIN1,LOW);
				SETPINvalue(PORTA,PIN2,LOW);
				SETPINvalue(PORTA,PIN3,LOW);

				MSTK_VoidBasyWait(300000);
							 forword();


}
void LEFT(void){
	 SETPINvalue(PORTA,PIN0,LOW);
	 SETPINvalue(PORTA,PIN1,LOW);
	 SETPINvalue(PORTA,PIN2,HIGH);
	 SETPINvalue(PORTA,PIN3,LOW);

		MSTK_VoidBasyWait(300000);
			 forword();
}


void BACK_LEFT(){
	SETPINvalue(PORTA,PIN0,LOW);
		 SETPINvalue(PORTA,PIN1,LOW);
		 SETPINvalue(PORTA,PIN2,LOW);
		 SETPINvalue(PORTA,PIN3,HIGH);
		 MSTK_VoidBasyWait(300000);
		 BACK();
}

void BACK_RIGHT(){


	         SETPINvalue(PORTA,PIN0,LOW);
			 SETPINvalue(PORTA,PIN1,LOW);
			 SETPINvalue(PORTA,PIN2,LOW);
			 SETPINvalue(PORTA,PIN3,HIGH);
			 MSTK_VoidBasyWait(1000000);
			 BACK();

}



