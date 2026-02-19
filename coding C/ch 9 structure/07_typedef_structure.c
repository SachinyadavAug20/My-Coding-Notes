#include<stdio.h>
typedef struct employee
{
    char name[30];
    int code;
    float pay;
    char address[150];
}emp;

void display_employee_detail(struct employee e )
{
    printf("employye details\n");
    printf("name :%s\ncode :%d\nsalary :%.2f\naddress :%s\n\n",e.name,e.code,e.pay,e.address);
}

int main(){
    emp harry={"harry",334,7.6,"home"};
    emp* ptr=&harry;

    display_employee_detail(harry);
    display_employee_detail(*ptr);
    return 0;
}