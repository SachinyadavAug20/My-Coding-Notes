#include <iostream>

int main()
{
    std::string students[] = {"sachin", "harry", "api", "dsalgo","harilal"};
    for (int i = (sizeof(students) / sizeof(std::string)) - 1; i + 1; i--) // needed 3 paramenters
    {
        std::cout << students[i] << ' ';
    }
    std::cout << '\n';
    for (std::string student : students)
    {
        std::cout << student << ' ';
    }
    std::cout << '\n';
    char grades[] = {'A', 'b', 'C', 'D', 'E', 'F'};
    for(char grade :grades)
    {
        std::cout<<grade<<' ';
    }
    int marks[]={32,43,55,45,76,86,87,65,97,99};
    for(int mark:marks)
    {
        std::cout<<mark<<' ';
        
    }
    return 0;
}