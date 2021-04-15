/* Prints as much of the line as possible but print the whole length */

#include <stdio.h>
#define MAXLINE 50

void copy(char to[], char from[]);
int get_line(char line[], int limit);

int main()
{
    char line[MAXLINE], longest[MAXLINE];
    int longest_length = 0, length;

    while ((length = get_line(line, MAXLINE)) > 0) {
        if (length > longest_length) {
            longest_length = length;
            copy(longest, line);
        }
    }

    if (longest_length > 0)
        printf("length: %i, text: %s\n", longest_length, longest);

    return 0;
}

int get_line(char line[], int limit)
{
    int c, len_counter, line_idx = 0;
    for (len_counter = 0; (c = getchar()) != EOF && c != '\n'; ++len_counter) {
        if (len_counter < limit - 2) {
            line[line_idx] = c;
            line_idx++;
        }
    }
    
    if (c == '\n') {
        line[line_idx] = c;
        ++line_idx;
        ++len_counter;
    }

    line[line_idx] = '\0';
    return len_counter;
}

void copy(char to[], char from[])
{
    int i;
    for (i = 0; (to[i] = from[i]) != '\0'; i++) ;
}
