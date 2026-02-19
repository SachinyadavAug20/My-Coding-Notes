#include <iostream>
template<typename T>
class stack
{
public:
    int size;
    int top = -1;
    T* members;
    int no_of_elements=0;
    stack(int size)
    {
        this->size = size;
        members=new T[size];
    }
    void push(T element)
    {
        if(top>=size-1)
        {
            std::cout<<"capacity overflow\n";
        }
        members[++top]=element;
        no_of_elements++;
    }
    T pop()
    {
        if(top<=-1)
        {
            std::cout<<"the stack is empty\n";

        }
        
        return members[top--];
    }
    ~stack()
    {
        delete[] members;
    }
};
template<typename T>
void print_stack(stack<T> s)
{
    for (int i = 0; i < s.no_of_elements; i++)
    {
        std::cout<<s.pop()<<" ";
    }
    std::cout<<"\n";
}
int main()
{
    stack<int> s(10);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    print_stack(s);
    
    
    return 0;
}