#include <stdio.h>
int main()
{
    int sumUp(int *valuePtr, int n);
    
    int values[] = {1, 2, 3, 4, 5, 6};

    printf("%i\n", sumUp(values, 6));
    return 0;
}

int sumUp(int *valuePtr, int n) 
{
    int sum = 0, *endPtr = valuePtr + n;

    for (; valuePtr < endPtr; valuePtr++)
        sum += *valuePtr;

    return sum;

}