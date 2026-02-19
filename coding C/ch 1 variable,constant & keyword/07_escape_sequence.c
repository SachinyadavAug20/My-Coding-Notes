
#include <stdio.h>
int main()
{
    int a;
    char ch = 'a';
    ch = 'j';
    char space = '\n'; // represents a new line
    ch = '\n';         // this is called as the escape sequence character
    printf("how are you \n i am good");
    printf("%c how are you %c i am good %c", ch, ch, ch);
    printf("i am the \"boss\" of the world\n");
    printf("we can use \\n in c to leave a line\n");
    printf("to use \\ in the code use \\\\ for it\n");
    printf("to use \\\\ in the code use \\\\\\\\ for it\n");
    printf("to use \\\\\\ in the code use \\\\\\\\\\\\ for it\n");
    printf("to use \\\\\\\\ in the code use \\\\\\\\\\\\\\\\ for it\n");
    
}