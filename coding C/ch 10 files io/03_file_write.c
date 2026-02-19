#include<stdio.h>

int main(){
    FILE* ptr=fopen("sachin.txt","a");
    fprintf(ptr,"%d",707);//will overwrite the ptr and place only this integer
    fclose(ptr);
    return 0;
}