#include <iostream>

int main()
{
    int month;
    std::cout << "enter month in number :";
    std::cin >> month;
    // if (month == 1)
    // {
    //     std::cout<<"its january"<<'\n';
    // }
    // else if (month==2)
    // {
    //         std::cout<<"its febuary"<<'\n';
    // }
    //  else if (month==3)
    // {
    //         std::cout<<"its march"<<'\n';
    // }
    //  else if (month==4)
    // {
    //         std::cout<<"its april"<<'\n';
    // }
    //  else if (month==5)
    // {
    //         std::cout<<"its may"<<'\n';
    // }
    //  else if (month==6)
    // {
    //         std::cout<<"its june"<<'\n';
    // }
    //  else if (month==7)
    // {
    //         std::cout<<"its july"<<'\n';
    // }
    //  else if (month==8)
    // {
    //         std::cout<<"its aguest"<<'\n';
    // }
    //  else if (month==9)
    // {
    //         std::cout<<"its september"<<'\n';
    // }
    //  else if (month==10)
    // {
    //         std::cout<<"its october"<<'\n';
    // }
    //  else if (month==11)
    // {
    //         std::cout<<"its november"<<'\n';
    // }
    //  else if (month==12)
    // {
    //         std::cout<<"its december"<<'\n';
    // }
    // this look so bad inefficient

    switch (month)
    {
    case 1:
        std::cout << "its january" << '\n';
        break;
    case 2:
        std::cout << "its febuary" << '\n';
        break;
    case 3:
        std::cout << "its march" << '\n';
        break;
    case 4:
        std::cout << "its april" << '\n';
        break;
    case 5:
        std::cout << "its may" << '\n';
        break;
    case 6:
        std::cout << "its june" << '\n';
        break;
    case 7:
        std::cout << "its july" << '\n';
        break;
    case 8:
        std::cout << "its aguest" << '\n';
        break;
    case 9:
        std::cout << "its september" << '\n';
        break;
    case 10:
        std::cout << "its october" << '\n';
        break;
    case 11:
        std::cout << "its november" << '\n';
        break;
    case 12:
        std::cout << "its december" << '\n';
        break;
    default:
        std::cout << "invalad input!!enter number [1,12] only";
    }
    return 0;
}