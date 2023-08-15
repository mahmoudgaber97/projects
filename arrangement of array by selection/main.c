#include<stdio.h>

#include<stdio.h>

int * sort(int *arr,int size);
int* sort(int *arr,int size){
int max=0, element;
int temp;
int j=0,i;
for(i=0;i<size;i++){
    for(j=i ;j<size;j++)
        if(arr[j]>max)
        {

            max=arr[j];
            element=j;
        }
        temp=arr[element];
        arr[element]=arr[i];
        arr[i]=temp;

max=0;
}


  return arr;  
}

int main(){
    
int arrm[]={4,2,1,5,6,8,12,14,21,4,5,1,2};
int *ptr;
ptr=sort(arrm,sizeof(arrm)/4);
for(int i=0;i<sizeof(arrm)/4;i++)
printf("%d\n",*(ptr+i));
  
    
    return 0;
}