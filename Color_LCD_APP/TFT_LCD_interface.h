#ifndef TFT_LCD_INTERFACE_H_
#define TFT_LCD_INTERFACE_H_

void TFT_LCD_Inti(void);
void TFT_LCD_ShowPhoto(const u16 *u16Image);

static void SendCommend(u8 u8Commend);
static void SendData(u8 u8Data);



#endif
