#include<stdio.h>
typedef struct complex_number
{
    int real;
    int imaginary;
}complex_number;
void display_complex_number(complex_number z)
{
    printf("Complex number = %d + %di",z.real,z.imaginary);
}

int main(){
    complex_number A={1,3};
    display_complex_number(A);
    return 0;
}