// program to generate a table of triangular numbers
#include <stdio.h>

int main(void)
{
    int triagularNum = 0, n;

    printf(" n       Sum from 1 to n\n");
    printf("---      ---------------\n");

    for (n = 1; n <= 10; n++) {
        triagularNum += n;
        printf("%2i              %i\n", n, triagularNum);
    }
    return 0;
}
