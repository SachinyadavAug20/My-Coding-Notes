#include<stdio.h>
int no_of_positive_in_array(int* ,int);
int no_of_positive_in_array(int a[],int n)
{
    int no_of_positive_number=0;
    int no_of_negative_number=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            no_of_positive_number++;
        }
        else if(a[i]<0)
        {
            no_of_negative_number++;
        }
    }
    return no_of_positive_number;
}
int main(){
    int num[]={1,2,3,4,5,6,7,-3,-6,-4,-6,-5,4};
    printf("Number of positive intger in array is %d",no_of_positive_in_array(num,13));
    return 0;
}