#include<stdio.h>
int sum(int,int);
int sum(int a,int b)
{
    a=6;// her sum function can't change the value of x and y
    // buz copy of x and y is provided to a and b
   return a+b;
}
int main(){
    int x=1,y=5;
    printf("the sum of %d and %d is %d",x,y,sum(x,y));
    printf("the value of x is %d",x);
    return 0;
}