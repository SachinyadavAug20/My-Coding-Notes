#include <stdio.h>

int main()
{
    int i = 72;
    int k=7;
    int *j = &i;                                // j is pointing to i
    printf("the address of %d is %p\n", i, &i); // the address of 72 is 0061FF1C and address is changing
    printf("the address of %d is %p\n", i, j); // the address of 72 is 0061FF1C and address is changing
    printf("the address of %d is %p\n", k, &k); 
    printf("the address of %d is %u\n", i, &i); // the address of 72 is 6422300

    printf("the value at address %p is %d\n",&i,*(&i)); //*(&i)--->asking who is at address of i ===>answers is i 
    return 0;
}