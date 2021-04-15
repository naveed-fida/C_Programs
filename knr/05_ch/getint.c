#include <stdio.h>
#include <ctype.h>
#include "../print_l.h"

#define SIZE 10

int getch(void);
void ungetch(int c);

int main()
{
    int n, array[SIZE], getint(int *);

    for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++) ;

    for (n = 0; n < SIZE && array[n] != EOF; n++)
        printf("%i ", array[n]);

    print_l("");
    return 0;
}

/* getint:  get next integer from input into *pn */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch())) ; // skip white space

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();

    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');

    *pn *= sign;

    if (c != EOF)
        ungetch(c);

    return c;

}