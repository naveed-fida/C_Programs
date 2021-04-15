#include <stdio.h>
#include "metric.h"

int main(void)
{
    float liters, gallons;

    printf("**** Liters to Gallons ****\n");
    printf("Enter the number of liters: \n");
    scanf("%f", &liters);

    gallons = QUARTS_PER_LITER * liters / 4;
    printf("%g Liters = %g Gallons\n", liters, gallons);
}
