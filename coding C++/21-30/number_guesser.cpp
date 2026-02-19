#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int guess,no_guess=0;
    int random_number_1_100 = (rand() % 100) + 1;
    std::cout<<"************* NUMBER GUESSER 1 TO 100 *************\n";
    do
    {
        std::cout<<"Enter your guess :";
        std::cin>>guess;
        no_guess++;
        if (guess>random_number_1_100)
        {
            std::cout<<"Try lesser\n";            
        }
        else if(guess<random_number_1_100)
        {
            std::cout<<"Try greater\n";       
        }
        else if(guess==random_number_1_100)
        {
            std::cout<<"YOU WON!, Number was indeed "<<random_number_1_100<<"!\nYou took "<<no_guess<<" guess to reach it!\n";
        }
        else
        {
            std::cout<<"Plz, enter a valid guess\n";       
        }
                
    } while (guess!=random_number_1_100);
    
    std::cout<<"***************************************************\n\n";
    char reply;
    std::cout<<"Do you want to use it again[y/n] :";
    std::cin>>reply;
    if (reply=='y'||reply=='Y')
    {
        std::cout<<"\n";
        main();
    }
    else
    {
        return 0;
    }

    return 0;
}