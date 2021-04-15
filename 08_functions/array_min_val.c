#include <stdio.h>

int minimum(int len, int numbers[]) 
{
    int minValue = numbers[0];

    for (int i = 1; i < len; i++) {
        if (numbers[i] < minValue)
            minValue = numbers[i];
    }

    return minValue;
}

int main(void) 
{
    int scores[10]; 

    printf("Enter 10 scores...\n");

    for (int i = 0; i < 10; i++)
        scanf("%i", &scores[i]);

    printf("The minimum score is: %i\n", minimum(10, scores));

    return 0;
}