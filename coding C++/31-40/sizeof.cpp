#include <iostream>

int main()
{
    std::string name = "sachin sachin yadav";
    char letter = 'S';
    double gpa = 2.2;
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[]={"sachin","sonu","harry","coder","shimchan","spoongbob","patterics","king crab"};
    std::cout << "the size double is " << sizeof(gpa) << " " << sizeof(double) << " bytes\n";                                          // it is 8 bytes
    std::cout << "the size string is " << sizeof(name) << " " << sizeof(std::string) << " bytes\n";                                    // it is 8 bytes
    std::cout << "the size character is " << sizeof(letter) << " " << sizeof(char) << " bytes\n";                                      // it is 8 bytes
    std::cout << "the size boolen is " << sizeof(student) << " " << sizeof(bool) << " bytes\n";                                        // it is 8 bytes
    std::cout << "the size array of char is " << sizeof(grades) << " " << sizeof(char)<<" no of element" << sizeof(grades) / sizeof(char) << " bytes\n"; // it is 8 bytes
    std::cout << "the size array of string is " << sizeof(students) << " " << sizeof(std::string)<<" no of element " << sizeof(students) / sizeof(std::string) << " bytes\n"; // it is 8 bytes

    return 0;
}