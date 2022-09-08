#ifndef SPI_CONFIGRATION_H_
#define SPI_CONFIGRATION_H_

/*
 FULL_DUPLEX_MODE 
 HULF_DUPLEX_MODE 
 */
#define ConnectionWay  FULL_DUPLEX_MODE 

/*
 BID_Recevier      DID is bidirctional mode ==hulf douplex mode
 BID_Transmiter  
 */
 #define BID_Method   BID_Recevier 
 
/*
 CRC_Disable    
 CRC_Enable     
*/
#define Chack_erorrMode  CRC_Disable   
/*
 Data_phase_CRC    phase CRC CHACK IN READ MODE
 Next_trans_CRC    phase CRC CHACK IN WRITE MODE
*/

#define State_After_CRC  Data_phase_CRC

/*
 Data_Frame_SIZE_8_ 
 Data_Frame_SIZE_16_
 */
 #define FRAME_SIZE   Data_Frame_SIZE_8_ 
/*SSM bit in CR1 register configer slave  ss alwas enable */
/*
 SW_Slave_MangerD  
 SW_Slave_MangerE 
 */
 #define SSM   SW_Slave_MangerE
 /*
 # MSB  
 # LSB 
 

*/
 #define DATA_FRAME_Arrangement  MSB 

 
 /*Drive SPI*/
 /*
 SPI_Disable  
 SPI_ENABLE  
 */
 #define SPI_Driving   SPI_ENABLE  
 /*PRESCALER FOR BUS CLK*/
 /*
  Baud_Rate_f_div_2   
  Baud_Rate_f_div_4  
  Baud_Rate_f_div_8   
  Baud_Rate_f_div_16  
  Baud_Rate_f_div_32  
  Baud_Rate_f_div_64  
  Baud_Rate_f_div_128 
  Baud_Rate_f_div_256 
 */
 
 #define PRESCALER  Baud_Rate_f_div_2
 /*Select Position*/
 
 /*
  SPI_SLAVE   
  SPI_MASTER  
 */
 
 #define SPI_Position   SPI_MASTER 
 /*select polarity*/
 /*
 CPOL_idel_low 
 CPOL_idel_high
*/
#define  CPOL  CPOL_idel_high
 /*select phase */
 /*
 CPHA_First_read  
 CPHA_First_write
*/ 

#define CPHA CPHA_First_write

 /*enable interrupt if TX buffer empty*/
 /*
 TXbuffer_empty_interrupt_DIS 
 TXbuffer_empty_interrupt_en
*/  

#define TXbuffer_empty_flag  TXbuffer_empty_interrupt_DIS 

  /*enable interrupt if RX buffer empty*/
  /*
  RXbuffer_empty_interrupt_DIS 
  RXbuffer_empty_interrupt_en
*/
#define RXbuffer_empty_flag    RXbuffer_empty_interrupt_DIS 
  
  /*enable interrupt if HAS ERROR*/
 /*
  Erro_interrup_disable  
  Erro_interrup_enable   
 */
 #define Error_flag  Erro_interrup_disable  
 /*DRIVE SS IN MASTER MODE OR DO NOT?*/
 /*
  SS_masterModeDisable 
  SS_masterModeEnable
*/ 
#define SS_masterMode   SS_masterModeDisable 
 /*use DMA FOR TX*/
 /*
  TX_DMAdisable 
 TX_DMAEnable
*/
#define TXDMA_buffer  TX_DMAdisable  
  /*use DMA FOR RX*/
  /*
 RX_DMAdisable
 RX_DMAEnable 
 */
 #define   RXDMAEnable  RX_DMAdisable

#define Slave_PIN_Select PORTA,0
#endif
