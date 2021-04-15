#include <stdio.h>
#include <stdbool.h>

bool isAlpha(char c);
int countWords(char s[]);

int main(void) {
    char text1[] = "Well, here goes.";
    char text2[] = "And here we go... again.";

    printf ("%s - words = %i\n", text1, countWords (text1));
    printf ("%s - words = %i\n", text2, countWords (text2));

    return 0;
}

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