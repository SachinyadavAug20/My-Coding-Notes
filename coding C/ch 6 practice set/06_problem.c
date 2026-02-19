#include <stdio.h>

int main()
{
    int i = 7;
    int *ptr_of_i = &i;
    int **ptr_to_ptr_of_i = &ptr_of_i;
    printf("the value of i is i %d\n", i);
    printf("the value of i is i %d\n", *ptr_of_i);
    printf("the value of i is i %d\n", **ptr_to_ptr_of_i);
    return 0;
}