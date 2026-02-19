#include <iostream>
class Human
{
public:
    std::string name="Jack";
    std::string occuption="President";
    int age=75; // attributes of humans; have some deafults 

    void eat()
    {
        std::cout << name << " is eating\n";
    }
    void drink()
    {
        std::cout << name << " is drinking\n";
    }
    void sleep()
    {
        std::cout << name << " is sleeping\n";
    }
    void work()
    {
        std::cout << name << " is working as " << occuption << "\n";
    }
    void birthday()
    {
        std::cout << name << " is now " << age << " years old" << "\n";
    }
};
int main()
{
    Human human1= {"harry", "yter", 23};
    Human human2={"Rick","scientist",75};
    human1.birthday();
    human1.age = 24;
    human1.sleep();
    human1.work();
    human1.birthday();

    human2.sleep();
    human2.work();
    human2.birthday();
    return 0;
}