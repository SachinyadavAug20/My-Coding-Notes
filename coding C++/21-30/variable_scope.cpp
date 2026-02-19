#include <iostream>
void printtt_num(int);
int mynum=9;//anywhere useable
int main()
{
    int mynum=1;
    std::cout << mynum<<'\n';
    // printtt_num();//not work as out of scope
    printtt_num(mynum);//mynum available everywhere
    printtt_num(::mynum);//using global version of mynum 
    return 0;
}
void printtt_num(int num)
{
    int mynum=2;//also local so no error 
    std::cout << mynum<<'\n';
    std::cout << num<<'\n';
    std::cout << mynum<<'\n';
}