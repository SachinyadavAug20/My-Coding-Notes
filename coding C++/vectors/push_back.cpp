#include <iostream>
#include <vector>
template <typename T>
void Print_vector(std::vector<T> v) // will print any vector
{
    for (auto i : v)
    {
        std::cout << i << " \n";
    }
    std::cout << "\n";
}
int main()
{
    std::vector<int> numbers;
    for (int i = 0; i < 100; i++)
    {
        numbers.push_back(i + 1);
    }
    numbers.push_back(107);
    Print_vector(numbers);

    std::string word;
    std::vector<std::string> mytext;
    while (std::cin >> word)
    {
        if (word == "end")
        {
            break;
        }
        mytext.push_back(word);//will store sentences word by word
    }
    Print_vector(mytext);

    return 0;
}