#include <stdio.h>

int main() {
//    void print_ints(int [], int);
//    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
//        length = sizeof(numbers) / sizeof (int);
    char *create_arr();
    char *create_arr2();

    char *p = create_arr();
    create_arr2();

    putchar(p[0]);

//    print_ints(numbers, length);
}

char *create_arr()
{
    char arr[] = {'a', 'b', 'c'};
    return arr;
}

char *create_arr2()
{
    char arr[] = {'d', 'e', 'f'};
    return arr;
}

void print_ints(int nums[], int length)
{
    for (int i = 0; i < length; i++) {
        printf(i < length - 1 ? "%i, " : "%i", nums[i]);
    }

    printf("\n");
}