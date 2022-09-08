
#include"TYPES.h"
#include"MATH.H"
#include"SPI_Privite.h"
#include"SPI_Configration.h"
#include"SPI_Interface.h"
#include"GPIO_V3_inter.h"
#include"GPIO_V3_REG.h"

void (*SPICallBack)(u8);

void MSPI_voidIntiConfig(void){

	

	#if ConnectionWay == FULL_DUPLEX_MODE
	   CLEAR_BIT(MSPI->SPI_CR1,15);
	#elif ConnectionWay == HULF_DUPLEX_MODE
	     SET_BIT(MSPI->SPI_CR1,15);

	#endif

	#if BID_Method == BID_Recevier
	   CLEAR_BIT(MSPI->SPI_CR1,14);
	#elif BID_Method == BID_Transmiter
	     SET_BIT(MSPI->SPI_CR1,14);

	#endif

	#if BID_Method == BID_Recevier
	    CLEAR_BIT(MSPI->SPI_CR1,13);
	#elif BID_Method == BID_Transmiter
	    SET_BIT(MSPI->SPI_CR1,13);
		#if State_After_CRC == Data_phase_CRC
		   CLEAR_BIT(MSPI->SPI_CR1,12);
		#elif State_After_CRC == Next_trans_CRC
		      SET_BIT(MSPI->SPI_CR1,12);

		#endif
	#endif
	#if FRAME_SIZE == Data_Frame_SIZE_8_
        	 CLEAR_BIT(MSPI->SPI_CR1,11);
	#elif FRAME_SIZE == Data_Frame_SIZE_9_

		  SET_BIT(MSPI->SPI_CR1,11);
	#endif

	#if SSM == SW_Slave_MangerD
	     CLEAR_BIT(MSPI->SPI_CR1,9);
	#elif SSM == SW_Slave_MangerE

	SET_BIT(MSPI->SPI_CR1,9);

	#endif
	#if SSI == Internal_slave_selectEnable
	    SET_BIT(MSPI->SPI_CR1,8);
	 #elif SSI == Internal_slave_selectDisable
	 #endif

	#if DATA_FRAME_Arrangement == MSB
	    CLEAR_BIT(MSPI->SPI_CR1,7);
	#elif  DATA_FRAME_Arrangement == LSB
	     SET_BIT(MSPI->SPI_CR1,7);
	#endif

	#if SPI_Driving == SPI_ENABLE

		SET_BIT(MSPI->SPI_CR1,6);
	#elif SPI_Driving == SPI_Disable
	     CLEAR_BIT(MSPI->SPI_CR1,6);
	#endif

	#if PRESCALER == Baud_Rate_f_div_2
	    set_registerValue(Baud_Rate_f_div_2,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_4
	    set_registerValue(Baud_Rate_f_div_4,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_8
	    set_registerValue(Baud_Rate_f_div_8,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_16
	    set_registerValue(Baud_Rate_f_div_16,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_32
	    set_registerValue(Baud_Rate_f_div_32,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_64
	    set_registerValue(Baud_Rate_f_div_64,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_128
	    set_registerValue(Baud_Rate_f_div_128,3,MSPI->SPI_CR1);
	#elif PRESCALER == Baud_Rate_f_div_256
	    set_registerValue(Baud_Rate_f_div_256,3,MSPI->SPI_CR1);
	#endif

	#if SPI_Position == SPI_MASTER
	    SET_BIT(MSPI->SPI_CR1,2);
	#elif SPI_Position == SPI_SPI_SLAVE

	      CLEAR_BIT(MSPI->SPI_CR1,2);
	#endif

	#if CPOL == CPOL_idel_low
	    CLEAR_BIT(MSPI->SPI_CR1,1);
	#elif  CPOL == CPOL_idel_high
	     SET_BIT(MSPI->SPI_CR1,1);
	#endif

	#if CPHA == CPHA_First_read
	     CLEAR_BIT(MSPI->SPI_CR1,0);
	 #elif CPHA == CPHA_First_write
	      SET_BIT(MSPI->SPI_CR1,0);
	#endif

	#if TXbuffer_empty_flag == TXbuffer_empty_interrupt_DIS
	     CLEAR_BIT(MSPI->SPI_CR2,7);
	#elif TXbuffer_empty_flag == TXbuffer_empty_interrupt_en
	      SET_BIT(MSPI->SPI_CR2,7);
	#endif

	#if Error_flag == Erro_interrup_disable
	    CLEAR_BIT(MSPI->SPI_CR2,5);

	#elif  Error_flag ==  Erro_interrup_enable
	    SET_BIT(MSPI->SPI_CR2,5);
	#endif

	#if RXbuffer_empty_flag == RXbuffer_empty_interrupt_DIS
	     CLEAR_BIT(MSPI->SPI_CR2,6);
	#elif RXbuffer_empty_flag == RXbuffer_empty_interrupt_en
	       SET_BIT(MSPI->SPI_CR2,6);
	#endif

	#if SS_masterMode == SS_masterModeDisable
	    CLEAR_BIT(MSPI->SPI_CR2,2);
	#elif SS_masterMode ==  SS_masterModeEnable
	    SET_BIT(MSPI->SPI_CR2,2);
	#endif

	#if TXDMA_buffer == TX_DMAdisable
	      CLEAR_BIT(MSPI->SPI_CR2,1);
	#elif  TXDMA_buffer == TX_DMAEnable
          SET_BIT(MSPI->SPI_CR2,1);
    #endif

    #if	 RXDMAEnable == RX_DMAdisable
	    CLEAR_BIT(MSPI->SPI_CR2,0);
	#elif RXDMAEnable == RX_DMAEnable
	    SET_BIT(MSPI->SPI_CR2,0);
	#endif

	 //   MSPI->SPI_CR1 = 0x0347;
	
	
}



void MSPI_VoidSendReceiveSyncro(volatile u8  u8SPIChar,u8 *PtrReceive){

SETPINvalue(Slave_PIN_Select,LOW);
         MSPI->SPI_DR=u8SPIChar;

	 while(GET_BIT(MSPI->SPI_SR,7) == 1);
       *PtrReceive=MSPI->SPI_DR;
	

	SETPINvalue(Slave_PIN_Select,HIGH);
}


void MSPI_VoidSendReceive_ASyncro(u8 u8SPIChar,void (*ptr)(u8)){

SETPINvalue(Slave_PIN_Select,LOW);
         MSPI->SPI_DR=u8SPIChar;

         SPICallBack=ptr;

}


void SPI1_IRQHandler(void){

SPICallBack( MSPI->SPI_DR);

}




