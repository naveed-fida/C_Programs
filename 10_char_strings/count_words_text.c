#include <stdio.h>
#include <stdbool.h>

bool isAlpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int countWords(char s[])
{
    bool lookingForWord = true;
    int wordCount = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isAlpha(s[i])) {
            if (lookingForWord) {
                wordCount++;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }

    return wordCount;
}

void readLine(char buffer[])
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

int main(void) {
    char line[100];
    bool endOfText = false;
    int wordCount = 0;

    printf("=> Type in your text:\n");
    printf("=> When you're done, please press 'RETURN':\n\n");

    while (true) {
        readLine(line);
        if (line[0] == '\0')
            break;

        wordCount += countWords(line);
    }

    // while (!endOfText) {
    //     readLine(line);

    //     if (line[0] == '\0')
    //         endOfText = true;

    //     else
    //         wordCount += countWords(line);
    // }

    printf ("=> There are %i words in the above text.\n", wordCount);
    return 0;
}