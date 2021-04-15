// program finds prime numbers upto 50

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool isPrime;

    for (int p = 1; p <= 50; p++) {
        isPrime = true;

        for (int d = 2; d < p && isPrime; d++) {
            if (p % d == 0) 
                isPrime = false; 
        }

        if (isPrime)
            printf("%i  ", p);
    }

    printf("\n");
    return 0;
}