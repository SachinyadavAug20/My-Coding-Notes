#include <stdio.h>

int main()
{
    char name[] = {'s', 'a', 'c', 'h', 'i', 'n', '\0'}; //<=====>char name[]="sachin";
    char surname[] = "yadav";

    printf("the First chararacter is %c\n", name[0]);
    for (int i = 0; i < 6; i++)
    {
        printf("%c", name[i]);
    }
    printf(" ");

    for (int j = 0; j < 5; j++)
    {
        printf("%c", surname[j]);
    }

    return 0;
}