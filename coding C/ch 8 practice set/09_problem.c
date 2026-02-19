#include <stdio.h>
#include <string.h>
void check_for_letter(char[], char);
void check_for_letter(char word[], char letter)
{
int indicator=0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == letter)
        {
            indicator++;
            printf("%c is present", letter);
            break;
        }
        
    }
    if(indicator<=0)
    {
        printf("%c is absent", letter);

    }
}
int main()
{
    char name[] = "sachin yadav";
    char ch = 'j';
    check_for_letter(name, ch);
    return 0;
}