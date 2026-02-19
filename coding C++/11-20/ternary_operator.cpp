#include <iostream>

int main()
{
    int marks;
    std::cout << "Enter your marks :";
    std::cin >> marks;
    // if(marks>=60){std::cout<<"you passed!";}
    // else{std::cout<<"you failed!";}
    // OR WAY
    marks >= 60 ? std::cout << "you passed!" : std::cout << "you failed!";
    return 0;
}