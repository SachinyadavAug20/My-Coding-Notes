#include <iostream>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if(i==7||i==3)//to skip 7 and 3
        {
            continue;
        }
        else if(i==9)//to stop at 8
        {
            break;
        }
        std::cout << i << '\n';
    }
    return 0;
}