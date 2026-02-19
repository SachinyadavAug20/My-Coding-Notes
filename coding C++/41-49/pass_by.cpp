#include <iostream>
void swap(std::string &, std::string &);

int main()
{
    std::string cup1 = "karray sup";
    std::string cup2 = "spice sup";
    std::cout << "before swapping :\n"
              << "cup1==>" << cup1 << "\ncup2==>" << cup2 << " \n\n";
    swap(cup1,cup2);//by value unable to swap
    std::cout << "after swapping :\n"
              << "cup1==>" << cup1 << "\ncup2==>" << cup2 << " \n";

    return 0;
}
void swap(std::string &s1, std::string &s2)
{
    std::string temp;
    temp=s1;
    s1=s2;
    s2=temp;

}