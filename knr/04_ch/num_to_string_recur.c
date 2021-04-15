#include <stdio.h>

int main()
{
    void num_to_string(int n, char s[]);

    char s[6];
    num_to_string(1, s);
    printf("%s\n", s);
}

void num_to_string(int n, char s[])
{
    static int idx = 0;

    if (n < 0) {
        s[idx++] = '-';
        n = -n;
    }

    if (n / 10)
        num_to_string(n / 10, s);

    s[idx++] = (n % 10) + '0';
    s[idx] = '\0';
}