#include <iostream>
int walk(int steps);
int i=1;
int main()
{
    int steps;
    std::cout<<"enter no of steps to walk :";
    std::cin>>steps;
walk(steps);
    return 0;
}
int walk(int steps)
{
    if(steps==0)
    {
        // completed walking
        std::cout<<"completed walking!!"<<'\n';
        return 0;
    }
    
    std::cout<<"walking "<<i<<"th step"<<'\n';
    i++;
    walk(steps-1);
}