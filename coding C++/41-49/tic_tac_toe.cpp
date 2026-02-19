#include <iostream>
#include <ctime>
void draw_board(char *spaces);
void player_move(char *spaces, char player);
void computer_move(char *spaces, char computer);
bool check_winner(char *spaces, char computer, char player);
bool check_tie(char *spaces, char computer, char player);

int main()
{
    char pSymbol, cSymbol, reply;
    srand(time(NULL));
    std::cout << "******************************************************************************\n";
    std::cout << "******************************** TIC TACC TOE ********************************\n";
    std::cout << "******************************************************************************\n";
    std::cout << "1. The index of places in grid is from 1 to 9\n";
    std::cout << "2. You can choice this places and computer will aut play\n";
    std::cout << "3. Randomly decided who will play first\n";
    std::cout << "4. First to move choose \'X\' and other uses \'O\'\n";
    do
    {
        char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        bool running = true;
        int who_first = rand() % 2;
        if (who_first == 0)
        {
            pSymbol = 'X';
            cSymbol = 'O';
        }
        else
        {
            cSymbol = 'X';
            pSymbol = 'O';
        }
        while (who_first == 0 && running)
        {
            player_move(spaces, pSymbol);
            draw_board(spaces);
            if (check_winner(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
            else if (check_tie(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
            computer_move(spaces, cSymbol);
            draw_board(spaces);
            if (check_winner(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
            else if (check_tie(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
        }
        while (who_first == 1 && running)
        {
            computer_move(spaces, cSymbol);
            draw_board(spaces);
            if (check_winner(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
            else if (check_tie(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
            player_move(spaces, pSymbol);
            draw_board(spaces);
            if (check_winner(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
            else if (check_tie(spaces, cSymbol, pSymbol))
            {
                running = false;
                break;
            }
        }
        
        draw_board(spaces);
        std::cout << "******************************** THANKS FOR PLAYING ********************************\n";
        std::cout << "want to play again[y/n] :";
        std::cin >> reply;

    } while (reply != 'n');

    return 0;
}

void draw_board(char *spaces)
{
    std::cout << "\n     |     |     \n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    std::cout << "     |     |     \n\n";
}
void player_move(char *spaces, char player)
{
    int move;
    do
    {
        std::cout << "Enter your move(1-9) :";
        std::cin >> move;
        move--;
        if (spaces[move] == ' ')
        {
            spaces[move] = player;
            break;
        }
        else
        {
            std::cout << "Illegal move !! try again\n";
            move = -1;
        }
    } while (move < 0 || move > 8);
}
void computer_move(char *spaces, char computer)
{
    int move;
    srand(time(0));
    while (true)
    {
        move = rand() % 9;
        if (spaces[move] == ' ')
        {
            spaces[move] = computer;
            break;
        }
    }
}
bool check_winner(char *spaces, char computer, char player)
{
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[1] != ' ')
    {
        spaces[1] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' ')
    {
        spaces[5] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && spaces[6] != ' ')
    {
        spaces[8] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && spaces[0] != ' ')
    {
        spaces[3] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && spaces[1] != ' ')
    {
        spaces[4] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && spaces[2] != ' ')
    {
        spaces[5] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && spaces[0] != ' ')
    {
        spaces[4] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && spaces[2] != ' ')
    {
        spaces[4] == player ? std::cout << "***** Player WON!! *****" : std::cout << "**** Computer WON!! ****";
        return true;
    }
    else
    {
        return false;
    }
}
bool check_tie(char *spaces, char computer, char player)
{
    int count_space = 0;
    // if full grid is occuiped but still no winner then tie
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] != ' ')
        {
            count_space++;
        }
    }

    if (count_space == 9)
    {
        std::cout << "*** This is a tie ! ***\n";
        return true;
    }
    else
    {
        return false;
    }
}
