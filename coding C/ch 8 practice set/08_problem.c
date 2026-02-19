#include <stdio.h>
#include <string.h>
int count(char[], char);
int count(char word[], char letter)
{
    int count = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == letter)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char name[] = "sachin yadav";
    char ch = 'a';
    printf("the number of %c in %s is %d", ch, name, count(name, ch));
    return 0;
}