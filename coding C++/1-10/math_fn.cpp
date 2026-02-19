#include<iostream>
#include<cmath>

int main(){
    double x=2,y=10,z=3.19;
    std::cout<<std::max(x,y)<<'\n';
    std::cout<<std::min(x,y)<<'\n';
    std::cout<<std::pow(x,y)<<'\n';
    std::cout<<std::sqrt(x*x*y*y)<<'\n';
    std::cout<<std::abs(-7)<<'\n';
    std::cout<<std::round(z)<<'\n';
    std::cout<<std::ceil(z)<<'\n';
    std::cout<<std::floor(z)<<'\n';
    return 0;
}