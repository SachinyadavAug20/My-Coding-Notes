#include <iostream>
#include <memory>
class tyre
{
public:
    void to_repair() {}
};
class car
{
private:
    std::shared_ptr<tyre> wheel1;

public:
    car()
    {
        wheel1 = getwheel1();
    }
    std::shared_ptr<tyre> getwheel1()
    {
        return wheel1;
    }
};
void f1()
{
    std::shared_ptr<int> p1;
    p1.reset(new int(6));
    std::shared_ptr<int> p2(new int(9));
    std::cout << p1.get() << "\n";
    std::cout << p2.get() << "\n";
    p1 = p2; // now bot point to 9
    // p2=move(p1);//same work as in unique_ptr
    std::cout << p1.use_count() << "\n";
    p2.reset();
    std::cout << p1.use_count() << "\n";
    std::cout << p2.use_count() << "\n";
    std::cout << *p1 << "\n";
    std::cout << p1.get() << "\n";
    std::cout << p2.get() << "\n";
}
int main()
{
    // f1();
    car car1;
    std::shared_ptr<tyre> w1 = car1.getwheel1();
    std::cout<<w1.use_count()<<'\n';
    return 0;
}