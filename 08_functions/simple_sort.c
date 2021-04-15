#include <stdio.h>

void sort(int arr[], int len);

int main(void) {
    int nums[] = {9, 2, 6, 5, 4, 1, 3, 7, 8, 10};

    sort(nums, 10);

    for (int i = 0; i < 10; i++)
        printf("%i\n", nums[i]);

    return 0;
}

void sort(int arr[], int len)
{
    int temp;

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len;  j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}