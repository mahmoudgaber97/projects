#ifndef SPI_PRIVITE_H_
#define SPI_PRIVITE_H_

typedef struct {
	volatile u32  SPI_CR1;
	volatile u32  SPI_CR2;
	volatile u32  SPI_SR;
	volatile u32  SPI_DR;
	volatile u32  SPI_CRCPR;
	volatile u32  SPI_RXCRCR;
	volatile u32  SPI_TXCRCR;
	volatile u32  SPI_I2SCFGR;
	volatile u32  SPI_I2SPR;
	
	
}SPI_BANK;

#define MSPI  ((volatile SPI_BANK*)0x40013000)

#define FULL_DUPLEX_MODE 0
#define HULF_DUPLEX_MODE 1

#define BID_Recevier   0   /*DID is bidirctional mode ==hulf douplex mode*/
#define BID_Transmiter 1   

#define CRC_Disable    0
#define CRC_Enable     1

#define Data_phase_CRC 0 /*phase CRC CHACK IN READ MODE*/
#define Next_trans_CRC 1 /*phase CRC CHACK IN WRITE MODE*/

#define Data_Frame_SIZE_8_  0
#define Data_Frame_SIZE_16_ 1
/*SSM bit in CR1 register configer slave  ss alwas enable */
 #define SW_Slave_MangerD 0
 #define SW_Slave_MangerE 1
 
 #define MSB  0
 #define LSB  1
 /*Drive SPI*/
 #define  SPI_Disable  0
 #define  SPI_ENABLE  1
 /*PRESCALER FOR BUS CLK*/
 #define Baud_Rate_f_div_2   0b000
 #define Baud_Rate_f_div_4   0b001
 #define Baud_Rate_f_div_8   0b010
 #define Baud_Rate_f_div_16  0b011
 #define Baud_Rate_f_div_32  0b100
 #define Baud_Rate_f_div_64  0b101
 #define Baud_Rate_f_div_128 0b110
 #define Baud_Rate_f_div_256 0b111
 
 /*Select Position*/
 #define SPI_SLAVE   0
 #define SPI_MASTER  1
 
 /*select polarity*/
 #define CPOL_idel_low  0
 #define CPOL_idel_high 1
 /*select phase */
 #define CPHA_First_read  0
 #define CPHA_First_write 1
 /*enable interrupt if TX buffer empty*/
 #define TXbuffer_empty_interrupt_DIS 0
 #define TXbuffer_empty_interrupt_en 1
  /*enable interrupt if RX buffer empty*/
 #define RXbuffer_empty_interrupt_DIS 0
 #define RXbuffer_empty_interrupt_en 1
 /*enable interrupt if HAS ERROR*/
 #define Erro_interrup_disable  0
 #define Erro_interrup_enable   1
 /*DRIVE SS IN MASTER MODE OR DO NOT?*/
 #define SS_masterModeDisable 0
 #define SS_masterModeEnable  1
 /*use DMA FOR TX*/
 #define TX_DMAdisable 0
 #define TX_DMAEnable  1
  /*use DMA FOR RX*/
 #define RX_DMAdisable 0
 #define RX_DMAEnable  1
 

#endif

