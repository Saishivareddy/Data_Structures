#include <stdio.h>
#include <stdlib.h>

void create();
void insert();
void insertEnd();
void insertPos();
void delete ();
void deleteEnd();
void deletePos();
void display();

struct node
{
	int data;
	struct node *next;
};

struct node *head, *new, *temp;

int main()
{
	int choice;
	while (1)
	{
		printf("\nEnter your choice :\n1-> Create a Linked List\n2-> Insert a node at Beginning\n3-> Insert a node at End\n4-> Insert a node at given position\n5-> Delete a node from Beginning\n6-> Delete a node from End\n7-> Delete a node from a given position\n8-> Display the Linked List\n9-> Exit\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			create();
			break;
		case 2:
			insert();
			break;
		case 3:
			insertEnd();
			break;
		case 4:
			insertPos();
			break;
		case 5:
			delete ();
			break;
		case 6:
			deleteEnd();
			break;
		case 7:
			deletePos();
			break;
		case 8:
			display();
			break;
		case 9:
			exit(0);
			break;
		default:
			printf("Incorrect option!!!Choose from the Below options\n");
		}
	}
	return 0;
}

void create()
{
	int n;
	head = NULL;
	printf("Enter the size of Linked list :");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
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
}

void display()
{
	temp = head;
	printf("Linked list is :\t");
	while (temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void insert()
{
	temp = head;
	new = (struct node *)malloc(sizeof(struct node));
	printf("Enter a integer to insert at Beginning :");
	scanf("%d", &new->data);
	new->next = head;
	head = new;
	printf("%d is inserted at Beginning of Linked list\n", new->data);
}

void insertEnd()
{
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new = (struct node *)malloc(sizeof(struct node));
	printf("Enter a integer to insert at End :");
	scanf("%d", &new->data);
	new->next = NULL;
	temp->next = new;
	printf("%d is inserted at End of Linked list\n", new->data);
}

void insertPos()
{
	int pos, i = 1;
	temp = head;
	printf("Enter a position to add a node :");
	scanf("%d", &pos);
	while (i < pos - 1)
	{
		temp = temp->next;
		i++;
	}
	new = (struct node *)malloc(sizeof(struct node));
	printf("Enter a integer to add at position %d :", pos);
	scanf("%d", &new->data);
	new->next = temp->next;
	temp->next = new;
	printf("%d is inserted at position %d\n", new->data, pos);
}

void delete ()
{
	if (head == NULL)
	{
		printf("Linked is Empty\n");
	}
	temp = head;
	head = temp->next;
	printf("%d is deleted from Beginning\n", temp->data);
	free(temp);
}

void deleteEnd()
{
	struct node *prev;
	temp = head;
	if (head == NULL)
	{
		printf("Linked is Empty\n");
	}
	while (temp->next != NULL)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == head)
	{
		head = NULL;
	}
	else
	{
		prev->next = NULL;
	}
	printf("%d is deleted from end\n", temp->data);
	free(temp);
}

void deletePos()
{
	struct node *delnode;
	int pos, i = 1;
	temp = head;
	printf("Enter a position to delete :");
	scanf("%d", &pos);
	while (i < pos - 1)
	{
		temp = temp->next;
		i++;
	}
	delnode = temp->next;
	temp->next = delnode->next;
	printf("%d is deleted from position %d\n", delnode->data, pos);
	free(delnode);
}
