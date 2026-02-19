#include <iostream>
#include <ctime>
int random();
int display_question(int);
void check_option(char, int);
void displayPoints();
void ask();
int points = 0;
int main()
{ // to diplay question
    char option_marked, reply;
    std::cout << "*************************************** GAMES AND TECHNOLOGY QUIZ ***************************************\n";
    std::cout << "RULES :-\n";
    std::cout << "1.Questions are random \n";
    std::cout << "2.Correct = +4, Incorrect = -1 \n";
    std::cout << "3.Answer in order of question only option(A,B,C & D) \n";
    std::cout << "4.10 random questions \n\n";

    ask();
    return 0;
}
int random()
{
    srand(time(NULL));
    return rand() % 10; // random number btw 0 to 9
}
int display_question(int q)
{
    std::string question[] = {"What does \"PC\" stand for in PC gaming?",
                                "Which company created the PlayStation?",
                                "What is the best-selling video game of all time (as of 2024)?",
                                "What does \"FPS\" stand for in gaming?",
                                "Which company owns the Xbox gaming console?",
                                "What is the name of the plumber in the famous Nintendo series?",
                                "What is the main purpose of a game engine?",
                                " What type of game is PUBG?",
                                "What programming language is commonly used in Unity game development?",
                                "Which game engine is known for high-end graphics and is often used in AAA games like Fortnite?"};
    std::string options[][4] = {{"A. Personal Console", "B. Playable Console", "C. Personal Computer", "D. Power Console"},
                                  {"A. Microsoft", "B. Sony", "C. Nintendo", "D. Sega"},
                                  {"A. Minecraft", "B. GTA V", "C. Fortnite", "D. Tetris"},
                                  {"A. First Player Shooter", "B. Fast Power Shooter", "C. First-Person Shooter", "D. Free Play Station"},
                                  {"A. Apple", "B. Microsoft", "C. Google", "D. Sony"},
                                  {"A. Luigi", "B. Mario", "C. Donkey Kong", "D. Sonic"},
                                  {"A. To make music", "B. To design characters", "C. To build and run games", "D. To sell the game"},
                                  {"A. Racing", "B. Puzzle", "C. Battle Royale / Shooter", "D. Sports"},
                                  {"A. Python", "B. Java", "C. C#", "D. C++"},
                                  {"A. CryEngine", "B. Unreal Engine", "C. Godot", "D. GameMaker"}};
    std::cout << question[q] << "\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << options[q][i] << "\n";
    }
    return sizeof(question)/sizeof(question[0]);
}
void check_option(char opt, int q)
{
    char answer_key[10] = {'C', 'B', 'A', 'C', 'B', 'B', 'C', 'C', 'C', 'B'};
    char correct_opt = answer_key[q];
    if (correct_opt == opt)
    {
        std::cout << "Correct!\n";
        points += 4;
    }
    else
    {
        std::cout << "Incorrect!\n";
        std::cout << "Correct option is :" << correct_opt;
        points -= 1;
    }
}
void displayPoints()
{
    std::cout << "Your score is " << points << " marks\n";
}
void ask()
{

    char option_marked, reply;
    int random_question_no = random();
    display_question(random_question_no);
    std::cout << "ANSWER :";
    std::cin >> option_marked;
    check_option(option_marked, random_question_no);
    std::cout << "Need more question[y/n] OR check score by [s] :";
    std::cin >> reply;
    if (reply == 'y' || reply == 'Y')
    {
        ask();
    }
    else if (reply == 's' || reply == 'S')
    {
        displayPoints();
        ask();
    }
    else if (reply == 'n' || reply == 'N')
    {
        displayPoints();
    }
}