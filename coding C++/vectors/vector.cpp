#include <iostream>
#include <vector>
template <typename T>
void Print_vector(std::vector<T> v) // will print any vector
{
    for (auto i : v)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}
int main()
{
    std::vector<int> myvector = {1, 2, 3, 4, 6, 5, 7};
    Print_vector(myvector);
    std::vector<int> v1(myvector); // OR v1=myvector
    Print_vector(v1);
    std::vector<std::string> color = {"green", "yellow", "red"};
    Print_vector(color);
    std::vector<int> grades(10, 0);
    grades = {1, 2, 34, 5}; // make 10 element intialized to 0
    Print_vector(grades);
    

    // std::vector<std::string>=v1;//error as must be of same type

    return 0;
}