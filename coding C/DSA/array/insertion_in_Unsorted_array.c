#include <stdio.h>
void display_array(int[], int size);                                                                    // traversal
int insertion_inorder(int a[], int *size, int Element_to_insert, int index_of_insertion, int capacity); // pass bybreference as need to change values
int main()
{
    int size = 5;
    int capacity = 99;
    int arr[100] = {1, 3, 43, 2, 45}; // extra space alredy reserved
    display_array(arr, size);
    insertion_inorder(arr, &size, 7, 2, 100) == 0 ? display_array(arr, size) : printf("insertion not done");
    return 0;
}
void display_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int insertion_inorder(int a[], int *size, int Element_to_insert, int index_of_insertion, int capacity)
{
    if (capacity <= index_of_insertion)
    {
        printf("overloaded array");
        return -1; // failed to do insertion
    }
    else if (index_of_insertion > *size - 1)
    {
        a[index_of_insertion] = Element_to_insert; // best case O(1)
    }
    else if (index_of_insertion <= *size - 1)
    {
        for (int i = *size - 1; i >= index_of_insertion; i--) // to create empty space at index of insertion
        {
            // if (i == index_of_insertion - 1) // simplify life make it infinite loop no problem
            // {
            //     break;
            // }
            a[i + 1] = a[i];
        }
        a[index_of_insertion] = Element_to_insert; // place
    }
    (*size)++; // as new element added
    return 0;  // as did successfully
}
