#include <stdio.h>

int main()
{
    // https://www.ascii-code.com/
    //range of lowercase in ASCLL table is 97 to 122
    //range of uppercase in ASCLL table is 65 to 90
    char ch;
    printf("Enter a character :");
    scanf(" %c",&ch);
    printf("ASCLL value of %c is %d\n",ch,ch);
    if(ch>=97 && ch<=122)
    {
        printf("character is lowercase\n");
    }
    else if(ch>=65 && ch<=90)
    {
        printf("character is uppercase\n");
    }
    else{
        printf("invalid character\n");
    }

     scanf(" %c",&ch);//to stop program from closing
    return 0;
}