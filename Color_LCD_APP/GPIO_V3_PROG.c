/*
 * main1.c
 *
 *  Created on: May 28, 2020
 *      Author: Mahmoud gaber
 */

#include"TYPES.h"
#include"MATH.h"
#include"GPIO_V3_REG.h"
#include"GPIO_V3_inter.h"


void SETPORT_Void(u8 NUMBERPORT, u32 Portu32value){


		switch(NUMBERPORT){
		case PORTA:
			GPIO_PORTA->ODR=Portu32value;
			break;
		case PORTB:
			GPIO_PORTB->ODR=Portu32value;
			break;
		case PORTC:
			GPIO_PORTC->ODR=Portu32value;
			break;
		}

}












void PORTvoidCONFIGRATION(u8 NUMBERPORT ,u32 PORTu32conFIG)
{


			switch(NUMBERPORT){
			case PORTA:
				GPIO_PORTA->CRL=PORTu32conFIG;
				GPIO_PORTA->CRH=PORTu32conFIG;
				break;
			case PORTB:
				GPIO_PORTB->CRL=PORTu32conFIG;
				GPIO_PORTB->CRH=PORTu32conFIG;
				break;
			case PORTC:
				GPIO_PORTC->CRL=PORTu32conFIG;
				GPIO_PORTC->CRH=PORTu32conFIG;
				break;
			}
		}





void SETPINvalue(u8 NUMBERPORT,u8 PIu8Nnumber, u8 STATE){

	switch(NUMBERPORT){

	case PORTA:
		switch(PIu8Nnumber){

		case PIN0:
			if(STATE==HIGH){
				SET_BIT(GPIO_PORTA->ODR,PIN0);
			}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN0);
			}
			else{/*return error*/}
		break;

		case PIN1:
			if(STATE==HIGH){
			SET_BIT(GPIO_PORTA->ODR,PIN1);
				}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN1);
			}
			else{/*return error*/}
				break;

		case PIN2:
			if(STATE==HIGH){
						SET_BIT(GPIO_PORTA->ODR,PIN2);
							}
						else if(STATE==LOW){
							CLEAR_BIT(GPIO_PORTA->ODR,PIN2);
						}
						else{/*return error*/}

				break;

		case PIN3:
			if(STATE==HIGH){
			SET_BIT(GPIO_PORTA->ODR,PIN3);
					}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN3);
				}
			else{/*return error*/}
				break;


		case PIN4:
			if(STATE==HIGH){
		SET_BIT(GPIO_PORTA->ODR,PIN4);
				}
		else if(STATE==LOW){
			CLEAR_BIT(GPIO_PORTA->ODR,PIN4);
				}
		else{/*return error*/}
				break;

		case PIN5:
			if(STATE==HIGH){
				SET_BIT(GPIO_PORTA->ODR,PIN5);
				}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN5);
				}
			else{/*return error*/}
				break;

		case PIN6:
			if(STATE==HIGH){
			SET_BIT(GPIO_PORTA->ODR,PIN6);
				}
				else if(STATE==LOW){
					CLEAR_BIT(GPIO_PORTA->ODR,PIN6);
				}
			else{/*return error*/}
				break;


		case PIN7:
			if(STATE==HIGH){
			SET_BIT(GPIO_PORTA->ODR,PIN7);
					}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN7);
					}
			else{/*return error*/}
				break;

		case PIN8:
			if(STATE==HIGH){
			SET_BIT(GPIO_PORTA->ODR,PIN8);
					}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN8);
				}
				else{/*return error*/}
				break;

		case PIN9:
			if(STATE==HIGH){
			SET_BIT(GPIO_PORTA->ODR,PIN9);
					}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN9);
							}
				else{/*return error*/}
				break;

		case PIN10:
			if(STATE==HIGH){
		SET_BIT(GPIO_PORTA->ODR,PIN10);
				}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN10);
					}
			else{/*return error*/}
				break;

		case PIN11:
			if(STATE==HIGH){
				SET_BIT(GPIO_PORTA->ODR,PIN11);
				}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN11);
				}
			else{/*return error*/}
				break;

		case PIN12:
			if(STATE==HIGH){
						SET_BIT(GPIO_PORTA->ODR,PIN12);
								}
						else if(STATE==LOW){
							CLEAR_BIT(GPIO_PORTA->ODR,PIN12);
							}
						else{/*return error*/}
				break;

		case PIN13:
			if(STATE==HIGH){
						SET_BIT(GPIO_PORTA->ODR,PIN13);
								}
						else if(STATE==LOW){
							CLEAR_BIT(GPIO_PORTA->ODR,PIN13);
							}
						else{/*return error*/}
				break;

		case PIN14:
			if(STATE==HIGH){
				CLEAR_BIT(GPIO_PORTA->ODR,PIN14);
								}
						else if(STATE==LOW){
							CLEAR_BIT(GPIO_PORTA->ODR,PIN14);
							}
						else{/*return error*/}
				break;

		case PIN15:
			if(STATE==HIGH){
						SET_BIT(GPIO_PORTA->ODR,PIN15);
								}
						else if(STATE==LOW){
							CLEAR_BIT(GPIO_PORTA->ODR,PIN15);
							}
						else{/*return error*/}
				break;






		}
		break;
	case PORTB:

		switch(PIu8Nnumber){

				case PIN0:
					if(STATE==HIGH){
						SET_BIT(GPIO_PORTB->ODR,PIN0);
					}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN0);
					}
					else{/*return error*/}
				break;

				case PIN1:
					if(STATE==HIGH){
					SET_BIT(GPIO_PORTB->ODR,PIN1);
						}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN1);
					}
					else{/*return error*/}
						break;

				case PIN2:
					if(STATE==HIGH){
								SET_BIT(GPIO_PORTB->ODR,PIN2);
									}
								else if(STATE==LOW){
									CLEAR_BIT(GPIO_PORTB->ODR,PIN2);
								}
								else{/*return error*/}

						break;

				case PIN3:
					if(STATE==HIGH){
					SET_BIT(GPIO_PORTB->ODR,PIN3);
							}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN3);
						}
					else{/*return error*/}
						break;


				case PIN4:
					if(STATE==HIGH){
				SET_BIT(GPIO_PORTB->ODR,PIN4);
						}
				else if(STATE==LOW){
					CLEAR_BIT(GPIO_PORTB->ODR,PIN4);
						}
				else{/*return error*/}
						break;

				case PIN5:
					if(STATE==HIGH){
						SET_BIT(GPIO_PORTB->ODR,PIN5);
						}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN5);
						}
					else{/*return error*/}
						break;

				case PIN6:
					if(STATE==HIGH){
					SET_BIT(GPIO_PORTB->ODR,PIN6);
						}
						else if(STATE==LOW){
							CLEAR_BIT(GPIO_PORTB->ODR,PIN6);
						}
					else{/*return error*/}
						break;


				case PIN7:
					if(STATE==HIGH){
					SET_BIT(GPIO_PORTB->ODR,PIN7);
							}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN7);
							}
					else{/*return error*/}
						break;

				case PIN8:
					if(STATE==HIGH){
					SET_BIT(GPIO_PORTB->ODR,PIN8);
							}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN8);
						}
						else{/*return error*/}
						break;

				case PIN9:
					if(STATE==HIGH){
					SET_BIT(GPIO_PORTB->ODR,PIN9);
							}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN9);
									}
						else{/*return error*/}
						break;

				case PIN10:
					if(STATE==HIGH){
				SET_BIT(GPIO_PORTB->ODR,PIN10);
						}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN10);
							}
					else{/*return error*/}
						break;

				case PIN11:
					if(STATE==HIGH){
						SET_BIT(GPIO_PORTB->ODR,PIN11);
						}
					else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN11);
						}
					else{/*return error*/}
						break;

				case PIN12:
					if(STATE==HIGH){
								SET_BIT(GPIO_PORTB->ODR,PIN12);
										}
								else if(STATE==LOW){
									CLEAR_BIT(GPIO_PORTB->ODR,PIN12);
									}
								else{/*return error*/}
						break;

				case PIN13:
					if(STATE==HIGH){
								SET_BIT(GPIO_PORTB->ODR,PIN13);
										}
								else if(STATE==LOW){
									CLEAR_BIT(GPIO_PORTB->ODR,PIN13);
									}
								else{/*return error*/}
						break;

				case PIN14:
					if(STATE==HIGH){
								SET_BIT(GPIO_PORTB->ODR,PIN14);
										}
								else if(STATE==LOW){
									CLEAR_BIT(GPIO_PORTB->ODR,PIN14);
									}
								else{/*return error*/}
						break;

				case PIN15:
					if(STATE==HIGH){
								SET_BIT(GPIO_PORTB->ODR,PIN15);
										}
								else if(STATE==LOW){
								CLEAR_BIT(GPIO_PORTB->ODR,PIN15);
									}
								else{/*return error*/}
						break;






				}
				break;
	case PORTC:




			switch(PIu8Nnumber){

			case PIN13:
					if(STATE==HIGH){
						SET_BIT(GPIO_PORTB->ODR,PIN13);
								}
					else if(STATE==LOW){
					CLEAR_BIT(GPIO_PORTB->ODR,PIN13);
								}
				else{/*return error*/}
				break;

				case PIN14:
					if(STATE==HIGH){
            	SET_BIT(GPIO_PORTB->ODR,PIN14);
								}
				else if(STATE==LOW){
						CLEAR_BIT(GPIO_PORTB->ODR,PIN14);
						}
						else{/*return error*/}
					break;

		case PIN15:
			if(STATE==HIGH){
		SET_BIT(GPIO_PORTB->ODR,PIN15);
					}
			else if(STATE==LOW){
				CLEAR_BIT(GPIO_PORTB->ODR,PIN15);
						}
		else{/*return error*/}
				break;



		}


			break;

default:
	break;

		}


	}




void PINCONFIGvoid(u8 NUMBERPORT,u8 PIu8Nnumber, u32 config){


	switch(NUMBERPORT){

	case PORTA:
		if(PIu8Nnumber<8){
GPIO_PORTA->CRL&=~((0b1111)<<(4*PIu8Nnumber));
GPIO_PORTA->CRL|=((config)<<(4*PIu8Nnumber));



		}

		else if(PIu8Nnumber<16){
			PIu8Nnumber-=8;

			GPIO_PORTA->CRH&=~((0b1111)<<(4*PIu8Nnumber));
			GPIO_PORTA->CRH|=((config)<<(4*PIu8Nnumber));

		}

		break;


	case PORTB:
			if(PIu8Nnumber<=7){
	GPIO_PORTB->CRL&=~((0b1111)<<(4*PIu8Nnumber));
	GPIO_PORTB->CRL|=((config)<<(4*PIu8Nnumber));



			}

			else if(PIu8Nnumber<=15){
				PIu8Nnumber-=8;
				GPIO_PORTB->CRH&=~((0b1111)<<(4*PIu8Nnumber));
				GPIO_PORTB->CRH|=((config)<<(4*PIu8Nnumber));

			}


			break;
	case PORTC:
		PIu8Nnumber-=8;
		GPIO_PORTC->CRH&=~((0b1111)<<(4*PIu8Nnumber));
		GPIO_PORTC->CRH|=((config)<<(4*PIu8Nnumber));
		break;
	default:
			break;


	}


	}

u8 GETu8PIN(u8 NUMBERPORT,u8 PIu8Nnumber){
	u8 pin_value;
	switch( NUMBERPORT){

	case PORTA:
		pin_value= GET_BIT( GPIO_PORTA->IDR,PIu8Nnumber);
		break;
	case PORTB:
		pin_value= GET_BIT( GPIO_PORTB->IDR,PIu8Nnumber);
	break;

	case PORTC:
		pin_value= GET_BIT( GPIO_PORTB->IDR,PIu8Nnumber);
		break;



	}

	return (pin_value);




}



/*u16 GETu8PORT(u8 NUMBERPORT)

{
	u16 PORTU16value;

	switch(NUMBERPORT){

	case PORTA:
		PORTU16value=0X00FF&GPIO_PORTA->IDR;
		
		break;
	case PORTB:
		PORTU16value=GPIO_PORTB->IDR;
		break;
	case PORTC:
		PORTU16value=GPIO_PORTC->IDR;
		break;

	}
	return (PORTU16value);

}
*/
u16 MGPIO_u16GetPortValue( u8 Copy_u8Port , u8 Copy_u8Position ){

	u16 LOC_u16Result = 0;

	switch( Copy_u8Port ){

	case PORTA:

		LOC_u16Result = GPIO_PORTA->IDR;
		if      ( Copy_u8Position == LOW  ){ LOC_u16Result &= 0x00FF ; }
		else if ( Copy_u8Position == HIGH ){ LOC_u16Result &= 0xFF00 ; }

		break;
	case PORTB:

		LOC_u16Result = GPIO_PORTA->IDR;
		if      ( Copy_u8Position == LOW  ){ LOC_u16Result &= 0x00FF ; }
		else if ( Copy_u8Position == HIGH ){ LOC_u16Result &= 0xFF00 ; }

		break;
	case PORTC:

		LOC_u16Result = GPIO_PORTA->IDR;
		if      ( Copy_u8Position == LOW  ){ LOC_u16Result &= 0x00FF ; }
		else if ( Copy_u8Position == HIGH ){ LOC_u16Result &= 0xFF00 ; }

		break;

	}

	return LOC_u16Result ;

}



