#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_
#include"TYPES.h"

void MSTK_voidInit(u8 u8copy_clk);
void MSTK_VoidBasyWait(u32   u32Copy_Load);
void MSTK_voidSetInterrvalSignal(u32 u32Copy_Load ,void (*Copy_ptr)(void));
void MSTK_voidSetInterrvalPeriodic(u32 u32Copy_Load ,void (*Copy_ptr)(void));
void MSTK_voidSTOP(void);
u32 MSTK_voidElapsed(void);
u32 MSTK_voidRemaining(void);
u8 MSTK_voidGetFlag(void);

#endif
