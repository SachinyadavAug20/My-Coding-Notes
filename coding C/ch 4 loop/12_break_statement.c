#include <stdio.h>

int main()
{
    for (int i = 0; i <= 15; i++)
    {
        if (i == 5)
        {
            // break; //exite the loop now!!!
            continue; // exite this itteration now !!!  value of i=5 is skipped
        }
        printf("the value of i is %d\n", i);
    }
    printf("the loop is done \n");

    return 0;
}