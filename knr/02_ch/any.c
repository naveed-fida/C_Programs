// return location in str1 where any character of str2 occurs or -1
#include <stdio.h>

int any(char [], char []);

int main()
{
    printf("%i\n", any("how is it possible?", "remove")); // 1
    printf("%i\n", any("how is it possible?", "cramped")); // 10
    printf("%i\n", any("how is it possible?", "dr")); // -1

    return 0;
}

int any(char to_look_in[], char look_from[])
{
    int i, j;
    char c;

    for (i = 0; to_look_in[i] != '\0'; i++) {
        c = to_look_in[i];
        for (j = 0; look_from[j] != '\0' && look_from[j] != c; j++) ;

        if (look_from[j] != '\0') // if (look_from[j] == c)
            return i;
    }

    return -1;
}
