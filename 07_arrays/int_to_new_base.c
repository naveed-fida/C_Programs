// converts a given base-10 number to a specified base

#include <stdio.h>

int main(void) {
    char convertedNum[64];
    const char baseConversion[] = { '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    int numToConvert, base, index = 0;

    printf("Enter the number you want to convert\n");
    scanf("%i", &numToConvert);

    printf("Enter the new base\n");
    scanf("%i", &base);


    while (numToConvert != 0) {
        convertedNum[index] = baseConversion[numToConvert % base];
        numToConvert = numToConvert / base;
        index++;
    }

    for (--index; index >= 0; index--) {
        printf("%c", convertedNum[index]);
    }

    printf("\n");

    return 0;
}