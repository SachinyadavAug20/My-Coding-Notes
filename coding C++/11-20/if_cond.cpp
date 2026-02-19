#include <iostream>

int main()
{
    int age;
    std::cout << "Enter your age :";
    std::cin >> age;
    if (age >= 18 && age < 100)
    {
        std::cout << "welcome to the site!";
    }
    else if (age <= 0)
    {
        std::cout << "you haven't been born yet!";
        // std::cout << "you haven't been born yet!";
    }
    else if (age >= 100)
    {
        std::cout << "you are too old to enter this site!";
    }
    else
    {
        std::cout << "you are not old enough to enter!";
    }
    
    return 0;
}