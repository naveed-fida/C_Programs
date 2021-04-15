#include <stdio.h>

void squeeze(char [], char []);
void squeeze2(char [], char []);


int main()
{
    char str[] = "How do you do sir? Jolly good, I hope!";
    squeeze2(str, "doodle");

    printf("%s\n", str);
    return 0;
}

void squeeze(char from[], char remove[])
{
    int i, j, k;
    char c;
    for (i = 0; remove[i] != '\0'; i++) {
        c = remove[i];
        for (j = k = 0; from[j] != '\0'; j++)
            if (from[j] != c)
                from[k++] = from[j];
        from[k] = '\0';
    }
}

void squeeze2(char from[], char remove[])
{
    int i, j, k;
    char c;

    for (i = j = 0; from[i] != '\0'; i++) {
        c = from[i];
        for (k = 0; remove[k] != '\0' && remove[k] != c; k++) ;

        if (remove[k] == '\0')
            from[j++] = c;
    }

    from[j] = '\0';
}
