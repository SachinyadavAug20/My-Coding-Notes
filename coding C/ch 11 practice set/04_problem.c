        #include<stdio.h>
        #include<stdlib.h>

int main(){
    int n=5;
    int* ptr=(int*)malloc(n*sizeof(int));
    printf("the array\n");
     for (int i = 0; i < n; i++)
    {
        ptr[i]=i*5+2;//random rule made AGP
        printf("%d\n",ptr[i]);
    }
    
    n=10;
    ptr=realloc(ptr,n*sizeof(int));
    printf("the array\n");
     for (int j = 0; j < n; j++)
    {
        ptr[j]=j*5+2;//random rule made AGP
        printf("%d\n",ptr[j]);
    }
    return 0;
}