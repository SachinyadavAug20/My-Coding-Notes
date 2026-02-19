#include <iostream>
void sort(int[], int);
int main()
{
    int numbers[] = {9, 3, 8, 6, 2, 1, 4, 12, 34, 56, 86, 32, 15, 35, 24, 14, 64, 13, 75, 26, 16, 17, 7, 10, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int iterartion = 0;
    std::cout << "unsorted array is " << '\n';
    for (int number : numbers)
    {
        std::cout << number << ' ';
    }

    std::cout << '\n';
    sort(numbers, size);

    std::cout << "sorted array is " << '\n';
    for (int number : numbers)
    {
        std::cout << number << ' ';
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    for (int j=0; j <= size-1 ; j++)//size-1 as last element is not to comapare to anything
    {
        for (int i = 0; i < size - 1 - j; i++)//size-1-i as iterated for ith element thus not to sort already sorted
        {
            if (array[i] > array[i+1])
            {
                temp = array[i+1]; // swap algo
                array[i+1] = array[i];
                array[i] = temp;
            }
            else
            {
                continue;
            }
        }
    }
}