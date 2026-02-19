#include <iostream>

int main()
{
    int student = 20 + 8 - 5 * 4 / 5 - 56;//   20 + 8 - 5 * 4 / 5 - 56 = 20 + 8 - 20 / 5 - 56 = 20 + 8 - 4 - 56 = 28 --60 = -32;
    std::cout << student << std::endl;
    student += 2;
    std::cout << student << std::endl;
    student = student + 3;
    std::cout << student << std::endl;
    student++;
    std::cout << student << std::endl;
    student--;
    std::cout << student << std::endl;
    student -= 2;
    std::cout << student << std::endl;
    student = student - 3;
    std::cout << student << std::endl;
    student *= 2; // double
    std::cout << student << std::endl;
    student /= 3; // double
    std::cout << student << std::endl;
    student *= 3; // double
    std::cout << student << std::endl;
    int remainder = student % 5;
    std::cout << remainder << std::endl;

    return 0;
}