#include <stdio.h>

void test(int *int_pointer)
{
    *int_pointer = 100;
}

int main(void)
{
    int i = 50;

    printf("Before the call to test i = %i.\n", i);
    test(&i);
    printf("After the call to test i = %i.\n", i);
}