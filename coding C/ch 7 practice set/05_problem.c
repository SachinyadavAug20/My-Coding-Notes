#include<stdio.h>
//my method
int flip_array(int*);
int flip_array(int* i)
{// i has the address of element 0 of array
    int temp;
    for (int j = 2; j ; j--)
    {
        temp=*(i);
        *(i)=*(i+(2*j-1));
        *(i+(2*j-1))=temp;
        i++;
    }
    
// sir method

}
int main(){
    int arr[4]={1,2,3,4};
    printf("the array(berfore flip_array) values %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
    flip_array(arr);
    printf("the array(berfore flip_array) values %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);

    return 0;
}