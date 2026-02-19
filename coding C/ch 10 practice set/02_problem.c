#include<stdio.h>

int main(){
    int n;
    FILE* table_file=fopen("table.txt","w");
    printf("enter the number whose table is to printed on file table.txt :");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        fprintf(table_file,"%d X %d = %d\n",n,i+1,n*(i+1));
    }
    //works
    // main();
    // printf("file will be reset after a new table is requisted\n");
    
    return 0;
}