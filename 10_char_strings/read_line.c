#include <stdio.h>

void readLine(char buffer[]) // an implementation of the built-in `gets`
{
    char character;
    int index = 0;

    do {
        character = getchar();
        buffer[index] = character;
        ++index;
    } while (character != '\n');

    buffer[index - 1] = '\0';
}

int main(void)
{
    char line[81];

    for (int i = 0; i < 3; i++) {
        readLine(line);
        printf("%s\n\n", line);
    }
    
    return 0;
}