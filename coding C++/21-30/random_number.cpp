#include<iostream>
#include<ctime>

int main(){
    srand(time(NULL));//initiallize random number generator
    int random_number1=rand();//will return a random number
    int random_number2=rand();//will return a random number
    int random_number3=rand();//will return a random number
    // std::cout<<random_number<<'\n';
    // std::cout<<random_number%10<<'\n';
    // std::cout<<(random_number%10)+1<<'\n';
    std::cout<<"Output of roll of six sided dice "<<(random_number1%6)+1<<'\n';
    std::cout<<"Output of roll of six sided dice "<<(random_number2%6)+1<<'\n';
    std::cout<<"Output of roll of six sided dice "<<(random_number3%6)+1<<'\n';


    return 0;
}