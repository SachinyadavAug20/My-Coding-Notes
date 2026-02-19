#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
int dates_comparer(date, date);
int dates_comparer(date d1, date d2)
{
    printf("checking year\n");
    
    if (d1.year > d2.year)
    {
        printf("concluded on year\n");
        
        return -1;
    }
    else if (d1.year > d2.year)
    {
        printf("concluded on year\n");
        return 1;
    }
    if (d1.year == d2.year)
    {
        printf("checking month\n");
        
        if (d1.month > d2.month)
        {
            printf("concluded on month\n");
            return -1;
        }
        else if (d1.month < d2.month)
        {
            printf("concluded on month\n");
            return 1;
        }
        
        if (d1.month == d2.month)
        {
            printf("checking on dates\n");
            if (d1.date > d2.date)
            {
                printf("concluded on dates\n");
                return -1;
            }
            else if (d1.date < d2.date)
            {
                printf("concluded on dates\n");
                return 1;
            }

            if (d1.date == d2.date)
            {
                printf("both are same\n");
                
                return 0;
            }
        }
    }

    // convert to common unit days(smallest unit)
    // int d1=d1.date+d1.month*   prooooooooooooblem no fixed conversion rates
}

int main()
{
    date birthday1 = {12, 4, 2000};
    date birthday2 = {12, 4, 2000};
    printf("%d", dates_comparer(birthday1, birthday2));  //as birthday1<birthday2===1
    return 0;
}