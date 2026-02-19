#include<stdio.h>

int main(){
    if(1){
        printf("this is excuted\n");
    }
    if(3426){
        printf("this is also excuted\n");
    }
    if (0){
        printf("this is always not excuted\n");
    }
     if (0.22){
        printf("this is always excuted\n");
    }
     if ('d'){
        printf("this is always excuted\n");
    }
     if (3.14){
        printf("this is always excuted\n");
    }
   
    

    return 0;
}