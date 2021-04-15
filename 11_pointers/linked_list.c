#include <stdio.h>

struct node
{
    int val;
    struct node *next;
};

int main(void)
{
    void printList(struct node *pointer);

    struct node n1 = {100}, n2 = {200}, n3 = {300}, *list_pointer;

    list_pointer = &n1;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = (struct node *) 0;

    printList(list_pointer);

    return 0;
}

void printList(struct node *pointer) {
    while (pointer != (struct node *) 0) {
        printf("%i\n", (*pointer).val); // OR pointer->val
        pointer = (*pointer).next;
    }
}