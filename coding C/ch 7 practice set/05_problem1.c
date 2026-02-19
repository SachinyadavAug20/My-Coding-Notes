#include <stdio.h>
void printarray(int *, int);
void reverse(int*,int);
void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *a);
        a++;
    }
    printf("\n");
}
void reverse(int a[] ,int n)
{
    int temp;
   for (int i = 0; i < n/2; i++)
   {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
   }
   
}

int main()
{
    int arra[] = {1, 2, 3, 4, 5, 6};
    printarray(arra, 6);
    reverse(arra,6);
    printarray(arra, 6);
    return 0;
}