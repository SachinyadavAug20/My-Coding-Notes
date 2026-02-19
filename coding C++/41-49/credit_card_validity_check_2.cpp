#include <iostream>
int getdigit(const int number);
int sumodddigits(const std::string cardnumber);
int sumevendigits(const std::string cardnumber);

int main()
{
    std::string cardnumber;
    int result = 0;
    std::cout << "*************** CRIDIT CARD NUMBER VALIDITY CHECK  ***************\n";
    std::cout << "Enter the card number :";
    std::cin >> cardnumber;
    result = sumevendigits(cardnumber) + sumodddigits(cardnumber);
    if (result % 10 == 0)
    {
        std::cout << cardnumber << " Card is valid";
    }
    else
    {
        std::cout << cardnumber << " Card is invalid";
    }
    return 0;
}
int getdigit(const int number)
{
    // e.g :- 18 == 1 + 8 = 9
    return (number % 10) + ((number / 10) % 10);
}
int sumodddigits(const std::string cardnumber)
{
    int sum = 0;
    for (int i = cardnumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardnumber[i] - '0';
    }
    return sum;
}
int sumevendigits(const std::string cardnumber)
{
    int sum = 0;
    for (int i = cardnumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getdigit((cardnumber[i] - '0') * 2);
    }
    return sum;
}
