#include <stdio.h>

int main()
{
    float a = 10;
    float b = 30;
    float c = 40;

    printf("the value of a is %f, b is %f,and c is %f\n", a, b, c);
    printf("the value of a*b/c is %f\nthe value of 3*a+4*b-c is %f\nthe value of 3*(a+4*b-c) is %f", a * b / c, 3 * a + 4 * b - c, 3 * (a + 4 * b - c));
    return 0;
}