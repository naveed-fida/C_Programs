#include <stdio.h>

int main(void)
{
    // showing how implicit casting between signed and unsigned can do
    unsigned u = 0;
    // printf("%u\n", u - 1);

    // unsigned additive inverse
    unsigned x = 1;
    unsigned y = 4294967295;
    // printf("1u + 4294967295u = %u\n", x + y); // 0

    // two's complement additive inverse
    int n = -2147483648;
    // printf("n + n: %b\n", n + n);

    unsigned un = 4294967275; // unsigned negation of 21
    // printf("%u\n", un + 22);

    // smallest positive int that can't be represented by float
    float f = 16777217;
    float f2 = 33554433;

    // printf("%f\n", f);

    // printf("%lu\n", sizeof(int)<< 3);

    // printf("%i\n", !5);

    int c = -1073741825;
    // printf("%i\n", c * 2 * 2);

    // printf("%i\n", 2147483647 + 1);
}
