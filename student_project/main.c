#include<stdio.h>
#include"string.h"
#include"TYPE.h"
#include"Student.h"
#include<conio.h>
int main(){
	u32 u8choch;
	u8 len=2;
	struct Student_Info data[2];
	struct Queue_Info *Buffer;
	while(getch()!='E'){
	IntiQu(Buffer, data,len);/*intilize memory*/
	printf("**************************************************\n");
printf("to add file press 1 : \n");
printf("to find file using ID  press 2 : \n");
printf("to find file using first name press 3 : \n");
printf("to Delete file press 4 : \n");
printf("to updata file information press 5 : \n");
printf("store data at file.txt press 6 : \n");
printf("print data from file.txt press 7 \n");
printf("press E to exit \n");
printf("\n**************************************************\n");
	scanf("%d",&u8choch);  /*enter ur chose*/
    switch(u8choch){
		case 0:
		break;
		case 1:
		ADD_File(Buffer);
		break;

		case 2:
		 find_ID(data,len);
		break;
		case 3:
		find_name(data,len);
		break;
		case 4:
		 Delate_Student(data,len);
		break;
		case 5:
		Updatavoid(data,len);
		break;
		case 6:
	    Store_Auto_data();
		break;
		case 7:
		printAll_data_auto();
		break;
	
	}
	}
	
	return 0;
}