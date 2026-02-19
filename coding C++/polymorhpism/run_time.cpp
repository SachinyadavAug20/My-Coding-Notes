#include<iostream>
class a{
    public:
   virtual void disp()
    {
        std::cout<<"its class a\n";//to overideable fn
    }
};
class B:public a{
public:
    void disp()
    {
        std::cout<<"its class B\n";
    }
};
int main(){
    B obj;
    obj.disp();//works, now local function of B called as it overridded the inherited fn of a
    obj.a::disp();//can call specifically the inherited fn of B
    a *ptr;
    ptr=&obj;//stored object of B in pointer of a
    // ptr->disp();//this is pointer of a fn thus will call diplay of a
    //to avid object of B oviridden by ptr of a make it virtual fn
    ptr->disp();//this is pointer of a fn thus will call diplay of b

    return 0;
}