#include <stdio.h>

int * create_arr1();
void create_arr2();

int main()
{
    int *ptr = create_arr1();
    printf("%i\n", ptr[0]);
    create_arr2();
    printf("%i\n", ptr[0]);
    return 0;
}

int * create_arr1()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    return arr; 
}

void create_arr2()
{
    int arr[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }; 
}