/*
 * GPIO_V3_REG.h
 *
 *  Created on: Apr 15, 2022
 *      Author: DELL
 */

#ifndef GPIO_V3_REG_H_
#define GPIO_V3_REG_H_

typedef struct{

	volatile u32 CRL;
	volatile u32 CRH;
	volatile u32 IDR;
	volatile u32 ODR;
	volatile u32 BSPR;
	volatile u32 BPR;
	volatile u32 LUCK;


}GPIO;
#define GPIO_PORTA ((volatile GPIO*)0X40010800)
#define GPIO_PORTB ((volatile GPIO*)0X40010C00)
#define GPIO_PORTC ((volatile GPIO*)0X40011000)

#endif /* GPIO_V3_REG_H_ */
