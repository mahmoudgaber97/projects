
MEMORY
{
   FLASH (rx)  : ORIGIN = 0x08000000, LENGTH = 64K
   RAM   (rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}



SECTIONS
{
  .text : {

  *(.vector*)
  *(.text*)
  *(.rodata*)
  } >FLASH

  .data : {
      *(.data*)

  } > FLASH

  .bss : {
  *(.bss*)} >RAM


  




   }

