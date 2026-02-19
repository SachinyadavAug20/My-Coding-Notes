#include <iostream>
#include <memory>
void f1()
{
    int *p = new int(10);        // p stores addres of variable int storing 10 in it
    std::cout << (int)p << '\n'; // always different memory is allocated
    std::cout << *p << '\n';     // always different memory is allocated
    delete p;                    // deletes the value at address of p
    std::cout << (int)p << '\n';
    std::cout << *p << '\n';//gives garbage value as noting is on it
    std::cout << "\n\n";   
}
void f2()
{
    std::unique_ptr<int> p(new int(10));//calledd constructor of cclass unique ptr
    // p.reset();//now p stores null as ptr and frees the memory of 10 stored, now 10 is not stored

    //MOVE ownership
    std::unique_ptr<int> p2;
    // p2=p1;//copy assigine operator isimplicitly deleted
    p2=move(p);//now, p not storing ptr to 10 ,only p2 stores it

    if(p==NULL){
        p.reset(new int(18));//releases the old stored ptr then makes new to point at 18
    }
    std::cout << *p<< '\n';    
    std::cout << *p2 << '\n';   
    //when function ends the memory is aautomatically freed
    std::cout << "\n\n";   
}
int main()
{
    f1();
    f2();
    return 0;
}