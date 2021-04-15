#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char *join_int_arr(int [], int, char *);
    int numbers[] = { 112, 211, 398, 420, 511,
                      622, 70000, 85, 98, 101 };
    int count     = sizeof(numbers) / sizeof(int);

    printf("%s\n", join_int_arr(numbers, count, ", "));
    return 0;
}

char *join_int_arr(int arr[], int n, char *delim)
{
    void num_to_str(int, char []);
    char *string = malloc(1000);
    char *strcp = string;
    char num_str[12];

    for (int i = 0; i < n; i++) {
        num_to_str(arr[i], num_str);

        for (int j = 0; num_str[j] != '\0'; j++) *strcp++ = num_str[j] ;
        if (i < n - 1)
            for (int j = 0; delim[j] != '\0'; j++) *strcp++ = delim[j];
    }

    *strcp = '\0';
    return string;
}

void num_to_str(int num, char s[])
{
    void reverse(char []);
    int i = 0;
    bool negative = num < 0;

    if (!negative) num = -num;
    do {
        s[i++] = -(num % -10) + '0';
    } while ((num /= 10) < 0);
    if (negative) s[i++] = '-';
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