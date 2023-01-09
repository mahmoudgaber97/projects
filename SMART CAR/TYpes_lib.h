/*
 * TYpes_lib.h
 *
 *  Created on: Dec 28, 2022
 *      Author: MAHMOUD GA
 */

#ifndef TYPES_LIB_H_
#define TYPES_LIB_H_

typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short int u16;

#define SET_BIT(register_Name,BIT_Number)     register_Name|=1<<BIT_Number
#define CLEAR_BIT(register_Name,BIT_Number)   register_Name &=~(1<<(BIT_Number))
#define TOGEL_BIT(register_Name,BIT_Number)   register_Name ^=1<< (BIT_Number)
#define GET_BIT(register_Name,BIT_Number)     ((register_Name>>BIT_Number) &1)
#define set_registerValue(bit_value,BIT_Number,register_Name)  CLEAR_BIT(register_Name,BIT_Number) ; register_Name|=(bit_value<<BIT_Number)




#endif /* TYPES_LIB_H_ */
