#include <stdio.h>
#include <stdlib.h>

void display(void);
void reverse(void);
struct node
{
    int data;
    struct node *next;
};

struct node *head, *new, *temp, *prev, *current, *nextnode;

int main()
{
    int size;
    printf("Enter a size of the linked list :");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter %d integer : ", i + 1);
        scanf("%d", &new->data);
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
    }
    printf("Original ");
    display();
    reverse();
    return 0;
}

void display()
{
    temp = head;
    printf("Linked list is  :\t");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverse()
{
    temp = head;
    prev = NULL;
    current = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = current->next;
        current->next = prev;
        prev = current;
        current = nextnode;
    }
    head = prev;
    printf("Reversed ");
    display();
}