#include <stdio.h>
#include <limits.h>
#include <float.h>
enum boolean {
    false = 0,
    true
};

int main(void)
{
/*
    char str[] = "Hello ";
    printf("Hello" "World!\n"); // string constant concatenation. Done at compile time.
*/

/*
    enum boolean flag = true;

    if (flag) {
        printf("how do you do?\n");
    }
*/

/*
    const char str[] = "Howdy"; // error
    str[3] = 'b';

    printf("%s\n", str);
 */

//    printf("signed char min = %d\n", (char) ~((unsigned char) -1 >> 1));
//    printf("signed char min = %d\n", SCHAR_MIN);
//    printf("float maximum: %f\n", FLT_MAX / 2 - 35);
//    printf("%d\n", (~(~0u << 3)));
    // unsigned word_size = sizeof(unsigned) * 8;
    // printf("%u\n", (15 >> 3) | (15 & ~(~0u << 3)) << word_size - 3);
    int x = -32768;
    unsigned char *ptr = (unsigned char *) (&x);
    for (int i = 0; i < sizeof(int); i++) {
        // printf("%.2x ", *(ptr + i));

        unsigned char byteNum = *(ptr + i);
        for (int j = 0; j < 8; j++)
            printf("%u", ((byteNum << j) & ((unsigned char) (1 << 7))) >> 7);
        printf(" ");
    }

    printf("\n");
}