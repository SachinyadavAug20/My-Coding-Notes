#include <iostream>
#include <ctime>
#include <iomanip>
int get_user_choice();
void retry();
void decision(int, int);
void start_instruction();
void display_computer_choice(int);
int main()
{
    srand(time(NULL));
    int Computer_choice = (rand() % 3) + 1, user_choice;
    start_instruction();
    user_choice = get_user_choice();
    display_computer_choice(Computer_choice);
    // deciding winner
    decision(user_choice, Computer_choice);
    retry();
    return 0;
}
void start_instruction()
{
    std::cout << "*********** ROCK, PAPER & SCISSORS ************\n";
    std::cout << "1===>rock\n";
    std::cout << "2===>paper\n";
    std::cout << "3===>scissor\n";
}
void display_computer_choice(int Computer_choice)
{
    switch (Computer_choice)
    {
    case 1:
        std::cout << "computer had choice ROCK!\n";
        break;
    case 2:
        std::cout << "computer had choice PAPER!\n";
        break;
    case 3:
        std::cout << "computer had choice SCISSOR!\n";
        break;
    }
}
int get_user_choice()
{
    int a;
    std::cout << "Choice your move :";
    std::cin >> a;
    std::cin.clear();
    fflush(stdin);
    return a;
}
void retry()
{
    char reply;
    std::cout << "TRY AGAIN[y/n] :";
    std::cin >> reply;
    std::cin.clear();
    fflush(stdin);
    if (reply == 'y' || reply == 'Y')
    {
        main();
    }
    else if (reply == 'n' || reply == 'N')
    {
        std::cout << "THANKS FOR PLAYING\n";
    }
    else
    {
        main();
    }
}
void decision(int user_choice, int Computer_choice)
{
    if ((user_choice == 1 && Computer_choice == 3) || (user_choice == 2 && Computer_choice == 1) || (user_choice == 3 && Computer_choice == 2))
    {
        std::cout << "YOU WON!!\n";
    }
    else if ((user_choice == 3 && Computer_choice == 1) || (user_choice == 1 && Computer_choice == 2) || (user_choice == 2 && Computer_choice == 3))
    {
        std::cout << "YOU LOSS!!\n";
    }
    else if (user_choice == Computer_choice)
    {
        std::cout << "IT'S A DRAW!!\n";
    }
    else
    {
        std::cout << "ENTER A VALID MOVE\n";
    }
}