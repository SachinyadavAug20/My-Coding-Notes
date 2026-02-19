#include <stdio.h>
void swap(int *, int *);

void swap(int *x, int *y)
{
    int temp;        //remember   the example of 3 plates need to swap items of 2 plates with 1 hand (only 1 item in 1 plate at a time)
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 1, b = 2;
    printf("the value of a is %d and b is %d\n", a, b);
    swap(&a, &b);
    // after swapping
    printf("the value of a is %d and b is %d\n", a, b);

    return 0;
}