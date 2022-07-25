#ifndef Student_H_
#define Student_H_

#include"TYPE.h"

 struct Queue_Info {
	struct Student_Info* base;
	struct Student_Info* head;
	struct Student_Info* tail;
	u8 count;
	u8 lenth;
	
};

 struct Student_Info{
	
	u8 First_Name[10];
	u8 Second_Name[10];
	u32 ID;
	f32 GPA;
	
	struct Subjects *Digree;
};


 struct Subjects {
	f32 PYSICS;
	f32 MATH;
	f32 communication;
	f32 mobile;
	
};


typedef enum{
	FIFO_No_Erorr,
	FIFO_Full,
	FIFO_Empty,
	FIFO_NULL,
	FIFO_NOT_Empty,
	FIFO_Erorr
}FIFO_Status;




void IntiQu(struct Queue_Info *ASMemory,struct Student_Info* MemoryPtr,u8 u8Lenth);

void ADD_File(struct Queue_Info *ASMemory);

void find_ID(struct Student_Info *SID_student ,u8 u8Lenth);

void Print_voidData(struct Student_Info *SID_student);
void find_name(struct Student_Info *SID_student ,u8 u8Lenth);
void Delate_Student(struct Student_Info *SID_student,u8 u8Lenth);
void Updatavoid(struct Student_Info *SID_student ,u8 u8Lenth);
void printAll_data_auto();
void Store_Auto_data();
#endif 