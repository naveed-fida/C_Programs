#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int hex_str_to_i(char []);
int hex_c_to_i(char);
bool in_hex(char);

int main()
{
    printf("%d\n", hex_str_to_i("001XYZd"));
    return 0;
}

int hex_str_to_i(char hex_str[])
{
    int i = 0, num = 0;
    if (strlen(hex_str) > 1 && hex_str[0] == '0' && (hex_str[1] == 'x' || hex_str[1] == 'X'))
        i = 2;
    for (; hex_str[i] != '\0'; i++)
        in_hex(hex_str[i]) && (num = 16 * num + hex_c_to_i(hex_str[i]));

    return num;
}

bool in_hex(char c)
{
    return (c >= '0' && c <= '9') ||
           (c >= 'a' && c <= 'f') ||
           (c >= 'A' && c <= 'F');
}

int hex_c_to_i(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';

    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;

    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;

    return 0;
}