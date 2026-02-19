#include <stdio.h>

int main()
{
    printf("Convert celcius to farenheit \n");
    float celcius;
    printf("Enter temperature in celcius :");
    scanf("%f", &celcius);
    printf("\ntemperature in farenheit is %f", (celcius *(9.0/5.0)) + 32); // farenheit = celcius*1.8 + 32
    scanf("%f", &celcius);
    return 0;
}