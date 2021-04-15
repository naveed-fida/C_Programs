#include <stdio.h>
#define MAXLINE 1000

int get_line(char [], int);
void reverse(char []);

int main()
{
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0) {
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

void reverse(char line[])
{
    int i = 0, j;
    char temp;

    for (j = 0; line[j] != '\0'; j++) ;
    j--;

    if (line[j] == '\n')
        j--;

    while (i < j) {
        temp = line[i];
        line[i++] = line[j];
        line[j--] = temp;
    }
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