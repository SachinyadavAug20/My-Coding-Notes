#include<stdio.h>
void address_printer(int);
void address_printer(int a)
{
    printf("the address of i(in the function) is %u\n",&a);
}

int main(){
    int i=12;
    printf("the address of i(in the main) is %u\n",&i);
   address_printer(i);
    return 0;
}