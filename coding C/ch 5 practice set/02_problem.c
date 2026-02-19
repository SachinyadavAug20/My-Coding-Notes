#include <stdio.h>
float To_fahrenheit(float celsius);

float To_fahrenheit(float celsius)
{
    return (celsius*(9.0/5)) + 32;   //9/5 is not equal to 9.0/5 as type conversion rules are applied btw float and int
}

int main()
{
    float celcius=10;
    printf("%.2f celcius = %.2f farenheit",celcius,To_fahrenheit(celcius));
     return 0;
}