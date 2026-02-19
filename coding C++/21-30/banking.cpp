#include <iostream>
#include <iomanip>
double balance = 0;
double amount = 0;
void deposit(double);
void withdraw(double);
void balancecheck();
void clear_input_buffer();
int main()
{
    char operation;
    std::cout << "*************** BANK OF BADLAPUR ***************\n";
    std::cout << "d or D ===> deposit\n";
    std::cout << "w or W ===> withdraw\n";
    std::cout << "c  or C ===> check balance\n";
    std::cout << "Which operation to do :";
    std::cin >> operation;
    clear_input_buffer();
    switch (operation)
    {
    case 'd':
    case 'D':
    amount = 0;
        std::cout << "Amount to add :";
        std::cin >> amount;
        clear_input_buffer();
        if (amount > 0)
        {
            
            deposit(amount);
        }
        else
        {
            std::cout << "INVALID AMOUNT!! \n";
        }
        balancecheck();
        break;
        
        case 'w':
        case 'W':
        amount = 0;
        std::cout << "Amount to add :";
        std::cin >> amount;
        clear_input_buffer();
        if (amount > 0 && balance >= amount)
        {
            withdraw(amount);
        }
        else if (balance < amount)
        {
            std::cout << "NOT SUFFIICENT BALANCE(i.e insfficient funds)\n";
        }
        else
        {
            std::cout << "INVALID AMOUNT!! \n";
        }
        balancecheck();
        break;

        case 'c':
        case 'C':
        balancecheck();
        break;
        
    default:
        std::cout << "!!!!!!! Enter a valid input !!!!!!!!\n";
        break;
    }

    char reply;
    std::cout << "Do you want continue banking[y/n] :";
    std::cin >> reply;
    if (reply == 'y' || reply == 'Y')
    {
        std::cout << "\n";
        main();
    }
    else
    {
        std::cout << "************** THANKS FOR VISITING ************";
        return 0;
    }
    return 0;
}
void deposit(double a)
{
    ::balance += a;
    // return balance;
}
void withdraw(double s)
{
    ::balance -= s;
    // return balance;
}
void balancecheck()
{
    std::cout << "Your balanace is " << std::setprecision(2) << std::fixed << balance << " rupee\n";
}
void clear_input_buffer()
{
    std::cin.clear();
    fflush(stdin);
}
