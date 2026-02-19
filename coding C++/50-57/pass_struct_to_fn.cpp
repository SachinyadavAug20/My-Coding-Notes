#include <iostream>
struct Car
{
    std::string brand;
    std::string model;
    int year;
    std::string colour;
};

void paint_car(Car &c,std::string colour);
void display_car_by_value(Car);
void display_car(Car &c);
int main()
{
    Car car1;
    Car car2;
    car1 = {"BMW", "Mustang", 1976, "Black"};
    car2 = {"Mercedece", "Benz", 1989, "White"};
    // RE=eference byvalue get different adderess
    std::cout << "Name :" << (int)&car1.brand << " " << (int)&car1.model << '\n';
    std::cout << "year :" << (int)&car1.year << '\n';
    std::cout << "colour :" << car1.colour << '\n';
    display_car_by_value(car1);
    paint_car(car1,"Blue");
    display_car_by_value(car1);
    std::cout << "\n\n";

    // By addreess gets same address
    std::cout << "Name :" << (int)&car2.brand << " " << (int)&car2.model << '\n';
    std::cout << "year :" << car2.year << '\n';//old year
    std::cout << "colour :" << car2.colour << '\n';
    display_car(car2);//this function can modify year to latest
    paint_car(car2,"Red");
    std::cout << "Name :" << (int)&car2.brand << " " << (int)&car2.model << '\n';
    std::cout << "year :" << car2.year << '\n';
    std::cout << "colour :" << car2.colour << '\n';
    return 0;
}
void display_car_by_value(Car c)
{
    std::cout << "Name :" << (int)&c.brand << " " << (int)&c.model << '\n';
    std::cout << "year :" << (int)&c.year << '\n';
    std::cout << "colour :" << c.colour << '\n';
}
void display_car(Car &c)
{
    // make it latest
    c.year=2025;
    std::cout << "Name :" << (int)&c.brand << " " << (int)&c.model << '\n';
    std::cout << "year :" << c.year << '\n';
    std::cout << "colour :" << c.colour << '\n';

}
void paint_car(Car &c,std::string colour)
{
    c.colour=colour;
}
