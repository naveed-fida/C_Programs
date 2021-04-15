#include <stdio.h>

unsigned long int factorial(unsigned int n)
{
    return n == 1 ? 1 : n * factorial(n - 1);
}

int main(void)
{
    printf("factorial of 5 is: %lu\n", factorial(5));
    printf("factorial of 6 is: %lu\n", factorial(6));
    printf("factorial of 7 is: %lu\n", factorial(7));

    return 0;
}