#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int random_number=(rand()%5)+1;
    //random prize 
    switch (random_number)
    {
    case 1:
        std::cout<<"you won T-shirt!\n";
        break;
    case 2:
        std::cout<<"you won free lunch!\n";
        break;
    case 3:
        std::cout<<"you won gift card!\n";
        break;
    case 4:
        std::cout<<"you won concert ticket!\n";
        break;
    case 5:
        std::cout<<"you won sticker!\n";
        break;
    
    default:
        break;
    }
    return 0;
}