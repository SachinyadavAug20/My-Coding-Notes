#include <iostream>

int main()
{
    std::string cars[4] = {"nano", "alto", "mustang", "maclaren"};
    cars[0] = "camry";
    cars[1] = "alttto";
    cars[2] = "operatoa";
    double price[4] = {199.99, 766.66, 927.2, 629.22};
    for (int i = 0; i < 4; i++)
    {
        std::cout << cars[i] << "==>";
        std::cout << &cars[i] << " @ $";
        std::cout << price[i] << " \n";
    }
    return 0;
}