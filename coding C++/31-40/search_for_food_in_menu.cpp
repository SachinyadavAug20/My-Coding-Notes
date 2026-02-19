#include <iostream>
bool search(std::string, std::string[], int);
int main()
{
    std::string foods[] = {
        "salad",
        "panner",
        "pani puri",
        "magggi",
        "hamburger",
        "hotdog",
        "pizza",
        "burger",
        "chola",
        "coke",
        "water",
        "cake",
    },
                myfood;

    std::cout << "************ Search for food in menu ************\n";
    std::cout << "enter element to search :";
    std::getline(std::cin, myfood);
    // need to check for an element in the array
    if (search(myfood, foods, sizeof(foods) / sizeof(foods[0])))
    {
        std::cout << myfood << " is present\n";
    }
    else
    {
        std::cout << myfood << " is absent\n";
    }
    return 0;
}
bool search(std::string to_find, std::string array[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (to_find == array[i])
        {
            std::cout << "the element is at index " << index << '\n';
            return true;
            index++;
        }
        index++;
    }

    return false;
}