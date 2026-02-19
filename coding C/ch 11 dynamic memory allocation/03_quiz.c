#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    float*ptr=(float*)calloc(n,sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("%u \n",&ptr[i]);
    }
    
    return 0;
}