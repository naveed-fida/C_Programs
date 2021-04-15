#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* lower: converts upper case to lower case
 * upper: converts lower case to upper case
 */

int main(int argc, char *argv[])
{
    int c;
    int (*func)(int) = strcmp(argv[0], "./lower") == 0 ? tolower : toupper;
    while((c = getchar()) != EOF) putchar((*func)(c));
}