#include <iostream>

int main()
{
    char grade;
    std::cout << "enter your grade :";
    std::cin >> grade;
    switch (grade)
    {
    case 'A':
        std::cout << "You did great!" << '\n';
        break;

    case 'B':
        std::cout << "You did good" << '\n';
        break;
    case 'C':
        std::cout << "You did oKay" << '\n';
        break;
    case 'D':
        std::cout << "You did not good" << '\n';
        break;
    case 'E':
        std::cout << "You did just passed" << '\n';
        break;
    case 'F':
        std::cout << "You did failled" << '\n';
        break;
    default:
    std::cout<<"plz enter a letter grade as A,B,C,D,E and F"<<std::endl;
        break;
    }
    return 0;
}