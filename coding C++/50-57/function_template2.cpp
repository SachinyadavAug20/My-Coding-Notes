#include <iostream>
template <typename T,typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}
int main()
{
    //comparing 2 data of same type 
    std::cout << "max :" << max(9, 5) << '\n';
    std::cout << "max :" << max(9.6, 9.5) << '\n';
    std::cout << "max :" << max('9', '5') << '\n';
    std::cout << "max :" << max(true, false) << '\n';//as true is 1
    std::cout << "max :" << max('B', 'A') << "\n\n";//compare by ASCLL table
    //comparing 2 data of different types 
    std::cout << "max :" << max(9.6, 9) << '\n';//int and double mix
    std::cout << "max :" << max('9', 9.76) << '\n';//char and double mix it use ascii value
    std::cout << "max :" << max(' ', 9) << '\n';//char and int mix
    return 0;
}