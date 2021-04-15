/*
 * Exercise 4-1: Write the function strindex(s,t) which returns the position of the
 * rightmost occurrence of t in s, or -1 if there is none.
 */
#include <stdio.h>
#include <string.h>

int str_index(char s[], char t);

int main()
{
    char s[] = "how do you do?";
    printf("%i\n", str_index(s, getchar()));

    return 0;
}

int str_index(char s[], char t)
{
    int idx = strlen(s);
    while(--idx != -1 && s[idx] != t) ;

    return idx;
}

