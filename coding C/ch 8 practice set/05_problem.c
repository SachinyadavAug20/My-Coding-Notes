#include <stdio.h>
#include <string.h>
void strcopy(char[], char[]); // takee a string and a constant string
void strcopy(char target[], char source[])
{
    // int j=0;
    // for (int i = 0; i!='\0'; i++)
    // {
    //     j++;
    //     b[i]=a[i];
    // }
    // b[j+1]='\0';

    // int j=0;
    for (int i = 0; i<=strlen(source); i++)
    {
        // j++;
        target[i]=source[i];
    }
    // target[]='\0';


    // target=source;
}
int main()
{
    char target[10];
    char source[] = "sachin";
    strcopy(target, source);
    printf("%s %s", target,source);
    return 0;
}