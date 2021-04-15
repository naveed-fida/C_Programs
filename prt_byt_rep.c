#include <stdio.h>

typedef unsigned char *byte_pointer;

void showBytes(byte_pointer start, size_t len)
{
    int i;

    for (i = 0; i < len; i++)
        printf(" %.2x", *(start + i)); // OR start[i]

    printf("\n");
}

void showInt(int x)
{
    showBytes((byte_pointer) &x, sizeof(int));
}

void showFloat(float x)
{
    showBytes((byte_pointer) &x, sizeof(float));
}

void showPointer(void *x)
{
    showBytes((byte_pointer) &x, sizeof(void *));
}

int main(void)
{
    // int ival = 12345;
    // float fval = (float) ival;
    // int *pval = &ival;
    // showInt(ival);
    // showFloat(fval);
    // showPointer(pval);

    // show two's complement's representation in hex

    short x = 12345;
    short mx = -x;

    showBytes((byte_pointer) &x, sizeof(short));
    showBytes((byte_pointer) &mx, sizeof(short));

    return 0;
}