#include <iostream>
class car
{
    public:
    std::string name = "vehical";
    std::string model = "V41";
    int year = 1999;
    std::string colour = "White";

    car(std::string name,std::string model,int model_year,std::string color)
    {
        this->name=name;
        this->model=model;
        year=model_year;
        colour=color;
        show_details();
    }
     void show_details()
    {
        std::cout << "This is " << name << " " << model << ", from " << year << " in " << colour << '\n';
    }
};
int main()
{
    car car1("Ford","Mustang",1867,"Black");
    car car2("Clevy","Corvat",2022,"Blue");
    car car2("BMW","corora",2022,"Blue");
    return 0;
}