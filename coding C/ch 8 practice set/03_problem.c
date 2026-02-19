#include <stdio.h>
int strlength(char[]);
int strlength(char a[])
{
    int length=0;
    for (int i = 0; a[i]!='\0'; i++) // count till end
    {
        // when reach string end as null character
         length++;
       
    }
    return length;
}
int main()
{
    char name[] = "sachin";
    printf("the length of string %s is %d", name, strlength(name));
    return 0;
}