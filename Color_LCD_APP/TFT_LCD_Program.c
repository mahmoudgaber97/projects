#include"TYPES.h"
#include"MATH.h"

#include"GPIO_V3_inter.h"
#include"SPI_Interface.h"
#include"systick_interface.h"
#include"TFT_LCD_Configration.h"
#include"TFT_LCD_interface.h"



void TFT_LCD_Inti(void){
	/*RESET SIGNAL BY GPIO*/
	SETPINvalue(PIN_Configration_SIGNAL,HIGH);
	MSTK_VoidBasyWait(100);
	SETPINvalue(PIN_Configration_SIGNAL,LOW);
	MSTK_VoidBasyWait(1);
	SETPINvalue(PIN_Configration_SIGNAL,HIGH);
	MSTK_VoidBasyWait(100);
	SETPINvalue(PIN_Configration_SIGNAL,LOW);
	MSTK_VoidBasyWait(100);
	SETPINvalue(PIN_Configration_SIGNAL,HIGH);
	MSTK_VoidBasyWait(120000);
	/*SEND SLEEP OUT COMMEND  */
	SendCommend(0X11);
	MSTK_VoidBasyWait(150000);
	/*SEND COLOR LED COMMEND +ID*/
	SendCommend(0X3A);
	 SendData(0X05);
	 /*SEND DISPLAY ON*/
	 SendCommend(0X29);

	
}

static void SendCommend(u8 u8Commend){
	u8 u8Loc_Var;
	         /*to receive no thing*/
	/*TO configer TFT to receive commend set A0 at TFT KIT BY 0*/

SETPINvalue(PIN_Configration_Selection,LOW);
MSPI_VoidSendReceiveSyncro(u8Commend,&u8Loc_Var);  /*Send commend by SPI COMMUNICATION PROTOCOL*/

}

static void SendData(u8 u8Data){
	u8 u8LOC2;


	/*to receive no thing*/
	/*TO configer TFT to receive Data set A0 at TFT KIT BY 1*/
SETPINvalue(PIN_Configration_Selection,HIGH);
MSPI_VoidSendReceiveSyncro(u8Data,&u8LOC2);  /*Send Data by SPI COMMUNICATION PROTOCOL*/

}


void TFT_LCD_ShowPhoto(const u16 *u16Image){
	u32 u32counter;
	/*COMMEND TO SELECT X AXIS*/
	SendCommend(0X2A);
	/*WRITE START POINT I X*/
	SendData(0);
	SendData(0);
	/*WRITE END POINT I X @ TWO BYTES*/
	SendData(0);
	SendData(127);
	/*COMMEND TO SELECT Y AXIS*/
	SendCommend(0X2B);
	/*WRITE START POINT I Y @ TWO BYTES*/
		SendData(0);
		SendData(0);
		/*WRITE END POINT I Y @ TWO BYTES*/
		SendData(0);
		SendData(159);

		/*COMMEND TO DRAW*/
		SendCommend(0X2C );

for(u32counter=0;u32counter<=20480;u32counter++){

	SendData(u16Image[u32counter] >>8);
	SendData(u16Image[u32counter] &0x00ff);
}


}

