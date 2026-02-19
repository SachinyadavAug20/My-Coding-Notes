#include <stdio.h>

int main()
{
    printf("Calculate simple interest \n");
    float princple, years, rate;

    printf("Enter the principle amount :");
    scanf("%f", &princple);
    printf("Enter the no. of years :");
    scanf("%f", &years);
    printf("Enter the rate of interest :");
    scanf("%f", &rate);

    printf("Your simple interest is :%f ", (rate * princple * years) / 100); // Simple Interest (SI)= rate*principle*no.of years/100
    scanf("%f", &years);                                                   // to pause code flow
    return 0;
}