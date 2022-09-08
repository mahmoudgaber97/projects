#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_

#include"TYPES.h"
void MSPI_voidIntiConfig(void);

void MSPI_VoidSendReceiveSyncro(volatile u8  u8SPIChar,u8 *PtrReceive);
void MSPI_VoidSendReceive_ASyncro(u8 u8SPIChar,void (*ptr)(u8));

#endif
