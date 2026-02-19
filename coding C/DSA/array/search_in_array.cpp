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
int search_linnear(T a[], int *size, int capacity, T element_to_search) // returns index of found element
{
    for (int i = 0; i < *size; i++)
    {
        printf("I am running linnear search\n");
        if (a[i] == element_to_search)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    return -1; // given -1 means no present in the array
}
template <typename T>
int binary_search(T a[], int *size, int capacity, T element_to_search)
{
    int low = 0, high = (*size) - 1, mid;
    int i = 0;
    do
    {
        mid = (high + low) / 2;
        i++;
        printf("I am running binary search, mid is %d\n", mid);
        // decide weather present or not
        if (a[low] == element_to_search)
        {
            return low;
        }
        else if (a[high] == element_to_search)
        {
            return high;
        }
        else if (a[mid] == element_to_search)
        {
            return mid;
        }
        else if (element_to_search > a[mid]) // update new high and low
        {
            low = mid + 1;
        }
        else if (element_to_search < a[mid])
        {
            high = mid - 1;
        }

        if (i > *size / 2) // base condition to excit infinite loop at max will need log(n) tries if element is present but can't find it then should try till n/2
        {                  // log(n) < n/2
            break;
        }
    } while (1); // make infinitely runnning loop
    return -1;
}

int main()
{
    int array[100] = {11, 52, 63, 84, 105, 136, 167, 168, 189, 210, 231, 241, 245, 265, 287, 376, 384, 392, 407, 419, 432, 447, 459, 472, 488, 493, 507, 519, 532, 546, 558, 569, 581, 597, 608, 623, 637, 649, 662, 678,684, 699, 713, 728, 739, 752, 768, 779, 793, 807, 819, 833, 847, 859, 873, 888, 901, 917, 932, 945}, size = 60, capacity = 100;
    printf("%d\n", size);
    printf("the index of %d in array is %d\n", 447, search_linnear(array, &size, capacity, 447));
    printf("the index of %d in array is %d\n", 447, binary_search(array, &size, capacity, 447));

    return 0;
}