#include<stdio.h>
#include"TYPE.h"
#include"Student.h"
#include<string.h>
#include"stdlib.h"



/*function to intilize memory to stores data*/
 void IntiQu(struct Queue_Info *ASMemory,struct Student_Info* MemoryPtr,u8 u8Lenth){

	ASMemory->base=MemoryPtr;       /*base point to first location in memory*/
	ASMemory->head=ASMemory->base;  /*head point to first location in memory*/
	ASMemory->tail=ASMemory->base;  /*tail point to first location in memory*/
	ASMemory->lenth=u8Lenth;
	ASMemory->count=0;

	
}
/*function to add student files */
void ADD_File(struct Queue_Info *ASMemory){
	struct Subjects sub;
	/*if memory has locations add file*/
	if((ASMemory-> lenth&&ASMemory->base)||(!ASMemory->count)){
	
	    printf("enter ID : ");
	    scanf("%d",&ASMemory->head->ID);
		printf("enter first name and second name : ");
		scanf("%s %s",ASMemory->head->First_Name, ASMemory->head->Second_Name);
		
	
		
		printf("enter Old GPA : ");
		scanf("%f",&ASMemory->head->GPA);
		printf("enter subject \n");
		printf("enter physics degree  :");
		scanf("%f",&sub.PYSICS);
		printf("enter math degree  :");
		scanf("%f",&sub.MATH);
		printf("enter communication degree  :");
		scanf("%f",&sub.communication);
		printf("enter mobile  degree  :");
		scanf("%f",&sub.mobile);
		
		ASMemory->head->Digree=&(sub);
		
		ASMemory->head++;
		ASMemory->count++;
	}
		else if(!(ASMemory-> base)||(!ASMemory->head)||(!ASMemory->tail))
			printf("FIFO_NULL");
		 else if(ASMemory->count > ASMemory->lenth)
			 printf("FIFO_Full");
		else;
	
	
}
/*extention function to print file*/
void Print_voidData(struct Student_Info* SID_student){
	
	printf("\n student name: %s %s",SID_student->First_Name,SID_student->Second_Name);
	printf("\n student ID: %d",SID_student->ID);
	printf("\n student GPA: %0.2f",SID_student->GPA);
	
}
/*function to find file by ID*/
void find_ID(struct Student_Info *SID_student ,u8 u8Lenth){
	u8 u8ID,  u8count=0;
	printf("\n enter student ID: ");
	scanf("%d",&u8ID);
	while(u8count!=u8Lenth){
		if(u8ID==SID_student->ID){ /*SEARCH about file*/
	Print_voidData(SID_student);   /*print this file*/
	
	break;
	}
	else
		{
		u8count++;
		
	}
	(SID_student)++;
	}
}

/*function to find file by first name */
void find_name(struct Student_Info *SID_student ,u8 u8Lenth){
	u8 STR_Name[10],  u8count=0;
	printf("enter student name: ");
	scanf("%s",STR_Name);
	while(u8count!=u8Lenth){
		if(!(stricmp(STR_Name,SID_student->First_Name))){ /*compare between input name and student name*/
	Print_voidData(SID_student);
	
	break;
	}
	else{
		u8count++;
		
	}
	(SID_student)++;
	}
}

/*function to delete file*/
void Delate_Student(struct Student_Info *SID_student,u8 u8Lenth){
	u8 STR_Name[10],  u8count=0;
	struct Student_Info *sptr;
	printf("enter student name: ");
	scanf("%s",STR_Name);
	while(u8count!=u8Lenth){
		if(!(stricmp(STR_Name,SID_student->First_Name))){ /*find file by name*/
			sptr=SID_student;
			SID_student++;
	free(sptr); /*remove this file*/
	printf("file has been removed");
	
	break;
	}
	else{
		u8count++;
		
	}
	(SID_student)++;
	}
	
}
/*function to updata file*/
void Updatavoid(struct Student_Info *SID_student ,u8 u8Lenth){
	u8 SID,ch;
	printf("enter student ID  :\n");
	scanf("%d",&SID);
	printf("student data : ");
	find_ID(SID_student,u8Lenth);
	printf("chose 1 : to updata ID :\n");
	printf("chose 2 : to updata name :\n");
	printf("chose 3 : to updata GPA :\n");
	printf("chose 4 : to updata subjectd dgree :\n");
	scanf("%d",&ch);
	/*chose certain part to updata*/
	switch(ch){
		case 1:
		printf("enter new ID : ");
		scanf("%d",&SID_student->ID);
		break;
		case 2:
		printf("enter new name  : ");
		scanf("%s %s",SID_student->First_Name,SID_student->Second_Name);
		break;
		case 3:
		printf("enter new gpa : ");
		scanf("%d",&SID_student->GPA);
		break;
		case 4:
		printf("enter physics degree  :");
		scanf("%f",&SID_student->Digree->PYSICS);
		printf("enter math degree  :");
		scanf("%f",&SID_student->Digree->MATH);
		printf("enter communication degree  :");
		scanf("%f",&SID_student->Digree->communication);
		printf("enter mobile  degree  :");
		scanf("%f",&SID_student->Digree->mobile);
		break;
	}
	
}

/*print data from file.txt*/
void printAll_data_auto(){
	 char *filename = "f.txt";
    FILE *f = fopen(filename, "r");

    if (f == NULL)
    {
        printf("Error: could not open file %s", f);
        
    }
else{
    // read one character at a time and
    // display it to the output
    char ch;
    while ((ch = fgetc(f)) != EOF)
        putchar(ch);

    // close the file
    fclose(f);
	
}}

/*store data in file.txt*/
void Store_Auto_data(){
	struct Student_Info sentence;
	struct Queue_Info  *ptr;
	

    // creating file pointer to work with files
    FILE *f;
ptr->head=&(sentence);
    // opening file in writing mode
    f = fopen("f.txt", "w");

    // exiting program 
    if (f == NULL) {
        printf("Error!");
        exit(1);
    }
	
    printf("enter full name:");
   fgets(sentence.First_Name, 15 ,stdin);
   fgets(sentence.Second_Name, 15 ,stdin);
	
    
   
	printf("enter student ID : ");
	fscanf(f,"%d",&sentence.ID);
	printf("enter student GPA : ");
	fscanf(f,"%f",&sentence.GPA);
	printf("enter math degree ");
	fscanf(f,"%f",&(ptr->head->Digree->MATH));
	printf("enter PYSICS degree ");
	fscanf(f,"%f",&(ptr->head->Digree->PYSICS));
	printf("enter communication degree ");
	fscanf(f,"%f",&(ptr->head->Digree->communication));
	printf("enter mobile degree ");
	fscanf(f,"%f",&(ptr->head->Digree->mobile));
	fprintf(f, "%s %s", sentence.First_Name,sentence.Second_Name);
	fprintf(f, "%d %f",sentence.ID, sentence.GPA);
	fprintf(f, "%f %f %f %f", ptr->head->Digree->MATH,ptr->head->Digree->PYSICS,ptr->head->Digree->communication,ptr->head->Digree->mobile);
	
	ptr->head++;
	
	 
    //fclose(f);
    
	
}