/*
 * Exercise 5-3. Write a pointer version of the function strcat that we
 * showed in Chapter 2: strcat(s,t) copies the string t to the end of s.
 */
void str_cat(char *p1, char p2)
{
    for (; *p1; p1++) ;

    while (*p1++ = *p2++) ;
}