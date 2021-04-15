#include <stdio.h>

int get_line(char[], int);
int remove_trail(char[]);

#define MAXLINE 1000

int main()
{
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0)
        if (remove_trail(line) > 0)
            printf("%s", line);

    return 0;
}

int remove_trail(char line[])
{
    int i;
    for (i = 0; line[i] != '\n'; i++) ;
    i--;

    for (; line[i] == ' '; i--) ;

    if (i >= 0) {
        line[++i] = '\n';
        line[++i] = '\0';
    }
    
    return i;
}

int get_line(char line[], int limit)
{
    int c, i;
    for (i=0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}