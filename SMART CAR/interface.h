/*
 * interface.h
 *
 *  Created on: Dec 27, 2022
 *      Author: MAHMOUD GA
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_



typedef unsigned char u8;
typedef unsigned int u32;




void MUSARTIntivoid(void);

u8 Receive_u8Char(void);
u8* Receive_u8String(void);






#endif /* INTERFACE_H_ */
