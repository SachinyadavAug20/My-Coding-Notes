#include<stdio.h>
typedef struct vector_2D
{
    int i;
    int j;

} vect2D;
int main(){
    // vect2D a={1,2};
    //OR
    vect2D a;
    vect2D*ptr=&a;
    ptr->i=3;//OR (*ptr).i=3;
    ptr->j=7;//OR (*ptr).j=7;
    printf("the vector b is %di + %dj ", ptr->i, ptr->j);
    return 0;
}