#include<stdio.h>
#include<stdlib.h>


int main(){
    int n;
     scanf("%d",&n);
    // int array[n]; //not allowed in c  ====>solution is dynamic memory allocation 
    float*ptr=(float*)malloc(n*sizeof(float));
    ptr[0]=78.2;
    ptr[1]=78.3;
    printf("%f %f",ptr[0],ptr[1]);
    return 0;
}