#include<stdio.h>

int main(){

     int n=5;
    printf("enter a number whose table will be provided :");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    scanf("%d",&n); //to pause excutions
    return 0;
}