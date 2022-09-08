/*
 * main.c

 *
 *  Created on: Aug 7, 2022
 *      Author: DELL
 */

#include"MATH.h"
#include"TYPES.h"
#include"GPIO_V3_inter.h"





#include"RCC_interface.h"


#include"systick_interface.h"






#include"RCC_config.h"


#include"SPI_Interface.h"
#include"TFT_LCD_interface.h"
#include"Image.h"



int main(){

RCC_void_HSIdrive( ClockErorrDefualt );
	RCC_EN_Prepheral(APB2_BUS ,GPIOA_RCC);
	RCC_EN_Prepheral(APB2_BUS ,SPI1_RCC);

	RCC_EN_Prepheral(AHB_BUS ,SDIO_RCC);
	PINCONFIGvoid(PORTA,8, OUTPUT_SPEED_2MHZ_PP_PIN );
	PINCONFIGvoid(PORTA,1, OUTPUT_SPEED_2MHZ_PP_PIN );
	PINCONFIGvoid(PORTA,2, OUTPUT_SPEED_2MHZ_PP_PIN );
	PINCONFIGvoid(PORTA,5, 0b1001 );
	PINCONFIGvoid(PORTA,7, 0b1001 );

	MSTK_voidInit(0);
	MSPI_voidIntiConfig();
     TFT_LCD_Inti();

     TFT_LCD_ShowPhoto(image);

	while(1){
		SETPINvalue(PORTA,8, 1 );
	}

	return 0;
}




