#include <iostream>
int getdigit(const int);
int doubled_sum_of_even_R2L(const int);
int sum_of_odd_R2L(const int);
int main()
{
    //FIXME:
    //WRONG METHOD AS IT CONVERTS 0009 to 9 which breaks algorithum and is wrong
    int card_num1, card_num2, card_num3, card_num4;
    std::cout << "*************** CRIDIT CARD NUMBER VALIDITY CHECK  ***************\n";
    std::cout << "Enter the card number(format **** **** **** ****) :";
    std::cin >> card_num1 >> card_num2 >> card_num3 >> card_num4;
    std::cout << card_num1 << ' ' << card_num2 << " " << card_num3 << " " << card_num4 << " this, ";
    int validation_number = doubled_sum_of_even_R2L(card_num1) + sum_of_odd_R2L(card_num1) + doubled_sum_of_even_R2L(card_num2) + sum_of_odd_R2L(card_num2) + doubled_sum_of_even_R2L(card_num3) + sum_of_odd_R2L(card_num3) + doubled_sum_of_even_R2L(card_num4) + sum_of_odd_R2L(card_num4);
    if (validation_number % 10 == 0)
    {
        std::cout << "Card is valid\n";
    }
    else
    {
        std::cout << "Card is not valid";
    }

    return 0;
}
int doubled_sum_of_even_R2L(const int cn)
{
    int first_digit = (cn / 1000) * 2;
    int second_digit = ((cn / 10) % 10) * 2;
    if (first_digit >= 10)
    {
        first_digit = 2 * (first_digit / 10) + 2 * (first_digit % 10); // if 2 digit number then, break and add
    }
    else if (second_digit >= 10)
    {
        second_digit = 2 * (second_digit / 10) + 2 * (second_digit % 10); // if 2 digit number then, break and add
    }
    return first_digit + second_digit;
}
int sum_of_odd_R2L(const int cn)
{
    return (cn / 100) % 10 + cn % 10;
}