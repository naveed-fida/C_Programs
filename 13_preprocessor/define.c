#include <stdio.h>

#define YES 1
#define NO 0

int main(void)
{
    int isEven(int n);

    if (isEven(17) == YES)
        printf("yes ");
    else
        printf("no ");

    if (isEven(20) == YES)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}

int isEven(int n)
{
    if ((n & 1) == 0) // another way of saying n % 2 == 0
        return YES;
    else
        return NO;
}