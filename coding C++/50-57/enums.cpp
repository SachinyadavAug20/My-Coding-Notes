#include <iostream>
#include <ctime>

enum day
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6
}; // this is enum for days
enum flavour
{
    Vanilla,
    Chocolate,
    Strawberry,
    Butterscotch,
    Mango,
    Pistachio,
    Cookies_and_Cream,
    Mint_Chocolate_Chip,
    Coffee,
    Blueberry // by deafult 0 indexing applied
};
enum planet_diameter
{
    Mercury = 4879,
    Venus = 12104,
    Earth = 12742,
    Mars = 6779,
    Jupiter = 139820,
    Saturn = 116460,
    Uranus = 50724,
    Neptune = 49244
};
int main()
{
    day today = Friday;
    switch (today)
    {
    case Sunday:
        std::cout << "Today is Sunday" << '\n';
        break;
    case 1:
        std::cout << "Today is monday" << '\n';
        break;
    case Tuesday:
        std::cout << "Today is tuesday" << '\n';
        break;
    case 3:
        std::cout << "Today is wednesday" << '\n';
        break;
    case Thursday:
        std::cout << "Today is thuresday" << '\n';
        break;
    case Friday:
        std::cout << "Today is friday" << '\n';
        break;
    case 6:
        std::cout << "Today is satureday" << '\n';
        break;
    default:
        std::cout << "Invalid day" << '\n';
        break;
    }
    // THIS IS NOT VALID BUZ, SWITCHES DON'T WORK WITH STRINGS

    return 0;
}