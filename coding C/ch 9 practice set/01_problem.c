#include <stdio.h>
typedef struct vector_2D
{
    int i;
    int j;

} vect2D;

typedef struct vector_3D
{
    int i;
    int j;
    int k;
} vect3D;

int main()
{
    vect2D a = {1, 2};
    vect3D b = {1, 2, 3};
    printf("the vector a is %di + %dj\n", a.i, a.j);
    printf("the vector b is %di + %dj + %dk", b.i, b.j, b.k);

    return 0;
}