#include <iostream>

int main()
{
    std::string name;
    int age;
    std::cout << "Enter your age :";
    std::cin >> age;

    std::cout << "Enter your full-name :";
    // std::cin >> name;//can't take spaces
    std::getline(std::cin >> std::ws, name); // it reads till a new line created

    std::cout << "your name is " << name << '\n';
    std::cout << "your age is " << age << " years" << '\n';
    return 0;
}