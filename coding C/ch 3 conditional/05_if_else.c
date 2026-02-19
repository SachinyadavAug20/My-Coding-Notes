#include<stdio.h>

int main(){
    int age=66;
    if(age<18){
        printf("you can`t drive\n");
    }
    else if(age>60){
        printf("you can drive but you are siner citizen\n");
    }
    else{
        printf("you can drive\n");
    }
    
    
    //wrong way
    if(age<18){
        printf("you can`t drive\n");
    }
    if(age<60 && age>18){
        printf("you can drive\n");

    }
     if(age>60){
        printf("you can drive but you are siner citizen\n");
    }
    
    return 0;
}