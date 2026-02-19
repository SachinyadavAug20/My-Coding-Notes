#include <iostream>

int main()
{
    std::string cars[][3] = {{"suzuki", "$1627", "150W"},
                             {"uber", "$974", "75W"},
                             {"ola", "$765", "45W"},
                             {"porsh911", "$7999", "300W"}};
    int rows = sizeof(cars) / sizeof(cars[0]);
    int column = sizeof(cars[0]) / sizeof(cars[0][0]);

    // std::cout<<cars[0][0]<<" ";
    // std::cout<<cars[0][1]<<" ";
    // std::cout<<cars[0][2]<<" \n";
    // std::cout<<cars[1][0]<<" ";
    // std::cout<<cars[1][1]<<" ";
    // std::cout<<cars[1][2]<<" \n";
    // std::cout<<cars[2][0]<<" ";
    // std::cout<<cars[2][1]<<" ";
    // std::cout<<cars[2][2]<<" \n";
    // std::cout<<cars[3][0]<<" ";
    // std::cout<<cars[3][1]<<" ";
    // std::cout<<cars[3][2]<<" \n";
    // using a nested loop

    for (int i = 0; i < rows; i++) // no of row
    {
        for (int j = 0; j < column; j++) // no of columns
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}