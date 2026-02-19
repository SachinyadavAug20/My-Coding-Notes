#include <iostream>
void fizzbuss_by_me()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            std::cout << "fizzbuzz\n";
            continue;
        }
        else if (i % 3 == 0)
        {
            std::cout << "fizz\n";
            continue;
        }
        else if (i % 5 == 0)
        {
            std::cout << "buzz\n";
            continue;
        }
        std::cout << i << '\n';
    }
}
void fizz_buzz()
{
    for (int i = 1; i <= 100; i++)
    {
        std::string output = ""; // made a empty string
        if (i % 3 == 0)
        {
            output += "fizz";
        }
        if (i % 5 == 0)
        {
            output += "buzz";
        }
        if (output=="")
        {
            std::cout << i << "\n";
            continue;
        }
        std::cout << output << "\n";
    }
}
int main()
{
    fizz_buzz();

    return 0;
}