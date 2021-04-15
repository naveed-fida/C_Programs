#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int calculateDateVal(struct date d);
int dateDifference(struct date d1, struct date d2);
int yearVal(int y, int m);
int monthVal(int m);

int main(void) {
    struct date date1, date2;

    printf("Enter the first date (dd mm yyyy)\n");
    scanf("%i%i%i", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (dd mm yyyy)\n");
    scanf("%i%i%i", &date2.day, &date2.month, &date2.year);

    printf("The difference between the two dates is ");
    printf("%i days.\n", dateDifference(date1, date2));
}

int dateDifference(struct date d1, struct date d2)
{
    int dateVal1 = calculateDateVal(d1);
    int dateVal2 = calculateDateVal(d2);

    return dateVal2 - dateVal1;
}

int calculateDateVal(struct date d)
{
    int yVal = yearVal(d.year, d.month);
    int mVal = monthVal(d.month);

    return 1461 * yVal / 4 + 153 * mVal / 5 + d.day;
}

int yearVal(int year, int month)
{
    return month <= 2 ? year - 1 : year;
}

int monthVal(int month)
{
    return month <= 2 ? month + 13 : month + 1;
}