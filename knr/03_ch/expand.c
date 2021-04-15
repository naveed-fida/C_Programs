/*
 * Write a function expand(s1,s2) that expands shorthand notations like a-z in the
 * string s1 into the equivalent complete list abc...xyz in s2. Allow for letters
 * of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9
 * and -a-z. Arrange that a leading or trailing - is taken literally.
 */

#include <stdio.h>
#include <stdbool.h>

void expand(char [], char []);
int expandRange(char, char , char [], int);
bool isValidAlphaRange(char s[], int);
bool isValidDigitRange(char s[], int);
bool isUpperAlphaRange(char s[], int);
bool isLowerAlphaRange(char s[], int);
bool isUpperAlpha(char c);
bool isLowerAlpha(char c);

int main()
{
    char s1[] = "a-z0-9k-o";
    char s2[100];

    char s3[] = "a-b-c";
    char s4[10];

    char s5[] = "-a-z-";
    char s6[50];

    expand(s1, s2);
    expand(s3, s4);
    expand(s5, s6);

    printf("%s\n", s2); // "abcdefghijklmnopqrstuvwxyz0123456789klmno"
    printf("%s\n", s4); // "abc";
    printf("%s\n", s6); // "abc";

    return 0;
}

void expand(char s1[], char s2[])
{
    int i, j = 0, c;
    for (i = 0; (c = s1[i]) != '\0'; i++) {
        if (c == '-') {
            if (isValidAlphaRange(s1, i) || isValidDigitRange(s1, i))
                j = expandRange(s1[i - 1], s1[i + 1], s2, j);
            else
                s2[j++] = c;
        }
    }

    s2[j] = '\0';
}

bool isValidRange(char s[], int i)
{
    if ((i < 1 || s[i + 1] == '\0') || s[i - 1] >= s[i + 1])
        return false;

    return isValidDigitRange(s, i) || isValidAlphaRange(s, i);
}

int expandRange(char start, char end, char str[], int idx)
{
    for (; start <= end; start++, idx++)
        str[idx] = start;

    return idx;
}

bool isValidDigitRange(char s[], int i)
{
    return s[i - 1] >= '0' && s[i + 1] <= '9';
}

bool isValidAlphaRange(char s[], int i)
{
    return isUpperAlphaRange(s, i)  || isLowerAlphaRange(s, i);
}

bool isUpperAlphaRange(char s[], int i)
{
    return isUpperAlpha(s[i - 1]) && isUpperAlpha(s[i + 1]);
}

bool isLowerAlphaRange(char s[], int i)
{
    return isLowerAlpha(s[i - 1]) && isLowerAlpha(s[i + 1]);
}

bool isUpperAlpha(char c)
{
    return c >= 'A' && c <= 'Z';
}

bool isLowerAlpha(char c)
{
    return c >= 'a' && c <= 'z';
}
