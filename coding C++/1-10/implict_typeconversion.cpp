#include <iostream>

int main()
{
    int a = 2.86;
    std::cout << a << std::endl;
    double b = 3.23;
    std::cout << b << std::endl;
    int c = (int)b; // convert double b to a innt and store in c
    std::cout << c << std::endl;

    char x = 100;
    std::cout << x << '\n'; // prints d as ascll value
    int y = (int)'s';
    std::cout << y << '\n';         // prints 115 as ascll value
    std::cout << (char)105 << '\n'; // prints i as ascll value
    std::cout << (char)106 << '\n'; // prints j as ascll value
    std::cout << (char)107 << '\n'; // prints k as ascll value

    int correct = 8;
    int question = 10;
    double score = (double)correct / question * 100;
    std::cout << "percentage is " << score << "%" << '\n';
    return 0;
}