#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int main(int argc, char *argv[])
{
    int get_line(char [], int), found = 0;
    char line[MAX_LEN];

    if (argc != 2) {
        printf("usage: \"find pattern\"\n");
        return 0;
    }

    while (get_line(line, MAX_LEN) > 0) {
        if (strstr(line, argv[1]) != NULL) {
            printf("%s", line);
            found++;
        }
    }

    return found;
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