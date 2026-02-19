#include <iostream>
#include <vector>
template <typename T>
void Print_vector(std::vector<T> v) // will print any vector
{
    // for (auto i : v)
    // {
    //     std::cout << i << " \n";
    // }
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << "\n";
}
template <typename U>
void compare_vectors(std::vector<U> v1, std::vector<U> v2)
{
    if (v1 == v2)
    {
        std::cout << "tow vectors are equal\n";
    }
    else
    {
        std::cout << "tow vectors are unequal\n";
    }
}
using namespace std;
int main()
{
    vector<double> v1;
    cout << "is this vector empty :" << v1.empty() << '\n';
    if (v1.empty())
    {
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i * 87 / 86);
        }
    }
    else
    {
        cout << "vector is fill";
    }
    v1.push_back(152);
    cout << "is this vector empty :" << v1.empty() << '\n';
    cout << "my vector has " << v1.size() << " elements\n";
    Print_vector(v1);
    vector<double> v2 = {76, 87, 98, 8};
    v2 = v1;
    compare_vectors(v1, v2);
    Print_vector(v2);
    v2 = {91, 42, 453, 45, 53, 637, 34, 24, 5, 4}; // not append it will replace
    Print_vector(v2);
    compare_vectors(v1, v2);
    return 0;
}