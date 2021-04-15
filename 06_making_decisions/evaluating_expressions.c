// this program evaluates a simple arithmetic expression with two
// operands

#include <stdio.h>

int main(void) {
    float num1, num2;
    char operator;
    float result;

    printf("Please enter your expression\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        result = num1 / num2;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}