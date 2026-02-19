#include <stdio.h>
float attraction_by_earth(float);

float attraction_by_earth(float mass)
{
    return mass*9.8; //value of g is 9.8
}

int main()
{
float m =45;
printf("the attraction on m %.2fkg is %.2fN" ,m,attraction_by_earth(m));
    return 0;
}