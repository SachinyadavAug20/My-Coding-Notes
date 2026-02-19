#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int *)malloc(5 * sizeof(int)); // allocation of 5 intergers in 20 bytes
    ptr=realloc(ptr,10*sizeof(int));//reallocated to store 10 integers in 40 byts
    return 0;
}