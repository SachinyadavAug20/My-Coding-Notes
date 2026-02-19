#include<stdio.h>

int main(){
    printf("Enter the number :");
    int num;
    scanf("%d",&num);
    int table[10];
    //fill array with table of num
    for (int i = 0; i < 10; i++)
    {
        table[i]=num*(i+1);
    }
    //print array
    for (int i = 0; i < 10; i++)
    {
       printf("%d X %d = %d\n",num,i+1,table[i]);
       
       
    }
    main();
    return 0;
}