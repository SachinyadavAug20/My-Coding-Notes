#include<iostream>

int main(){
    std::string name;
    std::cout << "Enter your name :";
    std::getline(std::cin,name);//so can take string with spaces as input 
    
    std::cout << "the index of spaces in name is"<<name.find(" ")<<'\n';
    if(name.length()>12)
    {
        std::cout << "your name can't be more than 12 letters long\n";
    }
    else
    {
        std::cout << "Welcome "<<name<<'\n';
    }

    if(name.empty())
    {
        std::cout << "you didn't enter your name\n";
    }
    else
    {
        std::cout << "hello, "<<name<<'\n';
    }
    // std::cout << "hello "<<name;
    name.append("@gmail.com");
    std::cout<<"Your username now is "<<name<<'\n';
    name.insert(0,"@");
    std::cout <<"character at index 3 is "<<name.at(3)<<'\n';
    name.insert(4,"@");
    name.insert(2,"&");
    name.insert(6,"%");
    name.erase(6,8);
    name.insert(10,"[&]");
    name.insert(12,"*%^");
    name.erase(0,2);
    name.insert(8,"$");

    std::cout <<"your password is "<<name<<'\n';

    name.clear();
    std::cout <<name;
    return 0;
}