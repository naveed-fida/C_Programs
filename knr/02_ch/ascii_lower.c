#include <stdio.h>

char char_to_lower(char c);
void str_to_lower(char str[]);

int main()
{
    char str[] = "How Do YoU dO?";
    str_to_lower(str);
    printf("%s\n", str);
    return 0;
}

void str_to_lower(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = char_to_lower(str[i]);
    }
}

char char_to_lower(char c)
{
    if (c >= 'A' && c <='Z')
        return c + 'a' - 'A';
    else
        return c;
}