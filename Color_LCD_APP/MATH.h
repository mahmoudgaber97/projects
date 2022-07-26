#ifndef MATH_H_
#define MATH_H_
#define SET_BIT(REGISTER_NO,BIT_NO)     REGISTER_NO|=1<<BIT_NO
#define CLEAR_BIT(REGISTER_NO,BIT_NO)   REGISTER_NO &=~(1<<(BIT_NO))
#define TOGEL_BIT(REGISTER_NO,BIT_NO)   REGISTER_NO ^=1<< (BIT_NO)
#define GET_BIT(REGISTER_NO,BIT_NO)     ((REGISTER_NO>>BIT_NO) &1)
#define set_registerValue(bit_value,BIT_NO,REGISTER_NO)  CLEAR_BIT(REGISTER_NO,BIT_NO) ; REGISTER_NO|=(bit_value<<BIT_NO)

#endif
