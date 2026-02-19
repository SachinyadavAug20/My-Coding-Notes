#include <stdio.h>
int main()
{
    printf("Area of rectange \n");
    int length = 20;
    int breath = 10;
    printf("\nArea of rectangle with length 20 and breath 10 is %d \n", length * breath);
    printf("\n Enter the length :");
    scanf("%d", &length);
    printf("\n Enter the breath :");
    scanf("%d", &breath);

    printf("\n Area of your rectagle is :%d \n", length * breath);
    scanf("%d", length); // only for getting a pause in .exe programm
    return 0;
}