#include<stdio.h>

int main(){
    int a;
    printf("enter the number whose divisiblilty is to be checked by 97 :");
    scanf("%d",&a);
    int result =a%97;
    printf("if result is 0 then divisible by 97\n result is %d",result);
    scanf("%d",result); //just to pause follow
    return 0;
}