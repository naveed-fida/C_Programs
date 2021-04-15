#include <stdio.h>

float squareRoot(float n);
float absolute(float n);

int main() 
{
    printf("The square root of 55 is: %f\n", squareRoot(55));
    printf("The square root of 97 is: %f\n", squareRoot(97));
    printf("The square root of 22 is: %f\n", squareRoot(22));  
}

float absolute(float n)
{
    return n >= 0 ? n : -n;
}

float squareRoot(float n) 
{
    const float epsilon = 0.00001;
    float       guess   = 1;

    if (n < 1) {
        printf("Negative argument to squareRoot\n");
        return -1.0;
    }

    while (absolute(guess * guess - n) >= epsilon) {
        guess = (n / guess + guess) / 2;
    }

    return guess;
}
