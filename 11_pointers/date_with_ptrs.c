#include <stdio.h>

int main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    
    struct date today, *datePtr = &today;
    
    datePtr->day = 10;
    datePtr->month = 5;
    datePtr->year = 2020;

    printf("Today's date is: %i/%i/%i.\n",
           datePtr->month, datePtr->day, datePtr->year % 100);
    return 0;
}