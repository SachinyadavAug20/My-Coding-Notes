#include <stdio.h>

int main()
{
    FILE *num1 = fopen("num.txt", "r");
    int number;
    fscanf(num1, "%d",&number);
    printf("%d\n",number);
    
    FILE *num2 = fopen("num.txt", "w");
    fprintf(num2, "%d", 2 * number);

    fclose(num1);
    fclose(num2);
    return 0;
}