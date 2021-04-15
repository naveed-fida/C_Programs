#include <stdio.h>

#define BUFF_SIZE 10

char buffer[BUFF_SIZE];

int buff_p = 0;

int getch(void)
{
    return (buff_p > 0) ? buffer[--buff_p] : getchar();
}

void ungetch(int c)
{
    if (buff_p >= BUFF_SIZE)
        printf("ungetch: too many characters\n");
    else
        buffer[buff_p++] = c;
}
