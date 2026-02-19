#include<stdio.h>

int main(){
    // 0!=1 by defination
    // n!=1X2X3X4.......Xn
    int product =1;
    int n=0;  //can take as user input 8!=8X7X6X5X4X3X2X1=40320
    printf("enter a to finnnd its factorial :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        product=product*i;  //OR product *=i
    }
    printf("the factorial of %d! is %d",n,product);  //correct
    scanf("%d",&n);
    return 0;
}