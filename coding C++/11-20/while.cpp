#include <iostream>

int main()
{
    std::string name;
    while (name.empty())
    {
        std::cout << "Enter your name :"; // force user to enter name
        std::getline(std::cin, name);
    };
    std::cout << "hello, " << name << '\n';

    while (1==1)
    {
        std::cout<<"Help!!!!!!! I am stuck in infinite while loop\n";
    }
    
    return 0;
}