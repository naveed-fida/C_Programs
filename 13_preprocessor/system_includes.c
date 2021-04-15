#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("%lu\n", sizeof ULONG_MAX);
    printf("%lu\n", sizeof INT_MAX);
    printf("%lu\n", sizeof FLT_MAX);

    return 0;
}