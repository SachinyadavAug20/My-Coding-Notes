#include <iostream>

int main()
{
    std::string students[] = {"sachin", "harry", "api", "dsalgo"};
    std::cout << students[0] << ' ';
    std::cout << students[1] << ' ';
    std::cout << students[2] << ' ';
    std::cout << students[3] << " \n";
    // OR
    for (int i = 0; i < sizeof(students) / sizeof(std::string); i++) // sizeof(students)/sizeof(std::string) = size of array
    {

        std::cout << students[i] << ' ';
    }

    std::cout << '\n';
    char grades[] = {'A', 'b', 'C', 'D', 'E', 'F'};
    for (int i = 0; i < sizeof(grades) / sizeof(char); i++) // sizeof(students)/sizeof(std::string) = size of array
    {

        std::cout << grades[i] << ' ';
    }

    return 0;
}