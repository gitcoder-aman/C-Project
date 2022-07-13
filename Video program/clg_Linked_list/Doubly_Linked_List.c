#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int x;
    struct node *next;
};
struct node *start;
void Add_Node();
void Display();
int main()
{
    int op;
    do
    {
        printf("\n--------MENU-------------");
        printf("\n1) Add_Node\n 2)Display ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            Add_Node();
            break;
        case 2:
            Display();
            break;
        default:
            printf("\nInvalid Choice:");
            break;
        }
    } while (1);
}
void Add_Node()
{
    struct node *ptr, *last;
    ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\nMemory Element is Not Available:");
        return;
    }
    printf("\nEnter Element in Node:");
    scanf("%d", &ptr->x);

    if (start == NULL)
    {
        start = ptr;
        ptr->prev = NULL;
        ptr->next = NULL;
    }
    else
    {
        last = start;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = ptr;
        ptr->prev = last;
        ptr->next = NULL;
    }
}
void Display()
{
    struct node *ptr;
    ptr = start;
    do
    {
        printf("\nElement=%d", ptr->x);
        ptr = ptr->next;
    } while (ptr != NULL);
}