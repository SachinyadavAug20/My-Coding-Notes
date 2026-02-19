#include<stdio.h>

int main(){
    FILE* file_ptr=fopen("sachin1.txt","a");
    fputc('A',file_ptr);
    // printf("%c",fgetc(file_ptr)); //reads the first character is 't'
    return 0;
}