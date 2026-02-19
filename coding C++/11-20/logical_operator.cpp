#include <iostream>

int main()
{
    double temp;
    bool sunny=true;
    std::cout << "Enter temperature :";
    std::cin >> temp;
    if (temp > 0 && temp < 30)
    {
        std::cout << "you are good\n";
    }
    else
    {
        std::cout << "you are bad\n";
    }
    //OR WAY
    if (temp <= 0 || temp >= 30)
    {
        std::cout << "you are bad\n";
    }
    else
    {
        std::cout << "you are good\n";
    }
    if(sunny){std::cout << "this is sunny day\n";}
    sunny=!sunny;
    if(!sunny){std::cout << "this is gloomy day\n";}
    return 0;
}