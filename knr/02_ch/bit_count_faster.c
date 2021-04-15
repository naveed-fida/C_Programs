#include <stdio.h>

int bit_count(unsigned);

int main()
{
    printf("%i\n", bit_count(191)); // 7
    return 0;
}

int bit_count(unsigned x)
{
    int one_bits = 0;

    // while (x) {
    //     one_bits += (x & 1);
    //     x = x >> 1;
    // }
    while (x) {
        x &= x - 1;
        one_bits++;
    }

    return one_bits;
}