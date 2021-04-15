#include <stdio.h>

int stringLength(const char str[])
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;
}

int main(void) {
  const char word[] = "aster"; // equivalent to {'a', 's', 't', 'e', 'r', '\0'}
  printf("%i\n", stringLength(word));  
}