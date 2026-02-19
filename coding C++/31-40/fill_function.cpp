#include <iostream>

int main()
{
    std::string foods[12];
    fill(foods,foods+(sizeof(foods)/sizeof(foods[0]))/3,"pizza");//fill the third arrray with the word pizza
    fill(foods+(sizeof(foods)/sizeof(foods[0]))/3,foods+(sizeof(foods)/sizeof(foods[0]))*2/3,"burger");
    fill(foods+(sizeof(foods)/sizeof(foods[0]))*2/3,foods+(sizeof(foods)/sizeof(foods[0])),"hotdog");
    for (std::string food :foods)
    {
        std::cout<<food<<' ';
    }
    
    return 0;
}