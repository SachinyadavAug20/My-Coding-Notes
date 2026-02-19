#include<iostream>
#include<vector>
//example wher big datatype name convert to small for readablity
typedef std::vector<std::pair<std::string,int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;
//OR way
using number_t=int;
using text_t=std::string;

int main(){
    text_t name="sachin";
    number_t num=47;
    std::cout<<name<<" "<<num<<'\n'; 
    return 0;
}