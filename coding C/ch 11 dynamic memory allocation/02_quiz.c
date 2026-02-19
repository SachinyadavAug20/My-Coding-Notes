#include<stdio.h>
#include<stdio.h>

int main(){
    int n=5;
    float*ptr=(float*)malloc(n*sizeof(float));
    ptr[0]=78.2;
    ptr[1]=78.3;
    ptr[2]=78.4;
    ptr[3]=78.5;
    ptr[4]=78.6;
    printf("%.2f %.2f %.2f %.2f %.2f",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    return 0;
}