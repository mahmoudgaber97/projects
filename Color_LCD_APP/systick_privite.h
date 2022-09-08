#ifndef SYSTICK_PRIVITE_H_
#define SYSTICK_PRIVITE_H_
#include"TYPES.h"
void (*MSTKCallBack1)(void);
u32 *MSTKCallBack2;
typedef struct{
	
volatile u32  STK_CTRL;
volatile u32  STK_LOAD;
volatile u32  STK_VAL;
volatile u32  STK_CALIB;
	
	
}SYSTICK;


#define SYS_ptr   ((volatile SYSTICK*)0xE000E010)

#define SYS_AHB_Dev8   0
#define SYS_AHB        1

#endif
