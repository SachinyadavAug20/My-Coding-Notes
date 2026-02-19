#include <iostream>
void happy_birthday(std::string,int);
int main()
{
    std::string name = "sachin";
    int age=92;
    happy_birthday(name,age);
    happy_birthday(name,age);
    happy_birthday(name,age);
    return 0;
}
void happy_birthday(std::string birthday_person,int birthday_age)
{
    std::cout << "Happy birthday to " << birthday_person << "\n";
    std::cout << "Happy birthday to " << birthday_person << "\n";
    std::cout << "Happy birthday dear " << birthday_person << "\n";
    std::cout << "Happy birthday to " << birthday_person << "\n\n";
    std::cout << "you are " << birthday_age <<" years old!"<< "\n";
}
