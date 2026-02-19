#include<stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};
void display_employee_detail(struct employee );
void display_employee_detail(struct employee e )
{
    printf("employye details\n");
    printf("name :%s\ncode :%d\nsalary :%f\n\n",e.name,e.code,e.salary);
}

int main(){
    struct employee harry={554,"hari",18.1};
    struct employee thodi={524,"sunny",1.1};
    display_employee_detail(harry);
    display_employee_detail(thodi);
    
    return 0;
}