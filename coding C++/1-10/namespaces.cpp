#include<iostream>
namespace home
{
    int x=1;
}
namespace outside
{
    int x=3;
}
namespace lab
{
    int x=7;
}

int main(){
    // int x=5;
    using namespace home;
    std::cout<<"local "<<x<<'\n';//by deafult it takes local x
    std::cout<<"home "<<home::x<<'\n';
    std::cout<<"outside "<<outside::x<<'\n';
    std::cout<<"lab "<<lab::x<<'\n';

    std::cout<<"lab "<<x<<'\n';
    return 0;
}