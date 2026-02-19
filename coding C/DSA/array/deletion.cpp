#include <iostream>
template <typename T>
void display_array(T a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
template <typename T>
void delete_array(T a[], int *size, int capacity, T element_to_delete)
{
    // to find index of element to delete
    int index = 0;
    for (int i = 0; i <= *size; i++)
    {
        if (a[i] == element_to_delete)
        {
            break;
        }
        index++;
    }
    if (index > *size)
    {
        printf("the element is alredy absent\n"); // for debbuging
    }
    else
    {
        printf("deletion at index %d\n", index); // for debbuging
        // delete the element and shift
        // will start at index of deletin  a replace it with ahead one
        for (int i = index; i < *size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        (*size)--;
    }
}
int main()
{
    int arra[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9, capacity = 10;
    display_array(arra, size);
    delete_array(arra, &size, capacity, 5);
    display_array(arra, size);

    return 0;
}