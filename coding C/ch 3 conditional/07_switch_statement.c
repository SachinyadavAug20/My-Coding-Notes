#include<stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    switch (num)
    {
    case 1:printf("number is 1\n");   break;
    case 2:printf("number is 2\n");   break;
    case 3:printf("number is 3\n");   break;
    case 4:printf("number is 4\n");   break;
    case 5:printf("number is 5\n");   break;
    case 6:printf("number is 6\n");   break;
    case 7:printf("number is 7\n");   break;
    case 8:printf("number is 8\n");   break;
    case 9:printf("number is 9\n");   break;
    case 10:printf("number is 10\n");   break;
   
    default:printf("number is greater than 10");
    }
    scanf("%d",&num); //just to stop program from clossing
    return 0;
}