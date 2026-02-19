#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    do
    {
        i++;
        printf("%d\n",i);
        
    } while (i<n);
    
    scanf("%d",&n);  //to pause the flow
    return 0;
}