#include <iostream>

int main()
{
    std::cout<<"\n************** CALCULATOR **************\n"<<std::endl;
    
    char operation;
    double a, b;
    std::cout << "enter first number(a) :";
    std::cin >> a;
    std::cout << "enter which operation(+,-,*,/,%) to perform :";
    std::cin >> operation;
    std::cout << "enter second number(b) :";
    std::cin >> b;
    switch (operation)
    {
        case '+':
        std::cout << a << " " << operation << " " << b << " = " << a + b << '\n';
        break;
        case '-':
        std::cout << a << " " << operation << " " << b << " = " << a - b << '\n';
        break;
        case '*':
        std::cout << a << " " << operation << " " << b << " = " << a * b << '\n';
        break;
        case '/':
        std::cout << a << " " << operation << " " << b << " = " << a / b << '\n';
        break;
        case '%':
        std::cout << a << " " << operation << " " << b << " = " << (int)a % (int)b << '\n';
        break;
        
        default:
        std::cout << "enter a valid operation" << '\n';
        break;
    }
    std::cout<<'\n';
    std::cout<<"***************************************\n"<<std::endl;
    main();
    return 0;
}