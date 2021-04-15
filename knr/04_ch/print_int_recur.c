#include <stdio.h>

void print_int(int n);

int main()
{
    print_int(1234);
    putchar('\n');
    return 0;
}

void print_int(int n)
{
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n / 10)
        print_int(n / 10);

    putchar((n % 10) + '0');
}