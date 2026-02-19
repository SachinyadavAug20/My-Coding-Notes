#include <stdio.h>

int main()
{
    printf("Enter the size of star pyramid :");
    int a = 3;
    scanf("%d",& a);
    //this for loop prints lines of stares
    for (int i = 0; i < a; i++)
    {
        // if i=0 ----> *\n          1
        // if i=2 ----> ***\n        3  no_of_stars = (2i+1) stars are printed
        // if i=3 ----> *****\n      5
        // if i=4 ----> ******\n     7   odd number pattern

        //this for loop prints 2i+1 stares in ith line
        for (int j = 0; j < (2 *i) + 1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    main(); 
    return 0;
}