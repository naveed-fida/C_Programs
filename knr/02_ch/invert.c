/*
 * Write a function invert(x,p,n) that returns x with the n bits that begin at position p
 * inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
 */

#include <stdio.h>

int main()
{
    void print_bits(unsigned x);
    unsigned invert(unsigned, int, int);

    printf("before: ");
    print_bits(-1);
    printf("after: ");
    print_bits(invert(-1, 15, 4));
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned ones_mask_at_p = ~(~0 << n) << (p+1-n);
    return x ^ ones_mask_at_p;
}

void print_bits(unsigned x)
{
    unsigned bits_in_int = sizeof(int) * 8;
    unsigned signed_min = 1 << (bits_in_int - 1);

    for (int i = 0; i < bits_in_int; i++) {
        printf("%c", x & signed_min ? '1' : '0');
        x = x << 1;
    }

    printf("\n");
}
