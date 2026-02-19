#include<stdio.h>
#include<stdlib.h>
int random(int a)
{
    int num=rand()%(a+1);//gives random number btw 0 to a
    return num;
}
int function(int n)
{
 int i;
 if (n <= 0)
 {
 return 0;
 }
 else
 {
 i = random(n - 1);
 printf("this is %d\n",i);
 return function(i) + function(n - 1 - i);
 }
}

int main(){
    function(4);
    return 0;
}