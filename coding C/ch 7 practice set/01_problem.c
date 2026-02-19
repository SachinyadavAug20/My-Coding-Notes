#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *ptr = arr;      //it is same as int *ptr = &arr[0]; 
    printf("the value at %u is %d\n",ptr, *ptr);
    printf("the value at %u is %d\n",(ptr+2), *(ptr + 2));
    //verified

    return 0;
}