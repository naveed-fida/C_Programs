#include <stdio.h>

void sort(int arr[], int len);

int main(void) {
    int nums[] = { 9, 2, 6, 5, 4, 1, 3, 7, 8, 10 };

    sort(nums, 10);

    for (int i = 0; i < 10; i++)
        printf("%i\n", nums[i]);

    return 0;
}

void sort(int *arr, int len)
{
    int temp;

    for (int *ptr1 = arr; ptr1 < arr + len - 1; ptr1++) {
        for (int *ptr2 = ptr1 + 1; ptr2 < arr + len;  ptr2++) {
            if (*ptr1 > *ptr2) {
                temp = *ptr2;
                *ptr2 = *ptr1;
                *ptr1 = temp;
            }
        }
    }
}