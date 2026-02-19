#include <stdio.h>
//function prototype
int sum(int, int);

//function defination
int sum(int a, int b)
{
    int sum = a + b;
    // printf("the value of a is %d, b is %d and sum is %d\n",a,b,sum);
    return sum;
}

int main()
{
    // repeated this same logic again and again of addition of two numbers
    // by this readablity, mistakes and messed up code
    int a = 1;
    int b = 2;
    printf("the sum is %d\n", sum(a, b));
    //    sum(a,b);   //used same logic again by 1 line

    int a1 = 3;
    int b1 = 4;
    printf("the sum is %d\n", sum(a1, b1)); // funtion return value used
    // sum(a1,b1);   // function called

    int a2 = 6;
    int b2 = 9;
    printf("the sum is %d\n", sum(a2, b2));
    // sum(a2,b2);

    return 0;
}