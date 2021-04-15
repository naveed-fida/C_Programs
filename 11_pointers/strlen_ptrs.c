#include <stdio.h>

int main()
{
    int stringLength(const char *str);

    printf("%i\n", stringLength("how do you do?"));
    printf("%i\n", stringLength(""));
    printf("%i\n", stringLength("complete"));
}

int stringLength(const char *str)
{
    const char *ptr = str;
 
    while(*ptr)
        ptr++;

    return ptr - str;
}