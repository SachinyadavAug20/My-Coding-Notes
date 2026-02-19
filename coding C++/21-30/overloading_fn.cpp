#include <iostream>
void make_pizza();
void make_pizza(std::string);
void make_pizza(std::string, std::string);
int main()
{
    make_pizza();
    make_pizza("chili");
    make_pizza("chili", "starch");
    make_pizza("chili", "mushrooom");
    return 0;
}
void make_pizza()
{
    std::cout << "This is your pizza!\n";
}
void make_pizza(std::string topping1)
{
    std::cout << "This is your " << topping1 << " pizza!\n";
}
void make_pizza(std::string topping1, std::string topping2)
{
    std::cout << "This is your " << topping1 << " & " << topping2 << " pizza!\n";
}