#include<stdio.h>

int main(){
    int num;
    FILE* ptr;
    ptr =fopen("sachin.txt","r");
    if(ptr==NULL)
    {
        printf("the file does not exist\n");
        
    }
    else 
    {
        printf("the file exist!\n");
        
        fscanf(ptr,"%d",&num); //will read 1st %d formate in th file ptr 
        printf("the value of num is %d\n",num);
        // fclose(ptr);
        
        fscanf(ptr,"%d",&num); //will read 2nd %d formate in th file ptr as file pointer keeps on moving 
        printf("the value of num is %d\n",num);
        fclose(ptr);
    }
    
    return 0;
}