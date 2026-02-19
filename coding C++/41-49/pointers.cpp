#include <iostream>

int main()
{
    std::string name = "sachin";
    int age = 29;
    std::string freepizza[5]={"pizza1","pizza2","pizza3","pizza4","pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreepizza = freepizza;
    std::string *pFreepizza1 = &freepizza[0];

    std::cout << pName << '\n';  // 0x61fef4  6422260
    std::cout << *pName << '\n'; // 0x61fef4  6422260
    std::cout << pAge << '\n';  // 0x61fef4  6422260
    std::cout << *pAge<< '\n'; // 0x61fef4  6422260
    std::cout << pFreepizza << '\n';  // 0x61fef4  6422260
    std::cout << *pFreepizza<< '\n'; // 0x61fef4  6422260

    return 0;
}