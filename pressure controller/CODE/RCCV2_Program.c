/*
Created on: May 28, 2020
 *      Author: Mahmoud gaber
 */
#include"TYPES.h"
#include"MATH.h"
#include"RCC_interface.h"
#include"RCC_privet.h"
#include"RCC_config.h"

void RCC_void_HSIdrive(u8 HSI_u8Correct){
	/*choising HSI BY clear bits 00 in bits 0,1*/
	CLEAR_BIT( RCC_CFGR,0 );
	CLEAR_BIT( RCC_CFGR,1 );
	/* HSI is Enable by set bit in bit no. 0*/
    SET_BIT(RCC_CR,0);
	/*IF RCC_RC -> HSIRDY not=high it means clock does ot arrive to its value so processor wil wait*/
	while(GET_BIT(RCC_CR,1)==LOW);
	
	/*HSI_u8Correct changes by user to correct erorr in clock by using configration file*/
	RCC_CR|=HSI_u8Correct<<3;
	
}




void RCC_void_HSEDRIVER(u8 HSE_u8Clocktype)
{
/*CHOSING HSE*/
	SET_BIT(RCC_CFGR,0);
	CLEAR_BIT(RCC_CFGR,1);
	/*ENABLE HSE*/
	SET_BIT(RCC_CR,16);
	/*CHOSING IF HSE BYPAS MODE OR CYRSTAL */
	RCC_CR|=HSE_u8Clocktype<<18;
	/*INSTRACTION WAIT TO CLOCK ARRIVE TO ITS VALUE*/
	while(GET_BIT(RCC_CR,17)==LOW);
	
	
	
}




void RCC_void_ENABLEIntilazation(u8 PLLu8Circuit_no){
	 SET_BIT(RCC_CFGR,1);
	 CLEAR_BIT(RCC_CR,0);
	switch(PLLu8Circuit_no){
		
		case PLL1: SET_BIT(RCC_CR,24); break;
		case PLL2: SET_BIT(RCC_CR,26); break;
		case PLL3: SET_BIT(RCC_CR,28); break;
		default:
		break;
		
		
		
	}
	
	
	
	
}


void RCC_PLLvoidConfigration(u8 PLLClock_u8types,u8 PLL_u8BUS , u8 PLL_u8FACTOR, u8 PLL_u8PRESCALER){
	
	
	switch(PLLClock_u8types ){
		/*DRIVE PLL_HSI*/
		case  RCC_HSI_PLL:          
		CLEAR_BIT(RCC_CFGR ,16);
		 break;
	/*DRIVE PLL_HSE*/
		case  RCC_HSE_PLL:           
		SET_BIT(RCC_CR,16);
		SET_BIT(RCC_CFGR ,16);
		CLEAR_BIT(RCC_CFGR ,17);
		break;
		/*DRIVE PLL_HSE/2*/
		case RCC_HSEdivided2_PLL:  
		
        SET_BIT(RCC_CR,16);
		SET_BIT(RCC_CFGR ,16);
		SET_BIT(RCC_CFGR ,17);

		break;
		default:
		break;
		
		
	}
	
	switch(PLL_u8BUS){
		/*DRIVE AHB BUS*/
		case RCC_AHB  :
		RCC_CFGR |=PLL_u8PRESCALER<<4;
		break;
		/*DRIVE APB1 BUS*/
		case RCC_APB1 :
		RCC_CFGR |=PLL_u8PRESCALER<<8;
		break;
		/*DRIVE APB2 BUS*/
		case RCC_APB2 :
		RCC_CFGR |=PLL_u8PRESCALER<<11;
		break;
		/*DRIVE ADC BUS*/
		case RCC_ADC :
		RCC_CFGR |=PLL_u8PRESCALER<<14;
		break;
		default:
		break;
		
	}
	/*TO SELECT MULTIPLICATION*/
	RCC_CFGR|=PLL_u8FACTOR<<18;
	
	
}










void RCC_EN_Prepheral(u8 u8BUS , u8 u8prepheral){
	
	if( u8prepheral<=31){	
	switch(u8BUS){
		
		case AHB_BUS:
		SET_BIT(RCC_AHBENR,u8prepheral);
		
		break;
		
		
		
		case APB1_BUS:
		SET_BIT(RCC_APB1ENR ,u8prepheral);
		break;
		
		
		case APB2_BUS:
		SET_BIT(RCC_APB2ENR ,u8prepheral);
		break;
		
	}
	}
	else{/*return erorr*/}
	
} 



void RCC_DISA_Prepheral(u8 u8BUS , u8 u8prepheral){
	
	if( u8prepheral<=31){
	
	switch(u8BUS){
		
		case AHB_BUS:
		CLEAR_BIT(RCC_AHBENR,u8prepheral);
		
		break;
		
		
		
		case APB1_BUS:
		CLEAR_BIT(RCC_APB1ENR ,u8prepheral);
		break;
		
		
		case APB2_BUS:
		CLEAR_BIT(RCC_APB2ENR ,u8prepheral);
		break;
		
	}
	}
	else {/*return erorr*/}
	
}
