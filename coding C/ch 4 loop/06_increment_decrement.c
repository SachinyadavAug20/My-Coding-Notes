#include <stdio.h>

int main()
{
    int i = 5; // 5
    printf("the value of i is %d\n", i);
    i = i + 5; // 10
    printf("the value of i is %d\n", i);
    i++; // 11
    printf("the value of i is %d\n", i);
    ++i; // 12
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", i++);//printed i=12 the incremented to 13 (post increment operator)
    printf("the value of i is %d\n", ++i);//incremented i to 14 and then printed (pre increment operator)
    i+=5;                                 // i incremented by 5 thus i=19
    printf("the value of i is %d\n", i);  //19


    return 0;
}