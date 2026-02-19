#include<iostream>
int recursive_factorial(int);
int iterativilly_factorial(int);
int main(){
    int number;
    std::cout<<"calculate factorial of :";
    std::cin>>number;
    std::cout<<"factorial of "<<number<<" is "<<recursive_factorial(number)<<' '<<iterativilly_factorial(number);
    
    return 0;
}
int recursive_factorial(int num)
{
if (num==0)
{
    return 1;//as by definition 0!=1
}
else if(num<0)
{
    std::cout<<"Factorial not defined for -ve integers\n";
    return -1;
}
//n!=n*(n-1)!
return num*recursive_factorial(num-1);

}

int iterativilly_factorial(int num)
{
   int result=1;
    for (int i = 1; i <= num; i++)
    {
      result*=i;  
    }
    return result;
}
int add(int a,int b){
   return a+b;
}
