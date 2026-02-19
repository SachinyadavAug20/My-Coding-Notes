#include <iostream>
class car
{
public:
    std::string name = "vehical";
    std::string model = "V41";
    int year = 1999;
    double speed = 0;
    double acceleration = 0;
    int run_time = 0;
    double location = 0;
    std::string color = "Black";

    void accelerate(int acc)
    {
        run_time++;
        acceleration = acc;
        run_time++;
        speed = speed + acceleration * run_time;                                // v=u+at
        location = speed * run_time + 0.5 * acceleration * run_time * run_time; // s=ut+(1/2)at^2
        std::cout << "time is " << run_time << " s,speed is " << speed << " m/s, current accleration is " << acceleration << " m/s^2 \n";
        run_time++;
    }
    void locat()
    {
        run_time++;
        std::cout << "current location is " << location << " m\n";
        run_time++;
    }
    void brake()
    {
        run_time++;
        acceleration = 0;
        speed = 0;
        std::cout << "time is " << run_time << " s,speed is " << speed << " m/s, current accleration is " << acceleration << " m/s^2 \n";
        run_time++;
    }
    void go_to(int time, int distance)
    {
        run_time += time;
        location += distance;
        speed = speed + acceleration * run_time;                                // v=u+at
        location = speed * run_time + 0.5 * acceleration * run_time * run_time; // s=ut+(1/2)at^2
        std::cout << "time is " << run_time << " s,speed is " << speed << " m/s, current accleration is " << acceleration << " m/s^2 \n";
        run_time++;
    }
    void park()
    {
        run_time++;
        acceleration = 0;
        speed = 0;
        std::cout << "car is parked\n";
    }
    void show_details()
    {
        std::cout << "this is " << name << " " << model << ", from " << year << " in " << color << '\n';
    }
};
int main()
{
    car car1;
    car1 = {"mercedice", "benz", 1975, 0, 0, 0, 0, "silver"};
    car1.show_details();
    car1.locat();
    car1.accelerate(9.81);
    car1.locat();
    car1.go_to(87, 900);
    car1.locat();
    car1.accelerate(9.81);
    car1.brake();
    car1.park();
    car1.locat();

    return 0;
}