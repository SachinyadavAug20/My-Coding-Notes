#include <iostream>
void printinfo(const std::string&,const int&);

int main()
{
    std::string name = "sachin";
    int age=92;
    printinfo(name, age);
    return 0;
}
void printinfo(const std::string &name,const int &age)
{
    // name=" ";//don't want this to happen
    // age=0;
std::cout<<"name :"<<name<<'\n';
std::cout<<"age :"<<age<<'\n';
}