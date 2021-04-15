/*
 * Exercise 5-4. Write the function str_end(s,t), which returns 1 if the
 * string t occurs at the end of the string s, and zero otherwise.
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool str_end(char *, char *);

    printf("%s\n", str_end("abc", "abc") ? "true" : "false");
    printf("%s\n", str_end("abcde", "cde") ? "true" : "false");
    printf("%s\n", str_end("abc", "xy") ? "true" : "false");
    printf("%s\n", str_end("abc", "abcde") ? "true" : "false");
    printf("%s\n", str_end("abc", "") ? "true" : "false");

    return 0;
}

bool str_end(char *p1, char *p2)
{
    char *bp1 = p1;
    char *bp2 = p2;

    for (; *p1; p1++) ;
    for (; *p2; p2++) ;

    for (; *p1 == *p2; p1--, p2--) {
        if (p1 == bp1 || p2 == bp2)
            break;
    }

    if (*p1 == *p2 && p2 == bp2 && *p1 != '\0')
        return true;
    else
        return false;
}
