#include<stdio.h>

int main(){
     int n,i=0;
     int result=0;
    printf("enter a number whose sum of n natural number will be provided :");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        result=result+i;  //OR can use result +=i           
    }
    
    printf("the sum of first %d natural numbers is %d\n",n,result);
    scanf("%d",&n);
    return 0;
}