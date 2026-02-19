#include <iostream>
double area_of_square(double);
double volume_cube(double);
int main()
{
    double x = 10.26;
    std::cout << "the area of square of side " << x << " cm is " << area_of_square(x) << " cm^2\n";
    std::cout << "the volume of cube of side " << x << " cm is " << volume_cube(x) << " cm^3\n";
    return 0;
}
double area_of_square(double side)
{
    return side * side;
}
double volume_cube(double side)
{
    return side * side * side;
}