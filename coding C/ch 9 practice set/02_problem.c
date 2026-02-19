#include <stdio.h>
typedef struct vector_2D
{
    int i;
    int j;

} vect2D;
vect2D vector_sum(vect2D, vect2D);
vect2D vector_sum(vect2D v1, vect2D v2)
{
    vect2D c;
    c.i = v1.i + v2.i; // OR  c={v1.i + v2.i, v1.j + v2.j};
    c.j = v1.j + v2.j;
    return c;
}
int main()
{
    vect2D x = {1, 2};
    vect2D y = {3, 4};
    printf("the vector x is %di + %dj\n", x.i, x.j);
    printf("the vector y is %di + %dj\n", y.i, y.j);
    printf("the sum of x and y is %di + %dj\n", vector_sum(x, y).i, vector_sum(x, y).j);
    return 0;
}