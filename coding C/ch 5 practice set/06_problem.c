#include <stdio.h>
int sum_of_first_n_naturals(int);
int sum_of_first_n_naturals(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum_of_first_n_naturals(n - 1);
}
int main()
{
    int a = 10;
    printf("the sum of first %d natural numbers is %d", a, sum_of_first_n_naturals(a));
    return 0;
}