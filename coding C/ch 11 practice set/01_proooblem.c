#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=6;
    //WRONG
    // int arr[n];

    //RIGHT
    int* ptr=(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i]=i*5+2;//random rule made AGP
        printf("%d\n",ptr[i]);
    }
    
    return 0;
}