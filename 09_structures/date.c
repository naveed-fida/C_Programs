#include <stdio.h>

int main(void)
{
    struct date
    {
        int day;
        int month;
        int year;
    };
    
    struct date today;
    
    today.day = 10;
    today.month = 5;
    today.year = 2020;

    printf("Today's date is: %i/%i/%.2i.\n",
           today.month, today.day, today.year % 100);
    return 0;
}