#include <stdio.h>

int main()
{
    float tax;
    float income;
    printf("Enter your income :");
    scanf("%f", &income);
    if (income > 250000 && income <= 500000)
    {
        printf("You are in 5 percent tax slab\n");
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("You are in 20 percent tax slab\n");
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else if (income > 1000000)
    {
        printf("You are in 30 percent tax slab\n");
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    else
    {
        printf("You are in no tax i.e 0 percent slaab\n");
    }

    printf("total tax you need to pay is %.2f\n", tax);
    scanf("%f", &income); // to stop code execution
    return 0;
}