#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=6;
    //WRONG
    // int arr[n];

    //RIGHT
    int* ptr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
       printf("enter a number :");
       scanf("%d",&ptr[i]);
        // printf("%d\n",ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}