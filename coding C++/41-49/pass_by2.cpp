#include <iostream>
void swap(std::string &, std::string &);

int main()
{
    std::string cup1 = "karray sup";
    std::string cup2 = "spice sup";
    std::cout << "before swapping address :\n"
              << "cup1==>" << (int)&cup1 << "\ncup2==>" << (int)&cup2 << " \n\n";
    swap(cup1, cup2); // by value unable to swap
    std::cout << "after swapping address :\n"
              << "cup1==>" << (int)&cup1 << "\ncup2==>" << (int)&cup2 << " \n";

    return 0;
}
void swap(std::string &s1, std::string &s2)
{
    std::cout << "during swapping address :\n"
              << "cup1==>" << (int)&s1 << "\ncup2==>" << (int)&s2 << " \n\n";
    
}