#include <stdio.h>

int main()
{
    FILE *ptr = fopen("problem1.txt", "r");
    int num1,num2,num3;
    fscanf(ptr, "%d %d %d", &num1,&num2,&num3);
    printf("the value from file is %d\n", num1);
    printf("the value from file is %d\n", num2);
    printf("the value from file is %d\n", num3);

    fclose(ptr);
    return 0;
}