#include <stdio.h>

typedef unsigned char *byte_pointer;

void showBytes(byte_pointer start, size_t length)
{
    byte_pointer next;

    for (next = start; next < start + length; next++)
        printf("%.2x ", *(next));
    
    printf("\n");
}

void showInt(int x)
{
    showBytes((byte_pointer) &x, sizeof(int));
}

void showShort(short x)
{
    showBytes((byte_pointer) &x, sizeof(short));
}

void showLong(long x)
{
    showBytes((byte_pointer) &x, sizeof(long));
}

void showDouble(double x)
{
    showBytes((byte_pointer) &x, sizeof(double));
}

int main(void)
{
    // showShort(55);
    // showLong(11);
    // showDouble(12.125);

    showInt(-32769);
    return 0;
}