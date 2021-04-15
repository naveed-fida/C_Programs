/*
 * Write a function right_rot(x,n) that returns the value of the integer x
 * rotated to the right by n positions.
 */

#include <stdio.h>

int right_rot(unsigned x, int n);

int main()
{
    printf("%u\n", right_rot(31, 3)); // 3758096387
    return 0;
}

int right_rot(unsigned x, int n)
{
    size_t word_size = sizeof(unsigned) * 8;
    n = n % word_size;

    if (n == 0) return;

    unsigned n_right_bits_shifted_left = (x & ~(~0u << n)) << (word_size - n);
    return (x >> n) | n_right_bits_shifted_left;
}