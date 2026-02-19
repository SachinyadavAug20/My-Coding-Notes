#include <stdio.h>
void display_array(int a[], int size);
int insert_in_sorted_array(int a[], int *size, int capacity, int element);
int main()
{
    int sorted_array[100] = {1, 3, 5, 7, 9, 14, 25, 37, 57, 89, 97};
    int size = 11, capacity = 100; // array details
    display_array(sorted_array, size);
    insert_in_sorted_array(sorted_array, &size, capacity, 13);
    display_array(sorted_array, size);

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
int insert_in_sorted_array(int a[], int *size, int capacity, int element)
{
    // find where to insert as it is sorted
    int target_index = 0;
    for (int i = 0; i < *size; i++)
    {
        if (a[i] >= element)
        {
            break;
        }
        target_index++;
    }
    printf("will place at %d\n", target_index); // debugging
    if (capacity <= *size)
    {
        printf("array overloaded!\n");
    }
    else
    {
        for (int i = *size - 1; i >= target_index; i--)
        {
            a[i + 1] = a[i];
        }
        a[target_index] = element;
        (*size)++;
    }
}