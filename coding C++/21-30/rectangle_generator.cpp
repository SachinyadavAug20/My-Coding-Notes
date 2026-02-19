#include<iostream>

int main(){
    int row,column;
    char symbol;
    std::cout<<"Enter the number of rows :";
    std::cin>>row;
    std::cout<<"Enter the number of column :";
    std::cin>>column;
    std::cout<<"Enter the symbol to use :";
    std::cin>>symbol;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cout<<symbol<<"  ";
        }
        std::cout<<'\n';
        
    }
    char reply;
    std::cout<<"Do you want to use it again[y/n] :";
    std::cin>>reply;
    if (reply=='y'||reply=='Y')
    {
        main();
    }
    else
    {
        return 0;

    }
}