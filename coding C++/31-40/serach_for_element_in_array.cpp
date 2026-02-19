#include<iostream>
bool search(int,int[],int);
int main(){
    int numbers[]={1,33,35,65,5,2,3,4,5,6,7,8,9,87,6,54,10},mynum;
    
    std::cout<<"search for element in array\n";
    std::cout<<"enter element to search :";
    std::cin>>mynum;
    //need to check for an element in the array
    if(search(mynum,numbers,sizeof(numbers)/sizeof(numbers[0])))
    {
        std::cout<<mynum<<" is present\n";
    }
    else
    {
        std::cout<<mynum<<" is absent\n";
        
    }
    return 0;
}
bool search(int to_find,int array[],int size)
{
    int index=0;
    for (int i = 0; i < size; i++)
    {
            if(to_find==array[i])
            {
                std::cout<<"the element is at index "<<index<<'\n';
                return true;
                index++;
            }
            index++;
    }

    return false;
    
}