#include <iostream>

int main()
{
    int num;
    std::cout << "Enter a number :";
    std::cin >> num;
    num%2==0?std::cout<<"number is even":std::cout<<"number is odd";
    return 0;
}