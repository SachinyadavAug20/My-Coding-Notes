#include<stdio.h>

int main(){
    int marks[5];
for (int i = 0; i < 5; i++)
{
    printf("enter marks of student%d :",i+1);
    scanf("%d",&marks[i]);
}
printf("the marks of students are %d,%d,%d,%d and %d in order\n",marks[0],marks[1],marks[2],marks[3],marks[4]);
main();
    return 0;
}