#include <stdio.h>
int* sum(int *, int *);
float* avg(int *, int *);
int* sum(int *a, int *b)
{

    int s = *a + *b;
    printf("the sum of %d and %d is %d\n", *a, *b, s);
    int *ptr = &s;
    return ptr;
}
float* avg(int *c, int *d)
{
    float z = (*c + *d) / 2.0;
    printf("the average of %d and %d is %f\n", *c, *d, z);
 float *ptr = &z;
    return ptr;
}
int main()
{
    int x = 10, y = 20;
    sum(&x, &y);
    avg(&x, &y);
    printf("the address of sum is %u\n", sum(&x, &y));
    printf("the address of avg is %u\n", avg(&x, &y)); 
    //notice the address of sum and address of average is same thus proving
    // after the function finished excution the memory location is distroyed/vaccant forother use
    return 0;
}