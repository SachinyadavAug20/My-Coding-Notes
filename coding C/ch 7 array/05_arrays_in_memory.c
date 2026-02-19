#include <stdio.h>

int main()
{

    int marks[3] = {1, 2, 3}; // initialization while delcaration
    float cgpa[] = {8.8, 6.9, 3.9, 4.8, 5.9, 6.5, 7.8, 8.5, 9.9};

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("the marks at index %d is %d\n", i, marks[i]);
    // }
    for (int i = 0; i < 9; i++)
    {
        printf("the address at index %d is %u\n", i, &cgpa[i]);  //see memeory location of array is continious
    }
    return 0;
}