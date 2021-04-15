#include <stdio.h>

int main(void) {
    char s1[81], s2[81], s3[81];

    printf("Enter Text: \n");
    scanf("%80s%80s%80s", s1, s2, s3); // note the & is not required

    printf("\ns1: %s\ns2: %s\ns3: %s\n", s1, s2, s3);
}