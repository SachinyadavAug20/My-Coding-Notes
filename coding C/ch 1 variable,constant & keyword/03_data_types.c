#include <stdio.h>
int main()
{
    int a = 6;
    float m = 3.14;
    char b = 's';
    printf("Hello, world! %d /n", a);
    printf("Hello, world! %f /n", m);
    printf("Hello, world! %c /n", b);
    // sizeof different data types
    printf("size of int is %zu bytes, ", sizeof(int));
    printf("size of float is %zu bytes, and ", sizeof(float));
    printf("size of char is %zu bytes", sizeof(char));
    return 0;
}
