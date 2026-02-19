#include <stdio.h>
#include <stdlib.h>
void table_printer(int *, int, int);
void table_printer(int *iptr, int tabl_of, int n)
{
    for (int i = 0; i < n; i++)
    {
        iptr[i] = tabl_of * (i + 1);
        printf("%d X %d = %d\n", tabl_of, i + 1, iptr[i]);
    }
}

int main()
{
    int n = 10;
    int *ptr = (int *)calloc(n, sizeof(int));
    printf("table of 7 till 10 times\n");
    table_printer(ptr, 7, n);

    printf("table of 7 till 15 times\n");
    n = 15;
    ptr = realloc(ptr, 15 * sizeof(int));
    table_printer(ptr, 7, n);

    return 0;
}