#include<stdio.h>

int main(){
     int n=5;
    printf("enter a number whose table in inverse order will be provided :");
    scanf("%d",&n);
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    scanf("%d",&n); //to pause excutions
    return 0;
    return 0;
}