#include <iostream>

int main()
{
    char option_marked, correctoption, reply;
    int points = 0, correct = 0, incorrect = 0;
    std::string question[] = {"What does \"PC\" stand for in PC gaming?",
                              "Which company created the PlayStation?",
                              "What is the best-selling video game of all time (as of 2024)?",
                              "What does \"FPS\" stand for in gaming?",
                              "Which company owns the Xbox gaming console?",
                              "What is the name of the plumber in the famous Nintendo series?",
                              "What is the main purpose of a game engine?",
                              " What type of game is PUBG?",
                              "What programming language is commonly used in Unity game development?",
                              "Which game engine is known for high-end graphics and is often used in AAA games like Fortnite?",
                              "Is earth flat?"};
    std::string options[][4] = {{"A. Personal Console", "B. Playable Console", "C. Personal Computer", "D. Power Console"},
                                {"A. Microsoft", "B. Sony", "C. Nintendo", "D. Sega"},
                                {"A. Minecraft", "B. GTA V", "C. Fortnite", "D. Tetris"},
                                {"A. First Player Shooter", "B. Fast Power Shooter", "C. First-Person Shooter", "D. Free Play Station"},
                                {"A. Apple", "B. Microsoft", "C. Google", "D. Sony"},
                                {"A. Luigi", "B. Mario", "C. Donkey Kong", "D. Sonic"},
                                {"A. To make music", "B. To design characters", "C. To build and run games", "D. To sell the game"},
                                {"A. Racing", "B. Puzzle", "C. Battle Royale / Shooter", "D. Sports"},
                                {"A. Python", "B. Java", "C. C#", "D. C++"},
                                {"A. CryEngine", "B. Unreal Engine", "C. Godot", "D. GameMaker"},
                                {"A. Yes", "B. No", "C. Sometime", "D. what is earth?"}};
    char answer_key[] = {'C', 'B', 'A', 'C', 'B', 'B', 'C', 'C', 'C', 'B', 'B'};

    std::cout << "*************************************** GAMES AND TECHNOLOGY QUIZ ***************************************\n";
    std::cout << "RULES :-\n";
    std::cout << "1.Questions are random \n";
    std::cout << "2.Correct = +4, Incorrect = -1 \n";
    std::cout << "3.Answer in order of question only option(A,B,C & D) \n";
    std::cout << "4.10 random questions \n\n";

    for (int i = 0; i < sizeof(question) / sizeof(question[0]); i++)
    {
        std::cout << i + 1 << ". " << question[i] << "\n";
        for (int j = 0; j < sizeof(options[0]) / sizeof(options[0][0]); j++)
        {
            std::cout << options[i][j] << "\n";
        }

        correctoption = answer_key[i];
        std::cout << "ANSWER :";
        std::cin >> option_marked;
        option_marked = toupper(option_marked);
        if (correctoption == option_marked)
        {
            std::cout << "Correct!\n";
            correct++;
            points += 4;
        }
        else
        {
            std::cout << "Incorrect! ";
            std::cout << "Correct option is :" << correctoption << "\n";
            incorrect++;
            points -= 1;
        }
    }

    std::cout << "******************************************   :\n";
    std::cout << "***            RESULT                  ***   :-";
    std::cout << "your score is " << points << " points\n";
    std::cout << "******************************************   :\n";
    std::cout << "Total " << correct << " correct" << "\n";
    std::cout << "Total " << incorrect << " incorrect" << "\n";
    std::cout << "%accuracy " << (double)correct * 100 / ((double)correct + (double)incorrect) << " %" << "\n";

    std::cout << "Want to retry[y/n] :";
    std::cin >> reply;
    if (reply == 'y' || reply == 'Y')
    {
        main();
    }
    else if (reply == 'n' || reply == 'N')
    {
        return 0;
    }
    else
    {
        main();
    }

    return 0;
}