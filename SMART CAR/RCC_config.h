#ifndef RCC_CONFIG_H_
#define  RCC_CONFIG_H_
/*This configration to correct erorr in internal clock 8MHZ

THIS INPUT FOR (RCC_void_HSIdrive) FUNCTION

*/
#define ClockErorrDefualt  0b10000
/*+++++++++++++++++++++++++++++++++++++++++++++++*/
#define Correct40KHZ_Increase     0b00001
#define Correct80KHZ_Increase     0b00010
#define Correct120KHZ_Increase    0b00011
#define Correct160KHZ_Increase    0b00100
#define Correct200KHZ_Increase    0b00101
#define Correct240KHZ_Increase    0b00110
#define Correct280KHZ_Increase    0b00111
#define Correct320KHZ_Increase    0b01000
#define Correct360KHZ_Increase    0b01001
#define Correct400KHZ_Increase    0b01010
#define Correct440KHZ_Increase    0b01011
#define Correct480KHZ_Increase    0b01100
#define Correct520KHZ_Increase    0b01101
#define Correct560KHZ_Increase    0b01110
#define Correct600KHZ_Increase    0b01111


/*------------------------------------------------*/
#define Correct40KHZ_Decrease     0b10001
#define Correct80KHZ_Decrease     0b10010
#define Correct120KHZ_Decrease    0b10011
#define Correct160KHZ_Decrease    0b10100
#define Correct200KHZ_Decrease    0b10101
#define Correct240KHZ_Decrease    0b10110
#define Correct280KHZ_Decrease    0b10111
#define Correct320KHZ_Decrease    0b11000
#define Correct360KHZ_Decrease    0b11001
#define Correct400KHZ_Decrease    0b11010
#define Correct440KHZ_Decrease    0b11011
#define Correct480KHZ_Decrease    0b11100
#define Correct520KHZ_Decrease    0b11101
#define Correct560KHZ_Decrease    0b11110
#define Correct600KHZ_Decrease    0b11111



#define HIGH 1
#define LOW  0


/*THIS MODES INPUTS OF void RCC_void_HSEDRIVER(u8 HSE_u8Clocktype)  FUNCTION*/

#define RCC_MODE_BYPASS   1
#define RCC_MODE_CYRSTAL  0



/*this inputs for void RCC_voidIntilazation()
to select PLL CIT.
*/

#define PLL1 1
#define PLL2 2
#define PLL3 3

/*inputs for void RCC_PLLvoidConfigration(u8 PLLClock_u8types,u8 PLL_u8BUS , u8 PLL_u8FACTOR, u8 PLL_u8PRESCALER) function*/
/*u8 PLLClock_u8types-------> */
#define RCC_HSI_PLL           1
#define RCC_HSE_PLL           2
#define RCC_HSEdivided2_PLL   3

/*u8 PLL_u8BUS*/
#define RCC_AHB                1
#define RCC_APB1               2
#define RCC_APB2               3
#define RCC_ADC                4

/*u8 PLL_u8FACTOR*/
/********************************************************************************************/
/*                                                                                          */
/*                                                            */
/*                              1-PLL_CLOCKk_MULTIPLE_BY_2                                   */
/*                              2-PLL_CLOCKk_MULTIPLE_BY_3                                   */
/*                              3-PLL_CLOCKk_MULTIPLE_BY_4                                   */
/*                              4-PLL_CLOCKk_MULTIPLE_BY_5                                   */
/*                              5-PLL_CLOCKk_MULTIPLE_BY_6                                   */
/*                              6-PLL_CLOCKk_MULTIPLE_BY_7                                   */
/*                              7-PLL_CLOCKk_MULTIPLE_BY_8                                   */
/*                              8-PLL_CLOCKk_MULTIPLE_BY_9                                   */
/*                              9-PLL_CLOCKk_MULTIPLE_BY_10                                  */
/*                              10-PLL_CLOCKk_MULTIPLE_BY_11                                 */
/*                              11-PLL_CLOCKk_MULTIPLE_BY_12                                 */
/*                              12-PLL_CLOCKk_MULTIPLE_BY_13                                 */
/*                              13-PLL_CLOCKk_MULTIPLE_BY_14                                 */
/*                              14-PLL_CLOCKk_MULTIPLE_BY_15                                 */
/*                              15-PLL_CLOCKk_MULTIPLE_BY_16                                 */
/*                                                                                          */
/********************************************************************************************/

#define NO_CLOCK_FACTOR                                0b0000
#define PLL_CLOCK_MULTIPLE_BY_2                        0b0000
#define PLL_CLOCK_MULTIPLE_BY_3					       0b0001
#define PLL_CLOCK_MULTIPLE_BY_4                        0b0010
#define PLL_CLOCK_MULTIPLE_BY_5                        0b0011
#define PLL_CLOCK_MULTIPLE_BY_6                        0b0100
#define PLL_CLOCK_MULTIPLE_BY_7                        0b0101
#define PLL_CLOCK_MULTIPLE_BY_8                        0b0110
#define PLL_CLOCK_MULTIPLE_BY_9                        0b0111
#define PLL_CLOCK_MULTIPLE_BY_10                       0b1000
#define PLL_CLOCK_MULTIPLE_BY_11                       0b1001
#define PLL_CLOCK_MULTIPLE_BY_12                       0b1010
#define PLL_CLOCK_MULTIPLE_BY_13                       0b1011
#define PLL_CLOCK_MULTIPLE_BY_14                       0b1100
#define PLL_CLOCK_MULTIPLE_BY_15                       0b1101
#define PLL_CLOCK_MULTIPLE_BY_16                       0b1110

/*PLL_u8PRESCALER*/

       /*1-ADCpre_Dev2  
	     2-ADCpre_Dev4
		 3-ADCpre_Dev6
		 4-ADCpre_Dev8
	   */
#define  ADCpre_Dev2 0b00
#define  ADCpre_Dev4 0b01
#define  ADCpre_Dev6 0b10
#define  ADCpre_Dev8 0b11

/*
        1-ABP2PREdIV_0
	    2-ABP2PREdIV_2
		3-ABP2PREdIV_4
		4-ABP2PREdIV_8
		5-ABP2PREdIV_16

*/

#define ABP2PREdIV_0    0b000
#define ABP2PREdIV_2    0b100
#define ABP2PREdIV_4    0b101
#define ABP2PREdIV_8    0b110
#define ABP2PREdIV_16   0b111


/*
        1-ABP1PREdIV_0
	    2-ABP1PREdIV_2
		3-ABP1PREdIV_4
		4-ABP1PREdIV_8
		5-ABP1PREdIV_16
*/
#define ABP2PREdIV_0    0b000
#define ABP2PREdIV_2    0b100
#define ABP2PREdIV_4    0b101
#define ABP2PREdIV_8    0b110
#define ABP2PREdIV_16   0b111

/*

        1-AHBPREdIV_0
		2-AHBPREdIV_2
		3-AHBPREdIV_4
		4-AHBPREdIV_8
		5-AHBPREdIV_16
		6-AHBPREdIV_64
		7-AHBPREdIV_128
		8-AHBPREdIV_256
		9-AHBPREdIV_512

*/

#define     AHBPREdIV_0    0b0000
#define	    AHBPREdIV_2    0b1000
#define		AHBPREdIV_4    0b1001
#define		AHBPREdIV_8    0b1010
#define	    AHBPREdIV_16   0b1011
#define		AHBPREdIV_64   0b1100
#define		AHBPREdIV_128  0b1101
#define		AHBPREdIV_256  0b1110
#define	    AHBPREdIV_512  0b1111







/**********************************************************************/
/*                                                                    */
/*                 Peripheral Clock Enable For AHB Bus                */
/*                              0-DMA1                                */
/*                              1-DMA2                                */
/*                              2-SRAM                                */
/*                              3-RESERVED                            */
/*                              4-FLITF                               */
/*                              5-RESERVED                            */
/*                              6-CRC                                 */
/*                              7-RESERVED                            */
/*                              8-FSMC                                */
/*                              9-RESERVED                            */
/*                              10-SDIO                               */
/*                                                                    */
/**********************************************************************/



#define    DMA1_RCC         0
#define    DMA2_RCC         1
#define    SRAM_RCC         2
#define    FLITF_RCC        4
#define    CRC_RCC          6
#define    FSMC_RCC         8
#define    SDIO_RCC         10




/**********************************************************************/
/*                                                                    */
/*                 Peripheral Clock Enable For APB2 Bus               */
/*                              0-AFIO                                */
/*                              1-RESERVED                            */
/*                              2-GPIOA                               */
/*                              3-GPIOB                               */
/*                              4-GPIOC                               */
/*                              5-GPIOD                               */
/*                              6-GPIOE                               */
/*                              7-GPIOF                               */
/*                              8-GPIOG                               */
/*                              9-ADC1                                */
/*                              10-ADC2                               */
/*                              11-TIM1                               */
/*                              12-SPI1                               */
/*                              13-TIM8                               */
/*                              14-USART1                             */
/*                              15-ADC3                               */
/*                              16-RESERVED                           */
/*                              17-RESERVED                           */
/*                              18-RESERVED                           */
/*                              19-TIM9                               */
/*                              20-TIM10                              */
/*                              21-TIM11                              */
/*                                                                    */
/**********************************************************************/




#define    AFIO_RCC         0
#define    GPIOA_RCC        2
#define    GPIOB_RCC        3
#define    GPIOC_RCC        4
#define    GPIOD_RCC        5
#define    GPIOE_RCC        6
#define    GPIOF_RCC        7
#define    GPIOG_RCC        8
#define    ADC1_RCC         9
#define    ADC2_RCC         10
#define    TIM1_RCC         11
#define    SPI1_RCC         12
#define    TIM8_RCC         13
#define    USART1_RCC       14
#define    ADC3_RCC         15
#define    TIM9_RCC         19
#define    TIM10_RCC        20
#define    TIM11_RCC        21



/**********************************************************************/
/*                                                                    */
/*                 Peripheral Clock Enable For APB1 Bus               */
/*                              0-TIM2                                */
/*                              1-TIM3                                */
/*                              2-TIM4                                */
/*                              3-TIM5                                */
/*                              4-TIM6                                */
/*                              5-TIM7                                */
/*                              6-TIM12                               */
/*                              7-TIM13                               */
/*                              8-TIM14                               */
/*                              9-RESERVED                            */
/*                              10-RESERVED                           */
/*                              11-WWDG                               */
/*                              12-RESERVED                           */
/*                              13-RESERVED                           */
/*                              14-SPI2                               */
/*                              15-SPI3                               */
/*                              16-RESERVED                           */
/*                              17-USART2                             */
/*                              18-USART3                             */
/*                              19-UART4                              */
/*                              20-UART5                              */
/*                              21-I2C1                               */
/*                              22-I2C2                               */
/*                              23-USB                                */
/*                              24-RESERVED                           */
/*                              25-CAN                                */
/*                              26-RESERVED                           */
/*                              27-BKP                                */
/*                              28-PWR                                */
/*                              29-DAC                                */
/*                                                                    */
/**********************************************************************/




#define    TIM2_RCC         0
#define    TIM3_RCC         1
#define    TIM4_RCC         2
#define    TIM5_RCC         3
#define    TIM6_RCC         4
#define    TIM7_RCC         5
#define    TIM12_RCC        6
#define    TIM13_RCC        7
#define    TIM14_RCC        8
#define    WWDG_RCC         11
#define    SPI2_RCC         14
#define    SPI3_RCC         15
#define    USART2_RCC       17
#define    USART3_RCC       18
#define    UART4_RCC        19
#define    UART5_RCC        20
#define    I2C1_RCC         21
#define    I2C2_RCC         22
#define    USB_RCC          23
#define    CAN_RCC          25
#define    BKP_RCC          27
#define    PWR_RCC          28
#define    DAC_RCC          29


#define    AHB_BUS       0
#define    APB1_BUS      1
#define    APB2_BUS      2

#endif

