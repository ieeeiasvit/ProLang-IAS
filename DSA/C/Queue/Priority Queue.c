// Implementation of Priority Queue in C

#include<stdio.h>
int Q[100], Pr[100];
int r = -1, f = -1, size = 0;
void enqueue(int data, int p);
void print();
void dequeue();
int main()
{
	int n, data, p, input = 0;
	printf("What is the size of the queue?\n");
	scanf("%d", &size);
	while (input != 4)
	{
		printf("\n\nEnter the number of your choice:\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			printf("Enter the number of data\n");
			scanf("%d", &n);
			printf("Enter your data and Priority of data\n");
			for (int counter = 0; counter < n; counter++)
			{
				scanf("%d %d", &data, &p);
				enqueue(data, p);
			}
			break;
		case 2:
			dequeue();
			break;
		case 3:
			print();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("Invalid Input\n");
		}
	}
	return 0;
}
void enqueue(int data, int p)
{
	int i;
	if ((f == 0) && (r == size - 1))
		printf("Queue is full");
	else
	{
		if (f == -1)
		{
			f = r = 0;
			Q[r] = data;
			Pr[r] = p;
		}
		else if (r == size - 1)
		{
			for (i = f; i <= r; i++) 
			{
				Q[i - f] = Q[i]; 
				Pr[i - f] = Pr[i]; 
				r = r - f;
				f = 0; 
				for (i = r; i > f; i--)
				{
					if (p > Pr[i])
					{
						Q[i + 1] = Q[i];
						Pr[i + 1] = Pr[i];
					}
					else
						break;
					Q[i + 1] = data;
					Pr[i + 1] = p;
					r++;
				}
			}
		}
		else
		{
			for (i = r; i >= f; i--)
			{
				if (p > Pr[i])
				{
					Q[i + 1] = Q[i];
					Pr[i + 1] = Pr[i];
				}
				else
					break;
			}
			Q[i + 1] = data;
			Pr[i + 1] = p;
			r++;
		}
	}
}
void dequeue()
{
	if (f == -1)
	{
		printf("Queue is Empty");
	}
	else
	{
		printf("Deleted Element = %d\t Its Priority = %d", Q[f], Pr[f]);
		if (f == r)
			f = r = -1;
		else
			f++;
	}
}
void print()
{
	int i;
	for (i = f; i <= r; i++)
	{
		printf("\nElement = %d\tPriority = %d", Q[i], Pr[i]);
	}
}