// Implementation of Stack Operations in C

#include <stdio.h>
void insert(int element);
void delete();
void display();
void search(int element);
int top = -1;
int size = 0;
int stack[100];

void main()
{
	printf("What is the size of the stack?\n");
	scanf("%d", &size);
	int input = 0;
	while (input != 5)
	{
		printf("\n\nEnter the number of your choice:\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Search\n");
		printf("5. Exit\n");
		scanf("%d", &input);
		printf("\n");
		if (input == 1)
		{
			if (top == size - 1)
				printf("Stack overflow\n");
			else
			{
				int element = 0;
				printf("Which element do you want to insert?\n");
				scanf("%d", &element);
				insert(element);
			}
		}
		else if (input == 2)
		{
			if (top < 0)
				printf("Stack underflow\n");
			else
				delete();
		}
		else if (input == 3)
		{
			display();
		}
		else if (input == 4)
		{
			int element = 0;
			printf("Which element do you want to search for?\n");
			scanf("%d", &element);
			search(element);
		}
		else if (input == 5)
		{
			break;
		}
		else
		{
			printf("Invalid Input\n");
			continue;
		}
	}
}

void insert(int element)
{
	top++;
	stack[top] = element;
}

void delete()
{
	top--;
}

void display()
{
	printf("Stack:\n");
	if (top < 0)
		printf("Empty Stack");
	else
	{
		for (int counter = 0; counter <= top; counter++)
		{
			printf("%d\t", stack[counter]);
		}
		printf("\n");
	}
}

void search(int element)
{
	int check = -1;
	for (int counter = 0; counter <= top; counter++)
	{
		if (stack[counter] == element)
		{
			printf("\n%d is present in the stack\n", element);
			check++;
			break;
		}
	}
	if (check == -1)
		printf("\n%d is not present in the stack\n", element);
}