
#include<stdio.h>
#include<string.h>
struct Id
{
    char name[30];
    int code;
    float pay;
    char* address[150];
};

int main(){
    struct Id sachin,sunny;
    // sachin.name="sachin";   X X X X X X X X X
    strcpy(sachin.name,"sachin");
    sachin.code=100;
    sachin.pay=55.91;
    strcpy(sunny.name,"sunny");
    // sunny.name="sunny";       X X X X X X X X X X X X X 
    
    printf("Id details :\nname :%s\ncode :%d\npay :%.2f\n",sachin.name,sachin.code,sachin.pay);
    
    return 0;
}