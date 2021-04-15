#include <stdio.h>
#define MAXLINE 1000

void copy(char to[], char from[]);
int get_line(char line[], int limit);

int main()
{
    char line[MAXLINE], longest[MAXLINE];
    int longest_length, length;

    while ((length = get_line(line, MAXLINE)) != 0) {
        if (length > longest_length) {
            longest_length = length;
            copy(longest, line);
        }
    }

    printf("%s\n", longest);
}

int get_line(char line[], int limit)
{
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; i++) ;
}