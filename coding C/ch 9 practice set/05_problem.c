#include<stdio.h>
 struct complex_number
{
    int real;
    int imaginary;
};
void display_complex_number(struct complex_number z)
{
    printf("Complex number = %d + %di",z.real,z.imaginary);
}

int main(){
   struct complex_number A={1,3};
    display_complex_number(A);
    return 0;
}