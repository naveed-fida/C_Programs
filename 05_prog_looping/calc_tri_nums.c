// calculate triangular numbers five times
#include <stdio.h>

int calculateTriNum(int num) {
    int triangularNum = 0;    

    for (int n = 1; n <= num; n++) {
        triangularNum += n;
    }

    return triangularNum;
}

int main(void) 
{
    int number, timesToCalc;
    
    printf("How many triangular numbers do you want to calculate?\n");
    scanf("%i", &timesToCalc);

    for (int counter = 0; counter < timesToCalc; counter++) {
        printf("What triangular number do you want?\n");
        scanf("%i", &number);
        
        printf("Triagular number %i is %i\n", number, calculateTriNum(number));
    }

    return 0;
}