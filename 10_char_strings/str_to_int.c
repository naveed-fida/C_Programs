#include <stdio.h>

int strToInt(char str[])
{
    int result = 0;

    for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++) {
        result = result * 10 + (str[i] - '0'); 
    }

    return result;
}

int main(void) {
    printf("%i\n", strToInt("234"));
    printf("%i\n", strToInt("0"));
    printf("%i\n", strToInt("888"));
}