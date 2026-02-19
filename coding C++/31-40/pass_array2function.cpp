#include <iostream>
double gettotal(double[], int);
int main()
{
    double price[] = {43.43, 54.3, 67.7, 56, 75.45};
    double total = gettotal(price, sizeof(price) / sizeof(price[0]));
    std::cout << '$' << total;
    return 0;
}
double gettotal(double array[], int n)
{
    double sum = 0;
    // THIS WON'T WORK
    //    for (int i = 0; i < sizeof(array)/sizeof(double); i++)
    //    {
    //     sum+=array[i];
    //    }
    for (int i = 0; i < n; i++)//works
    {
        sum += array[i];
    }

    return sum;
}