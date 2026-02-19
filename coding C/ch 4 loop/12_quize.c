#include <stdio.h>

int main()
{
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("the value of i is %d\n", i);
    }

     scanf("%d", &n);//to pause the excution

    return 0;
}