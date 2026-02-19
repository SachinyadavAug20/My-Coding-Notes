#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
0-->snake
1-->water
2-->gun
*/
int main()
{
    int player, computer;
    printf("Choose 0 for snake, 1 for water and 2 for gun :");
    scanf("%d", &player);
    // need a random number for computer
    int randomNumber = (rand() % 3); // divide any number by 3 will get remainder 0,1,2
    computer=randomNumber;
    // printf("%d",randomNumber);
    if (randomNumber == 0)
    {
        printf("Computer choose snake\n");
    }
    else if (randomNumber == 1)
    {
        printf("Computer choose water\n");
    }
    else if (randomNumber == 2)
    {
        printf("Computer choose gun\n");
    }

    // to make judgement of win or loss
    if (player == computer)
    {
        printf("It's a Draw!!!\n");
    }
    else // 6 possiblity remaing
    {
        if (player == 0 && computer == 1)
        {
            printf("Snakes drinks water\nYOU WIN!!!\n");
        }
       else if (player == 0 && computer == 2)
        {
            printf("Snakes killed by gun\nYOU LOSS!!!\n");
        }
       else if (player == 1 && computer == 2)
        {
            printf("gun sunks in water\nYOU WIN!!!\n");
        }
       else if (player == 1 && computer == 0)
        {
            printf("Snakes drinks water\nYOU LOSS!!!\n");
        }
       else if (player == 2 && computer == 0)
        {
            printf("Snakes killed by gun\nYOU WIN!!!\n");
        }
       else if (player == 2 && computer == 1)
        {
            printf("gun sunks in water\nYOU LOSS!!!\n");
        }
        else{
            printf("invalid input\n");
            
        }
    }
    main();
    return 0;
}
