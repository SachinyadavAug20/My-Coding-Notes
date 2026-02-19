#include <iostream>

int main()
{
    std::cout << "\n******************** TEMPERATURE CONVERSION ********************\n";
    
    double temp;
    char unit;
    std::cout << "Enter temperature :";
    std::cin >> temp;
    std::cout << "Enter unit(c/f) :";
    std::cin >> unit;
    if (unit == 'c'||unit=='C')
    {
        std::cout << temp << " Celcius = " << (temp * 9.0 / 5) + 32 << " Fahrenheit\n";
    }
    else if(unit=='f'||unit=='F')
    {
        std::cout << temp << " Fahrenheit = " << (temp - 32)*5.0/9 << " Celcius\n";
        
    }
    else
    {
        std::cout<<"Invalid unit !\n";
    }
    std::cout << "****************************************************************\n";
    main();
    return 0;
}