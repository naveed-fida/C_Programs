#include <stdio.h>
#include "../print_l.h"

#define swap(t, a, b) t temp = a;\
    a = b;\
    b = temp;

int main()
{
    int var1 = 1;
    int var2 = 2;
    swap(int, var1, var2);

    print_l("var1: %i, var2: %i", var1, var2);
    print_l("Howdy World");
}