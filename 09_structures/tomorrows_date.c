#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

struct date dateUpdate(struct date d);
int numberOfDays(struct date d);
bool isLeapYear(struct date d);
    
int main(void)
{
    struct date today;

    printf("Enter today's date (mm dd yyyy)\n");
    scanf("%i %i %i", &today.month, &today.day, &today.year);

    struct date tomorrow = dateUpdate(today);

    printf("Tomorrow's date is: %i/%i/%.2i.\n",
           tomorrow.month, tomorrow.day, tomorrow.year % 100);
}

bool isLeapYear(struct date d)
{
    if ((d.year % 4 == 0 && d.year % 100 != 0) ||
         d.year % 400 == 0)
        return true;
    
    return false;
}

int numberOfDays(struct date d)
{
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    const int FEB = 2;

    if (isLeapYear(d) && d.month == FEB)
        return 29;
    else
        return daysInMonth[d.month];
}

struct date dateUpdate(struct date d)
{
    // uses three ways of assigning to the members of an already declared struct

    struct date tomorrow;

    if (numberOfDays(d) != d.day){
        tomorrow = (struct date) { d.day + 1, d.month, d.year };
    } else if (d.month == 12) {
        tomorrow = (struct date) { .day = 1, .month = 1, .year = d.year + 1};
    } else {
        tomorrow.day = 1;
        tomorrow.month = d.month + 1;
        tomorrow.year = d.year;
    }

    return tomorrow;
}