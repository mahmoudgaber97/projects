/*
Created on: May 28, 2022
 *      Author: Mahmoud gaber
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_
#include"TYPES.h"
void RCC_void_HSIdrive(u8 HSI_u8Correct);
void RCC_void_HSEDRIVER(u8 HSE_u8Clocktype);
void RCC_PLLvoidIntilazation(u8 PLLu8Circuit_no);
void RCC_PLLvoidConfigration(u8 PLLClock_u8types,u8 PLL_u8BUS , u8 PLL_u8FACTOR, u8 PLL_u8PRESCALER);
void RCC_EN_Prepheral(u8 u8BUS , u8 u8prepheral);
void RCC_DISA_Prepheral(u8 u8BUS , u8 u8prepheral);


#endif
