#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("THIS is a number guessing(1 to 100) game");
    // Seed the random number generator with the current time
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int user_guess;
    printf("Guess the number :");
    scanf("%d", &user_guess);

    do
    {
        if (user_guess > randomNumber)
        {
            printf("try little lower, ");
            no_of_guesses++;
        }
        else if (user_guess < randomNumber)
        {
            printf("try little higher, ");
            no_of_guesses++;
        }
        else
        {
            printf("invalid input");
        }
        printf("try again, the number :");
        scanf("%d", &user_guess);

    } while (user_guess != randomNumber);
    if(user_guess==randomNumber)
    {
        printf("Congurates you guessed the number correctly in %d guesses\n", no_of_guesses);

    }

    // Generate random number between 1 and 100

    scanf("%d", &user_guess);
    return 0;
}
