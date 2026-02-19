#include<iostream>
void showinfo(std::string name)
{
    std::cout<<"my name is "<<name<<'\n';
}
void showinfo(int age)
{
    std::cout<<"my age is "<<age<<'\n';
}
void showinfo(double salary)
{
    std::cout<<"my salary is "<<salary<<'\n'<<std::endl;
}
int main(){
    showinfo(93);
    showinfo("suuny");
    showinfo(73.3);
    return 0;
}