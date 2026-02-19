#include <stdio.h>
int sum(int*, int*);
//sum function should try and change value of x and y 
int sum(int* a, int* b)
{
    // a=6;  //tried to change value of x
    *a=6;  //changing value of x  ====> value at a is changed to 6
    // buz copy of x and y is provided to a and b
    return *a + *b;
}
int main()
{
    int x = 1;
    int y = 2;
    printf("the sum of %d and %d is %d\n", x, y, sum(&x, &y));
    printf("the value of x is %d",x);

    return 0;
}