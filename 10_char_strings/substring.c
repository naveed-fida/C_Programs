#include <stdio.h>

void substring(char str[], int idx, int count, char sub[]);

int main(void)
{
    char sbstr1[10];
    char sbstr2[10];
    char sbstr3[10];
    char sbstr4[10];

    substring("how do you do?", 4, 2, sbstr1); // "do"
    substring("magnetite", 5, 3, sbstr2); // "tit"
    substring("shit bag", 0, 4, sbstr3); // "shit"
    substring("shit bag", 6, 4, sbstr4); // "ag"

    printf("\n%s\t%s\t%s\t%s\n", sbstr1, sbstr2, sbstr3, sbstr4);
}

void substring(char str[], int strt_idx, int count, char sub[])
{
    int i;

    for (i = 0; i < count && str[strt_idx + i] != '\0'; i++) {
        sub[i] = str[strt_idx + i];
    }

    sub[i] = '\0';
}