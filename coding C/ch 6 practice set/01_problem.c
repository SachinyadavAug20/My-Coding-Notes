#include<stdio.h>

int main(){
    int a=4;
    int* prt_of_a=&a;
    printf("the address of %d is %p",*(prt_of_a),&a);
    return 0;
}