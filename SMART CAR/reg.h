/*
 * reg.h
 *
 *  Created on: Dec 27, 2022
 *      Author: MAHMOUD GA
 */

#ifndef REG_H_
#define REG_H_


typedef struct{
	u32 volatile USART_SR;
	u32 volatile USART_DR;
	u32 volatile USART_BRR;
	u32 volatile USART_CR1;
	u32 volatile USART_CR2;
	u32 volatile USART_CR3;
	u32 volatile USART_GTPR;





}MUSART_REGbank;

#define MUSART   ((volatile MUSART_REGbank*)0x40013800)





#endif /* REG_H_ */
