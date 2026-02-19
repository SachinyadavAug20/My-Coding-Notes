#include <iostream>

int main()
{
    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp; // to store food temporay till it is sure a    food
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter you food name OR 'q' to quit #" << i + 1 << " :";
        std::getline(std::cin, temp); // to accept spaces
        if (temp == "Q" || temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }
    std::cout << "your list  is :-  \n";

    for (int i = 0; foods[i].empty(); i++)
    {
        std::cout << foods[i] << "\n";
    }

    return 0;
}