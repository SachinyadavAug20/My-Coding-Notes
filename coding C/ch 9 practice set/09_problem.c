#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void dates_comparer(date, date);
void dates_comparer(date d1, date d2)
{
    
    date d1_difference_d2 = {d1.date - d2.date, d1.month - d2.month, d1.year - d2.year};
    printf("the difference of dates is %ddayes, %dmonths and %dyears",d1_difference_d2.date,d1_difference_d2.month,d1_difference_d2.year);
}

int main()
{
    date birthday1 = {3, 4, 2000};
    date birthday2 = {12, 8, 2050};
    dates_comparer(birthday2,birthday1);
    return 0;
}