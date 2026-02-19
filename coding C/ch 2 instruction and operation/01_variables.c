#include <stdio.h>

int main()
{
    int a = 10, b = 1, c = 2, d = 53, r = 2; // delared a,b,c,d,and r integer with a
    // int b=2; is invalid buz it is already defined
    int i = 10; // delared i as an integer and assigned it a value of 10
    // %d is called as formate specifer
    // %d is for integer, %f is for flost and %c is for char
    int j = i;
    i = a + b + c + d + r;
    printf("value of i is %d and j is %d \n", i, j);
    printf("value of a is %d and b is %d \n", a, b);
    printf("value of c is %d and d is %d \n", c, d);
    return 0;
}