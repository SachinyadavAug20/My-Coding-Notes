#include <stdio.h>

int main()
{
    int a = 6;
    int b = 3;
    int c = a + b;
    printf("the value of a is %d and value of b is %d and sum is %d", a, b, c);
    // modulus operator is used to get remainded
    printf("\nthe remainder when a is divided by b is %d", a % b);
    // int d=a^b will not work in stdio.h preprossesor need math.h for exponationation as pow(a,b)
    return 0;
}