#include <stdio.h>
float average(float,float,float);

float average(float a,float b,float c)
{
    float avg=(a+b+c)/3;
    return avg;
}
float main()
{
    float num1=5,num2=7,num3=4;//can take as user input
    printf("the average of %.2f, %.2f and %.2f is %.2f (i.e %.2f+%.2f+%.2f/3=%.2f)",num1,num2,num3,average(num1,num2,num3),num1,num2,num3,average(num1,num2,num3));
    return 0;
}