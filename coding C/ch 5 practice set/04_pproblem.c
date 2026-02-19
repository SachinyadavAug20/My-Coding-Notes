#include <stdio.h>
/*fibonacci series
F(0) = 0

F(1) = 1

F(n) = F(n - 1) + F(n - 2) for n > 1
ie 0,1,1,2,3,5,8,13,,21....
*/
int fibonacci_term(int);

int fibonacci_term(int n)
{
    // if (n == 0)
    // {
    //     return 0;                    // F(n) = F(n - 1) + F(n - 2) for n > 1
    // }
    // else if(n==1)
    // {
    //     return 1;
    // }
    if (n == 0 || n == 1)
    {
        return n;
    }
    int nth_term = fibonacci_term(n - 2) + fibonacci_term(n - 1);
    printf("the %dth term is %d\n", n, nth_term);
    return nth_term;
}

int main()
{ /*
     0th>>>0
     1th>>>1
     2nd>>>1
     3rd>>>2 ..........
     //0,1,1,2,3,5,8,13,,21....*/
    printf("which term of fibonacci series is need :");
    int term = 6;
    scanf("%d", &term);
    printf("%dth term of fibonacci series is %d\n", term, fibonacci_term((term - 1)));

    main();
    return 0;
}