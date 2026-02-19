#include<stdio.h>

int main(){
    int n=8,sum=0;
    for (int i = 1; i <=10; i++)
    {
        sum=sum+(n*i);
    }
    printf("sum of multiplication tablem of %d is %d",n,sum);  // answer wwill be 440
    
    return 0;
}