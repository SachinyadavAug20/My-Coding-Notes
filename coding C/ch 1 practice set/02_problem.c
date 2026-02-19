#include <stdio.h>

int main()
{
    printf("Area of a circle \n");
    float radius;
    printf("Enter the radius :");
    scanf("%f", &radius);
    printf("Area of circle is %f\n", 3.14 * radius * radius); // area of circle is pie*r*r

    printf("\nVolume of a cylinder \n");
    int radius2;
    printf("Enter the radius :");
    scanf("%d", &radius2);
    float height;
    printf("Enter the height :");
    scanf("%f", &height);
    printf("Volume of cylinder is %f", 3.14 * radius2 * radius2 * height); // volume of clinder is pie*r*r*h

    scanf("%f", &radius2); // to pause .exe file
    return 0;
}