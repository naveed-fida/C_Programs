#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void reverse(char s[]);
void num_to_str(int num, char s[]);

int main()
{
    char str1[10];
    num_to_str(12345, str1);

    printf("%s\n", str1);
}

void num_to_str(int num, char s[])
{
    int i = 0;
    bool negative = num < 0;

    if (!negative)
        num = -num;

    do {
        s[i++] = -(num % -10) + '0';
    } while ((num /= 10) < 0);
    
    if (negative)
        s[i++] = '-';
    
    s[i] = '\0';

    reverse(s);
}



void reverse(char s[])
{   
    int i, j, temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}