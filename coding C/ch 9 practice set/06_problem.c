#include<stdio.h>
typedef struct complex_number
{
    int real;
    int imaginary;
}complex_number;
void display_complex_number(complex_number z)
{
    printf("\nComplex number = %d + %di\n",z.real,z.imaginary);
}

int main(){

    complex_number Z[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter %dth complex number(e.g :1 2 <===> 1 + 2i)\n",i+1);
        scanf("%d %d",&Z[i].real,&Z[i].imaginary);
    }
    for (int i = 0; i < 5; i++)
    {
        
        display_complex_number(Z[i]);
    }
    
    main();
    return 0;
}