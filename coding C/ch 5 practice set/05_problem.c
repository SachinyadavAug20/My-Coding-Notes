#include <stdio.h>

int main()
{
    int a = 4;
    // printf("%d  \n", a);
    // printf("%d  \n", ++a);
    // printf("%d \n", a++);
    printf("%d %d %d \n", a, ++a, a++);
    //6 6 4 if evaluation order right to left
    //4 5 5 if evaluation order left to right
    return 0;
}