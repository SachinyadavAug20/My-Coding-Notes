#include<stdio.h>

int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("the square of %d is %d\n",i,i*i);
    }
    
     scanf("%d",&n); //this is to pause the flow of code
    return 0;
}