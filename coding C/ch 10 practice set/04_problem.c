#include<stdio.h>

int main(){
    FILE* detail=fopen("empolyee_detail.txt","w");
    char name[25];
    int salary;
    for (int i = 0; i < 2; i++)
    {
        printf("enter name of empolyee :");
        scanf("%s", name);
        
        printf("enter salary :");
        scanf("%d",&salary);
        fprintf(detail,"%d. %s,%d\n",i+1,name,salary);
    }
    fclose(detail);
    //working
    return 0;
}