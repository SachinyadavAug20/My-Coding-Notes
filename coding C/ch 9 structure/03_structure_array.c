#include <stdio.h>
struct employee
{
    char name[30];
    int code;
    float pay;
    char address[150];
};

int main()
{
    struct employee facebook[100]; // delarired a structure of employee
    struct employee harry={"harry",618,1,"home"};
    // facebook[4]={0};
    facebook[0].code = 192;
    facebook[1].code = 193;
    facebook[2].code = 194;
    printf("%s %d %.2f %s", harry.name, harry.code, harry.pay, harry.address);
    return 0;
}