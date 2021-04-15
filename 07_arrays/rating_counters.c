// program that counts each rating from 1-10
#include <stdio.h>

int main(void) {
    int ratingCounters[11], response;

    for (int i = 1; i <= 10; i++)
        ratingCounters[i] = 0;

    printf("Enter your responses\n");

    for (int i = 0; i < 20; i++) {
        scanf("%i", &response);
        
        if (response < 1 || response > 10)
            printf("Bad response: %i\n", response);
        else
            ratingCounters[response] += 1;
    }

    printf ("\n\nRating      Number of Responses\n");
    printf ("------      -------------------\n");
    
    for(int i = 1; i <= 10; ++i)
        printf ("%4i%16i\n", i, ratingCounters[i]);

    return 0;
}