#include<iostream>

int main(){
int num;
char*pGrades;
    std::cout<<"enter number of students :";
    std::cin>>num;
    std::cout<<"enter all the grades 1 by enter using \'enter key\'\n";

    pGrades=new char[num];
    for (int i = 0; i < num; i++)
    {
            std::cin>>pGrades[i];
    }
    for (int i = 0; i < num; i++)
    {
            std::cout<<"grades of "<<i+1<<"th student is "<<pGrades[i]<<'\n';
    }
    delete[] pGrades;//if tried printing deleted will have undetermined behavour
    std::cout<<'\n';
    for (int i = 0; i < num; i++)
    {
            std::cout<<"grades of "<<i+1<<"th student is "<<pGrades[i]<<'\n';
    }
    return 0;
}