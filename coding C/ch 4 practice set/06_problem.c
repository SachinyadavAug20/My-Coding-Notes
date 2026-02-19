#include <stdio.h>

int main()
{
    // doing same as in 05_problem but with while and do while loop
    int n, i = 0;
    int result = 0;
    printf("enter a number whose sum of n natural number will be provided :");
    scanf("%d", &n);
    // while loop
    while (i <= n)
    {
        result += i;
        i++;
    }
    printf("the sum of first %d natural numbers is %d\n", n, result);
    scanf("%d", &n);

    // doing same with do while
    n, i = 0;
    result = 0;
    printf("enter a number whose sum of n natural number will be provided :");
    scanf("%d", &n);
    do
    {
        result += i;
        i++;
        
    } while (i <= n);
  printf("the sum of first %d natural numbers is %d\n", n, result);
    scanf("%d", &n);

    return 0;
}