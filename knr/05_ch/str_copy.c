#include <stdio.h>

int main()
{

}

void str_copy_v1(char to[], char from[])
{
    for (int i = 0; (to[i] = from[i]) != '\0'; i++) ;
}

void str_copy_v2(char *to, char *from)
{
    while (*to++ = *from++) ;
}