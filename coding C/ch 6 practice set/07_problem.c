#include<stdio.h>
void ten_times(int );
void ten_times(int x)
{
(x)*=10;   //x = x*10
}
int main(){
    int a=5;
    printf("the value of a(original) is %d\n",a);
    ten_times(a);
    printf("the value of a(after function ten_times called) is %d\n",a);  
//it does't change the value of the varibale
//as theaddress of the variable is not provided
    return 0;
}