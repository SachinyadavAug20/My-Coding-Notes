#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    printf("the value of a is %d and b is %d\n", a, b);
    printf("the value a and b is %d\n", a && b); // and
    printf("the value a or b is %d\n", a || b);  // or
    printf("the value not(a) is %d\n", !a);      // not a
    printf("the value not(b) is %d\n", !b);      // not b
    if (a == 1 && b == 1)
    {
        printf("both a and b are 1\n");
    }
    if (a)
    {
        if (b)
        {
            printf("both a and be are 1");
        }
    }

    return 0;
}