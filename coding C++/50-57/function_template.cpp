#include <iostream>
int max(int, int);
double max(double, double);
char max(char, char);
int main()
{
    std::cout << "max :" << max(9, 5) << '\n';
    std::cout << "max :" << max(9.6, 9.5) << '\n';
    std::cout << "max :" << max('9', '5') << '\n';
    return 0;
}
int max(int x, int y)
{
    return (x > y) ?  x : y; //most consize
}
double max(double x, double y)
{
    return (x > y) ?  x : y; //most consize
}
char max(char x, char y)
{
    return (x > y) ?  x : y; //most consize
}