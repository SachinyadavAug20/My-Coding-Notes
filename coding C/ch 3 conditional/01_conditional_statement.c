#include<stdio.h>

int main(){
    int age=69;
    if(age<=5){
        printf("Person is a child i.e he is 5 or less\n");
        printf("you are very young\n");
    }
    else if(age==69){
        printf("you are amazing\n");
        printf("you are very old\n");
    }
    else{
        if(age%5==0)
        {
            printf("your age is muliple of 5\n");
        }
        printf("person is not a child i.e he is older than 5\n");
        printf("you are old\n");
    }
    return 0;
}