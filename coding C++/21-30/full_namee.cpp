#include<iostream>
std::string fullname(std::string,std::string,std::string);
int main(){
    std::string first_name,father_name,surname;
    std::cout<<"Enter your first name :";
    std::getline(std::cin,first_name);
    std::cout<<"Enter your father name :";
    std::getline(std::cin,father_name);
    std::cout<<"Enter your surname :";
    std::getline(std::cin,surname);
    std::cout<<"Your full name is : "<<fullname(first_name,father_name,surname)<<'\n';
     char reply;
    std::cout<<"Do you want to use it again[y/n] :";
    std::cin>>reply;
    if (reply=='y'||reply=='Y')
    {
        std::cout<<"\n";
        main();
    }
    else
    {
        return 0;
    }

    return 0;
} 
std::string fullname(std::string n1,std::string n2,std::string n3)
{
    return n1+' '+n2+' '+n3;
}