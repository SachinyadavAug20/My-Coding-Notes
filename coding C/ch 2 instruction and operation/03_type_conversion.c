#include <stdio.h>

int main()
{
    int a = 11;
    int b = 2;
    printf("the value of a is %d, b is %d and a/b is %d\n", a, b, a / b); // value will be 5 as rule of type conversion int and int is int

    float c = 11;
    int d = 2;
    printf("\nthe value of c is %f, d is %d and c/d is %f", c, d, c / d); // value will be 5.5 as rule of type conversion int and float is float
    return 0;
}
