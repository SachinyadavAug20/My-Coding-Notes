#include <stdio.h>

int main()
{
    int i = 2;
    float i1 = 2;
    char i2 = '2';
    int *j = &i;    // int pointer
    float *k = &i1; // float pointer
    char *l = &i2;  // char pointer
    printf("the address of %d in int pointer is %d,in float pointer is %f and in char pointer is %c", i, j, k, l);
    return 0;
}