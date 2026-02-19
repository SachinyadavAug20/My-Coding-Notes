#include <stdio.h>

int main()
{
    // repeating 8 using while loop
    int product = 1;
    int n = 8; // can take as user input 8!=8X7X6X5X4X3X2X1=40320
    int i = 1;
    //BY USING WHILE LOOP 
    // while (i <= n)
    // {
    //     product *= i;
    //     i++;
    // }

    //BY using do while loop
    do
    {
        product*=i;
        i++;
    } while (i<=n);
    

    printf("the factorial of %d! is %d", n, product); // correct
    return 0;
}