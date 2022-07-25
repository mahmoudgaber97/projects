
/*Mahmoud Gaber 
startup for cortex M3 processor*/

/*Vector section*/
.section .vector  /*this commend in processor means creat section calls vector and save this symbols on it*/
.word 0x20001000 /*stack top address this address of SP in ram and it=0x08000000 in flash*/
.word _reset      /*reset interrupt by hardware it jumming to main in fash=0x08000004*/
.word vector_handelar  /*Non maskable interrupt*/ 
.word vector_handelar  /*hard fault*/
.word vector_handelar  /*bus fault*/
.word vector_handelar  /*usage fault*/
.word vector_handelar  /*reserved*/
.word vector_handelar  /*reserved*/
.word vector_handelar  /*reserved*/
.word vector_handelar  /*reserved*/
.word vector_handelar  /*SV call*/
.word vector_handelar /*debug reserved*/
.word vector_handelar /*reserved*/
.word vector_handelar /*pendSv*/
.word vector_handelar /*Systick*/
.word vector_handelar /*IRQ0*/
.word vector_handelar /*IRQ1*/
.word vector_handelar /*IRQ2*/
.word vector_handelar /*On to IRQ7*/
/*to know address in flash add 4 bytes*/


/*this section .text has codes of main*/
.section .text
_reset:       
 	bl main
 	b .               /*loop in main */

.thumb_func
vector_handelar:    /*when hardware send handlar interrupt tragger processor will vectes to _reset and reset will jumps to main */
 	b _reset
 	