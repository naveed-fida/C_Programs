/*
 Write a function set_bits(x,p,n,y) that returns x with the n bits that begin at
 position p set to the rightmost n bits of y, leaving the other bits unchanged.
 */
#include <stdio.h>
int set_bits(unsigned, int, int, unsigned);

int main()
{
    printf("%u\n", set_bits(4567890, 9, 4, 3456789));
    return 0;
}

int set_bits(unsigned x, int p, int n, unsigned y)
{
    unsigned ones_mask_at_p = ~(~0 << n) << (p+1-n);
    unsigned zeros_mask_at_p = ~ones_mask_at_p;

    return (x & zeros_mask_at_p) | (y & ~(~0 << n)) << (p+1-n));
}