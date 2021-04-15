int str_comp(char s1[], char s2[])
{
    for (int i = 0; s1[i] == s2[i]; i++) {
        if (s1[i] == '\0')
            return 0;
    }

    return s1[i] - s2[i];
}

int str_comp_v2(char *p1, char *p2)
{
    for (; *p1++ == *p2++; p1++, p2++) {
        if (*p1 = '\0')
            return 0;
    }

    return *p1 - *p2;
}