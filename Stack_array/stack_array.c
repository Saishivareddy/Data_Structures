#include <stdio.h>
#include <stdlib.h>

#define size 10
int stack[size];
int top = -1;

void push(void );
void pop(void);
void display();
void isEmpty();
void peek();


int main()
{
	int choice;
	while(1)
	{
		printf("Enter your choice : \n1. Push \n2. Pop \n3. Display \n4. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Choose the correct option\n");
		}
	}
	return 0;
}

void push()
{
	int n;
	printf("Enter an Integer to push : ");
	scanf("%d", &n);
	if(top == size - 1)
	{
		printf("Stack Overflow");
	}
	else
	{
		printf("%d pushed into stack\n",n);
		top++;
		stack[top] = n;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("%d is popped from stack\n", stack[top]);
		top--;
	}
}
void isEmpty()
{
	if(top == -1)
	{
		printf("Stack is Empty\n");
	}
}

void display()
{
	printf("Stack is :\t");
	for(int i = 0; i <= top;i++)
	{
		printf("%d\t", stack[i]);
	}
	printf("\n");
}

void peek()
{
	printf("peek is %d\n", stack[top]);
}

