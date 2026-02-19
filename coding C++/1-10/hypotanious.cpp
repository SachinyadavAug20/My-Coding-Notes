#include <iostream>
#include <cmath>

int main()
{
    int base, height;
    std::cout << "enter base :";
    std::cin >> base;
    std::cout << "enter height :";
    std::cin >> height;
    double hypotanous = sqrt(pow(base, 2) + pow(height, 2));
    std::cout << "the hypotanious is " << hypotanous << '\n';
    return 0;
}