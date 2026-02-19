#include <stdio.h>
int change(int);

int main()
{
    
    int b=33;
    change(b);              //value of b won't change to 77 it will remain 33
    //buz b doesn't goes, only it's copy goes thus main b doesn't change  
    printf("the value of b is %d and return of function change is %d",b,change(b));  
    // int  a=3,b=5;
    // printf("the value a is %d, b is %d and sum is %d",a,b,sum(a,b));
    return 0;
}
int change(int a)
{
    a=77;  //won't be able to change the value of the user input
    return a;  
}