#include<stdio.h>

int main(){
    int i=6;  //in the variable i is stored with value 6
    int* j=&i;  //in the variable j is the address of i
    int** k=&j;  // this is the pointer to pointer k
    printf("the value of i is %d\n",i);
    printf("the address of i is %d\n",j);
    printf("the address of address of i is %d\n",k);
    printf("the value of i is %d\n",*j);
    printf("the value of i is %d\n",**k);
    printf("the value of i is %d\n",*&*&*&i);
    printf("the value of i is %d\n",**(&j));

           // *&*&*&i ===> i
    return 0;
}