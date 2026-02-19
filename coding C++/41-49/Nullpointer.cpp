#include <iostream>

int main()
{
    // int *pointer;//not good practice
    int *pointer = nullptr; // good practice
    if (pointer == nullptr)
    {
        std::cout << "address was not assigned\n";
        // std::cout << *pointer << '\n';
    }
    else
    {
        std::cout << "address was assigned\n";
         std::cout << *pointer << '\n';
    }
    int x = 132;
    pointer = &x;
    if (pointer == nullptr)
    {
        std::cout << "address was not assigned\n";
        //  std::cout << *pointer << '\n';
    }
    else
    {
        std::cout << "address was assigned\n";
         std::cout << *pointer << '\n';
    }

    return 0;
}