#include <stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
//take inputs
    printf("Enter the detail of 3 emplyee\n");

    printf("Enter name :");
    scanf("%s", e1.name);
    // get(e1.name);
    printf("Enter code :");
    scanf("%d", &e1.code);
    printf("Enter salary :");
    scanf("%f",  &e1.salary);

    printf("Enter name :");
    scanf("%s", e2.name);
    // get(e2.name);
    printf("Enter code :");
    scanf("%d", &e2.code);
    printf("Enter salary :");
    scanf("%f", &e2.salary);

    printf("Enter name :");
    scanf("%s", e3.name);
    // get(e3.name);
    printf("Enter code :");
    scanf("%d", &e3.code);
    printf("Enter salary :");
    scanf("%f", &e3.salary);


    //prints out put
    printf("name :%s\ncode :%d\nsalary :%f\n",e1.name,e1.code,e1.salary);
    printf("name :%s\ncode :%d\nsalary :%f\n",e2.name,e2.code,e2.salary);
    printf("name :%s\ncode :%d\nsalary :%f\n",e3.name,e3.code,e3.salary);
    main();
    return 0;
}