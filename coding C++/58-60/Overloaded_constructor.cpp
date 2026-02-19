#include <iostream>
class pizza
{
public:
    std::string topping1;
    std::string topping2;
    std::string topping3;
    pizza()
    {
        topping1 = "plain";
        topping2 = "cheess";
        topping3 = "pizza";
    }
    pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    pizza(std::string topping1, std::string topping2, std::string topping3)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
        this->topping3 = topping3;
    }
    void display_topings()
    {
        std::cout << topping1 << " " << topping2 << ' ' << topping3 << '\n';
    }
};
int main()
{
    pizza p1("peperoni");
    p1.display_topings();
    pizza p2("peperoni", "icecream");
    p2.display_topings();
    pizza p3("peperoni", "icecream", "omaga");
    p3.display_topings();
    pizza p4;//if no argument no need for bractices ()
    p4.display_topings();
    return 0;
}