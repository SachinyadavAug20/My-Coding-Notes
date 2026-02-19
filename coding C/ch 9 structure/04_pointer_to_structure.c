#include <stdio.h>
struct employee
{
    int code;
    char name[30];
    float pay;
    char address[150];
};
int main()
{
    struct employee e1;
    e1.code = 35;
    e1.pay=17;
    struct employee *ptr;
    ptr=&e1;  //e1 full structure location of 4+30+4+150=188 bytes
    printf("%d\n",(*ptr).code);//another way for same result
    printf("%d\n",ptr->code);//another way for same result
    printf("%.3f",ptr->pay);
    
    return 0;
}