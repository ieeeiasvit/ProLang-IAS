// Implementation of Job Scheduling using Queue in C

#include<stdio.h>
#include<string.h>

void add(char* job);
void cancel();
void status();
int front = -1, rear = -1;
int size = 0;
char arr[][100] = {0};

void main()
{
	printf("What is the size of the queue?\n");
	scanf("%d", &size);
	int input = 0;
	while (input != 5)
	{
		printf("\n\nEnter the number of your choice:\n");
		printf("1. Add a Job\n");
		printf("2. Cancel a Job\n");
		printf("3. Display the status of the Jobs\n");
		printf("4. Exit\n");
		scanf("%d", &input);
		printf("\n");
		if (input == 1)
		{
			if ((front == 0 && rear == size - 1) || (rear == (front - 1)))
				printf("Error : Overflow\n");
			else
			{
				char job[100];
				printf("Enter the Job to be added : \n");
				scanf("%s", job);
				add(job);
			}
		}
		else if (input == 2)
		{
			if (front == -1 && rear == -1)
				printf("Error : Underflow\n");
			else
				cancel();
		}
		else if (input == 3)
		{
			status();
		}
		else if (input == 4)
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
void add(char* job)
{
	if (front == -1 && rear == -1)
		front = 0;
	rear++;
	strcpy(arr[rear], job);
}
void cancel()
{
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
		front++;
}
void status()
{
	printf("The status of the jobs : \n");
	if (front == -1 && rear == -1)
		printf("There are no jobs");
	else
	{
		for (int counter = front; counter <= rear; counter++)
		{
			printf("%s\t", arr[counter]);
		}
		printf("\n");
	}
}