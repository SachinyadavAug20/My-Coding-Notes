#include <iostream>

int main()
{
    bool hungry = true;
    // hungry ? std::cout << "you are hungry" : std::cout << "you are full";
    //OR WAY
    std::cout<<(hungry?"you are hungry":"you are full");
    return 0;
}