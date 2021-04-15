#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main(void) 
{
    char str[] = "doodle", str2[] = "";
    reverse(str);
    printf("%s\n", str); // eldood

    reverse(str2);
    printf("%s\n", str2); // eldood

    return 0;
}

void reverse(char str[])
{
    void reverseHelper(char str[], int idx1, int idx2);

    reverseHelper(str, 0, strlen(str) - 1);
}
  
void reverseHelper(char str[], int iStart, int iEnd)
{
    if (iStart >= iEnd) return;

    char temp = str[iStart];
    str[iStart] = str[iEnd];
    str[iEnd] = temp;

    reverseHelper(str, ++iStart, --iEnd);
}
