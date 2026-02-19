#include<stdio.h>

int main(){
    int marks[4]={18,83,25,99};

    int* ptr =&marks[0]; //<=====> int*ptr=&marks
    for (int i = 0; i < 4; i++)
    {
        printf("the value at index %d is %d\n",i,marks[i]);
        printf("the value at index %d is %d\n",i,*ptr);
        ptr++;
    }
    
    return 0;
}