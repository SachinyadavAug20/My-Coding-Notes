#include <stdio.h>

int main()
{
    int no_of_divisors = 0;
    int n = 16; // can take as user input
    printf("enter number to check for prime :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n == 1 || n == 0)
        {
            no_of_divisors = 3;
        }
        else
        {
            if (n % i == 0 && n != 2)
            {
                no_of_divisors++;
            }

            if (no_of_divisors > 3)
            {
                break; // for efficient and power management
            }
        }
    }
    printf("the number %d has total %d divisor\n", n, no_of_divisors);
    if (no_of_divisors <= 2)
    {
        printf("the given number is prime\n"); // aas 2 divisor 1 and itself
    }
    else
    {
        printf("the given number is not prime\n");
    }

    scanf("%d", &n);
    return 0;
}