#include <iostream>
class shape
{
public:
    double surface_area;
    double volume;
    void show_detail()
    {
        std::cout << "surface area is " << surface_area <<" cm^2"<< '\n';
        std::cout << "volume is " << volume<<" cm^3" << '\n';
    }
};
class cube : public shape
{
public:
    double side;
    cube(double side)
    {
        this->side = side;
        this->surface_area = 6 * side * side;
        this->volume = side * side * side;
    }
};
class sphere : public shape
{
public:
    double radius;
    sphere(double radius)
    {
        this->radius = radius;
        this->surface_area = 4 * 3.14159 * radius * radius;
        this->volume = (4.0 / 3) * 3.14159 * radius * radius * radius;
    }
};
int main()
{
    cube c1(10);
    c1.show_detail();
    sphere s1(5);
    s1.show_detail();
    return 0;
}