#include <stdio.h>

int main()
{
    // READING A FILE CHARACTER BY CHARACTER
    char ch;
    FILE *fptr = fopen("sachin.txt", "r");
    while (1)
    {
        ch=fgetc(fptr);
        printf("%c", ch); // this will print all character by character
        
        if(ch == EOF)
        {
            break;
        }
    }

    return 0;
}