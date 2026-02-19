#include <iostream>
class animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "animal is eatting\n";
    }
    void sleep()
    {
        std::cout << "animal is sleeping\n";
    }
    void walk()
    {
        std::cout << "animal is walking\n";
    }
};
class dog : public animal // inheritance
{
public:
    bool tamed;
    void barking()
    {
        std::cout << "bo bo bo !\n";
    }
};
class cat : public animal // inheritance
{
public:
    bool petted;
    void mewing()
    {
        std::cout << "meow meow !\n";
    }
};

int main()
{
    dog janni;
    std::cout<<janni.alive<<'\n';
    janni.walk();
    janni.eat();
    janni.barking();
    janni.sleep();
    
    cat anni;
    std::cout<<anni.alive<<'\n';
    anni.walk();
    anni.eat();
    anni.mewing();
    anni.sleep();
    

    return 0;
}