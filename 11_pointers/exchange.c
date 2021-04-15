#include <stdio.h>

int main(void) {
    void exchange(int *i1, int *i2);
    
    int i = 12, j = 15;

    printf("i = %i, j = %i\n", i, j);

    exchange(&i, &j);

    printf("i = %i, j = %i\n", i, j);

    return 0;
}

void exchange(int *i1, int *i2)
{
    int temp = *i1;
    *i1 = *i2;
    *i2 = temp;
}