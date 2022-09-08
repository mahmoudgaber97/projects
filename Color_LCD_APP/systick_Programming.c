
#include"MATH.h"
#include"TYPES.h"
#include"systick_interface.h"

#include"systick_config.h"
#include"systick_privite.h"


void MSTK_voidInit(u8 u8copy_clk){

/*enable interrupt*/
//SET_BIT(SYS_ptr->STK_CTRL,1);

SYS_ptr->STK_CTRL|= u8copy_clk<<2;
//SET_BIT(SYS_ptr->STK_CTRL,1);

}

/*one tick=1 microsecond*/

void MSTK_VoidBasyWait(u32  u32Copy_Load){
	SYS_ptr->STK_LOAD=0x00000000;
/*load value*/

SYS_ptr->STK_LOAD=u32Copy_Load;
/*enable counter*/



	//SYS_ptr->STK_VAL=0;

SET_BIT(SYS_ptr->STK_CTRL,0);
while(!GET_BIT( SYS_ptr->STK_CTRL ,16 ));




}


void MSTK_voidSetInterrvalSignal(u32 u32Copy_Load,void (*Copy_ptr)(void)){
/*enable counter*/	
SET_BIT(SYS_ptr->STK_CTRL,0);
/*clear VAL_Register*/
SYS_ptr->STK_VAL=0;
/*load value*/

SYS_ptr->STK_LOAD=u32Copy_Load-1;

MSTKCallBack1=Copy_ptr;


}

/*
void MSTK_voidSetInterrvalPeriodic(u32 u32Copy_Load  ,void (*Copy_ptr)(void)){
	MSTK_voidSetInterrvalSignal( u32Copy_Load,Copy_ptr);
	MSTKCallBack2=MSTK_voidSetInterrvalPeriodic;



}
*/

void SysTick_Handler(void){


	MSTKCallBack1();
	/*
	if(MSTKCallBack2==MSTK_voidSetInterrvalPeriodic)
		 MSTKCallBack2;
*/

}


void MSTK_voidSTOP(void){

/*disable counter*/	
CLEAR_BIT(SYS_ptr->STK_CTRL,0);

}

u32 MSTK_voidElapsed(void){

u32 u32CurrentRegister_Value;
u32CurrentRegister_Value=SYS_ptr->STK_VAL;
return u32CurrentRegister_Value;
 

}


u32 MSTK_voidRemaining(void){
u32 u32CurrentRegister_Value;
u32CurrentRegister_Value=SYS_ptr->STK_LOAD - SYS_ptr->STK_VAL;
return u32CurrentRegister_Value;



}


u8 MSTK_voidGetFlag(void){



return (GET_BIT( SYS_ptr->STK_CTRL ,16 ) );


}
