#include <iostream>
int main()
{
    int x = 6;
    int y;
    y = 10;
    std::cout << x << '\n';
    std::cout << y << std::endl;
    // int for whole numbers
    int age, year, day;
    age = 81;
    year = 2027;
    day = 2.7;
    std::cout << day; // prints only integer 2
    // double for numbers with decimal points
    double price = 999.99, cgpa = 9.1, temperature = 0.11;
    std::cout << price << '\n';
    std::cout << cgpa << '\n';
    std::cout << temperature << '\n';
    // char for single character
    char grade = 'A', initial = '8', currency = '$';
    std::cout << grade << std::endl
              << initial << '\n'
              << initial << '\n';
    // boolean for true OR false
    bool student = true, power = false, forsale = true;
    // string  is an object that represr=ent a sequence of character
    std::string name = "sachin";
    std::string day = "friday";
    std::string food = "pawww";
    std::string address = "12 down street, NYC";
    std::cout << "hello " << name << '\n'
              << "my food is " << food << '\n'
              << "today is " << day << '\n'
              << "i live at " << address << '\n';
}