#include <stdio.h>

int main()
{
    //POINTER ARITHEMATIC FOR INT POINTER
     int b=8;
     int*ptr_b=&b;
     printf("(interger pointer)the address of variable b is %u\n",&b);
     printf("the address of variable b is %u\n",ptr_b);
     ptr_b++;
     printf("the value of pointer is %u\n",ptr_b);          

    //POINTER ARITHEMATIC FOR CHAR POINTER
    char a = '8';
    char *ptr_a = &a;
    printf("(character pointer)the address of variable a is %u\n", &a);
    printf("the address of variable a is %u\n", ptr_a);
    ptr_a++;
    printf("the value of pointer is %u\n", ptr_a);
    return 0;
}