#include<stdio.h>
#include<string.h>

char* slice_m_n(char[],int,int);
char* slice_m_n(char a[],int m,int n)
{
  int i=0;
  char* ptr1=&a[m];
  char* ptr2=&a[n];
  a=ptr1;
  a[n]='\0';
  return a;
    
}
int main(){
    char name[]="sachin yadav";
    printf("slice %s from 1 to 5 is %s",name,slice_m_n(name,1,7));
    return 0;
}