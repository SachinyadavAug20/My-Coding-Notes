#include <stdio.h>
   void morning();   //function prototype
   void night();
   void evening();

void morning()     //function defination
{
    printf("Good morning\n");  //don`t make Good do good do what is asked don`t overwrite the examiner 
} 
void evening()             //function defination
{
    printf("Good evening\n");
}
void night()            //function defination
{
    printf("Good night\n");
}

int main()
{
    morning();      //function calling
    evening();
    night();
    return 0;
}