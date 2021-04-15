#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINES 5000

int read_lines(char *line_ptrs[], int max_lines); // returns -1 if file length exceeds line count
void write_lines(char *line_ptrs[], int line_count);
void sort_lines(char *line_ptrs[], int line_count);

int main()
{
    char *line_ptrs[MAX_LINES];
    int line_count;

    if ((line_count = read_lines(line_ptrs, MAX_LINES)) >= 0) {
        sort_lines(line_ptrs, line_count);
        write_lines(line_ptrs, line_count);
        return 0;
    } else {
        printf("Error: input too big\n");
        return -1;
    }
}

#define MAX_LEN 1000
int get_line(char [], int);

int read_lines(char *line_ptrs[], int max_lines)
{
    int len, line_count = 0;
    char *p, line[MAX_LEN];

    while ((len = get_line(line, MAX_LEN)) > 0) {
        if (line_count > max_lines || (p = malloc(len)) == NULL) {
            return -1;
        } else {
            line[len - 1] = '\0'; /* delete newline */
            strcpy(p, line);
            line_ptrs[line_count++] = p;
        }
    }

    return line_count;
}

void write_lines(char *line_ptrs[], int line_count)
{
    int i = 0;
    for (; i < line_count; i++) {
        printf("%s\n", line_ptrs[i]);
    }
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

void sort_lines(char * arr[], int len) {
    int smallest_i, i = 0;
    char *temp;

    for (i = 0; i < len - 1; i++) {
        smallest_i = i;
        for (int j = i+1; j < len; j++) {
            if (strcmp(arr[j], arr[smallest_i]) < 0)
                smallest_i = j;
        }

        temp = arr[i];
        arr[i] = arr[smallest_i];
        arr[smallest_i] = temp;
    }
}