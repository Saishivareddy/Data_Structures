#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	int n,i;
	struct node *head, *new, *temp;
	head = 0;
	printf("Enter the size of the linked list : ");
	scanf("%d", &n);
	printf("Enter %d elements to linked list :\n", n);
	for(i = 0;i < n;i++)
	{
		new = (struct node *)malloc(sizeof(struct node));
		printf("Enter %d element : ",i+1);
		scanf("%d", &new->data);
		new->next = 0;
		if(head == NULL)
		{
			head = temp = new;
		}
		else
		{
			temp->next = new;
			temp = new;
		}
	}
	printf("Linked list is :\t");
	for(temp = head;temp !=0; temp=temp->next)
	{
		printf("%d\t", temp->data);
	}
	printf("\n");
	return 0;
}
