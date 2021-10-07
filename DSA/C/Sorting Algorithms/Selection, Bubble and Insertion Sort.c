// Implementation of Selection, Bubble and Insertion Sort in C

#include <stdio.h>
#include <string.h>
void selection_sort();
void bubble_sort();
void insertion_sort();
void swap(int* x, int* y);
int choice2 = 0;
void main()
{
	printf("****Sorting****");
	int choice1 = 1;
	while (choice1 != 4)
	{
		printf("\n\nHow do you want to sort?\n1. Selection Sort\n2. Bubble Sort\n3. Insertion Sort\n4. Exit\n");
		scanf("%d", &choice1);
		if (choice1 > 0 && choice1 < 4)
		{
			while (!(choice2 == 1 || choice2 == 2))
			{
				printf("\nWhat do you want to sort?\n1. Numeric\n2. String\n");
				scanf("%d", &choice2);
				if (!(choice2 == 1 || choice2 == 2))
					printf("Invalid input\n");
			}
		}
		if (choice1 == 1)
			selection_sort();
		else if (choice1 == 2)
			bubble_sort();
		else if (choice1 == 3)
			insertion_sort();
		else if (choice1 == 4)
			break;
		else
			printf("Invalid input\n");
		choice2 = 0;
	}
}
void selection_sort()
{
	if (choice2 == 1)
	{
		int n, min;
		printf("\nHow many elements do you want to sort?\n");
		scanf("%d", &n);
		int arr[100];
		printf("\nEnter the elements you want to sort\n");
		for (int counter = 0; counter < n; counter++)
			scanf("%d", &arr[counter]);
		for (int counter1 = 0; counter1 < n - 1; counter1++)
		{
			min = counter1;
			for (int counter2 = counter1 + 1; counter2 < n; counter2++)
				if (arr[counter2] < arr[min])
					min = counter2;
			swap(&arr[min], &arr[counter1]);
		}
		printf("\nElements after sorting :\n");
		for (int counter = 0; counter < n; counter++)
			printf("%d\n", arr[counter]);
	}
	else
	{
		int n, min;
		printf("\nHow many strings do you want to sort?\n");
		scanf("%d", &n);
		char arr[100][100], min_string[100];
		printf("\nEnter the strings you want to sort\n");
		for (int counter = 0; counter < n; counter++)
			scanf("%s", arr[counter]);
		for (int counter1 = 0; counter1 < n - 1; counter1++)
		{
			min = counter1;
			strcpy(min_string, arr[counter1]);
			for (int counter2 = counter1 + 1; counter2 < n; counter2++)
				if (strcmp(arr[counter2], arr[min]) < 0)
				{
					strcpy(min_string, arr[counter2]);
					min = counter2;
				}
			if (min != counter1)
			{
				char temp[100];
				strcpy(temp, arr[counter1]);
				strcpy(arr[counter1], arr[min]);
				strcpy(arr[min], temp);
			}
		}
		printf("\nStrings after sorting :\n");
		for (int counter = 0; counter < n; counter++)
			printf("%s\n", arr[counter]);
	}
}
void bubble_sort()
{
	if (choice2 == 1)
	{
		int n;
		printf("\nHow many elements do you want to sort?\n");
		scanf("%d", &n);
		int arr[100];
		printf("\nEnter the elements you want to sort\n");
		for (int counter = 0; counter < n; counter++)
			scanf("%d", &arr[counter]);
		for (int counter1 = 0; counter1 < n - 1; counter1++)
		{
			for (int counter2 = 0; counter2 < n - counter1 - 1; counter2++)
			{
				if (arr[counter2] > arr[counter2 + 1])
					swap(&arr[counter2], &arr[counter2 + 1]);
			}
		}
		printf("\nElements after sorting :\n");
		for (int counter = 0; counter < n; counter++)
			printf("%d\n", arr[counter]);
	}
	else
	{
		int n;
		printf("\nHow many strings do you want to sort?\n");
		scanf("%d", &n);
		char arr[100][100];
		printf("\nEnter the strings you want to sort\n");
		for (int counter = 0; counter < n; counter++)
			scanf("%s", arr[counter]);
		char temp[100];
		for (int counter1 = 0; counter1 < n - 1; counter1++)
		{
			for (int counter2 = counter1 + 1; counter2 < n; counter2++)
			{
				if (strcmp(arr[counter2], arr[counter1]) < 0)
				{
					strcpy(temp, arr[counter1]);
					strcpy(arr[counter1], arr[counter2]);
					strcpy(arr[counter2], temp);
				}
			}
		}
		printf("\nStrings after sorting :\n");
		for (int counter = 0; counter < n; counter++)
			printf("%s\n", arr[counter]);
	}
}
void insertion_sort()
{
	if (choice2 == 1)
	{
		int n, key;
		printf("\nHow many elements do you want to sort?\n");
		scanf("%d", &n);
		int arr[100];
		printf("\nEnter the elements you want to sort\n");
		for (int counter = 0; counter < n; counter++)
			scanf("%d", &arr[counter]);
		for (int counter1 = 1; counter1 < n; counter1++) 
		{
			key = arr[counter1];
			int counter2 = counter1 - 1;
			while (counter2 >= 0 && arr[counter2] > key) 
			{
				arr[counter2 + 1] = arr[counter2];
				counter2 -= 1;
			}
			arr[counter2 + 1] = key;
		}
		printf("\nElements after sorting :\n");
		for (int counter = 0; counter < n; counter++)
		{
			printf("%d\n", arr[counter]);
		}
	}
	else
	{
		int n;
		printf("\nHow many strings do you want to sort?\n");
		scanf("%d", &n);
		char arr[100][100];
		char key[100];
		printf("\nEnter the strings you want to sort\n");
		for (int counter = 0; counter < n; counter++)
			scanf("%s", arr[counter]);
		for (int counter1 = 1; counter1 < n; counter1++)
		{
			strcpy(key, arr[counter1]);
			int counter2 = counter1 - 1;
			while (counter2 >= 0 && strcmp(arr[counter2], key) > 0)
			{
				strcpy(arr[counter2 + 1], arr[counter2]);
				counter2 -= 1;
			}
			strcpy(arr[counter2 + 1], key);
		}
		printf("\nStrings after sorting :\n");
		for (int counter = 0; counter < n; counter++)
		{
			printf("%s\n", arr[counter]);
		}
	}
}
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}