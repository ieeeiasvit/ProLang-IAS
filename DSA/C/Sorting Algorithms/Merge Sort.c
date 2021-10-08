#include<stdio.h>
#include<string.h>
void merge_numeric(int arr[], int l, int m, int r);
void mergeSort_numeric(int arr[], int l, int r);
void merge_string(char arr[][100], int l, int m, int r);
void mergeSort_string(char arr[][100], int l, int r);

int main()
{
	printf("****Merge Sort****");
	int choice = 0, n;
	while (choice != 3)
	{
		printf("\n\nWhat do you want to sort:\n1. Numeric\n2. String\n3. Exit\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
            printf("How many elements do you want to sort?\n");
            scanf("%d", &n);
            int arr[10];
            printf("Enter the elements you want to sort:\n");
            for (int counter = 0; counter < n; counter++)
                scanf("%d", &arr[counter]);
			mergeSort_numeric(arr, 0, n-1);
            printf("\nElements after sorting: \n");
            for (int counter = 0; counter < n; counter++)
                printf("%d\n", arr[counter]);
			break;
		case 2:
            printf("How many strings do you want to sort?\n");
            scanf("%d", &n);
            char ar[10][100];
            printf("Enter the strings you want to sort:\n");
            for (int counter = 0; counter < n; counter++)
                scanf("%s", ar[counter]);
            mergeSort_string(ar, 0, n - 1);
            printf("\nStrings after sorting: \n");
            for (int counter = 0; counter < n; counter++)
                printf("%s\n", ar[counter]);
			break;
		case 3:
			break;
		default:
			printf("Invalid Input");
		}
	}
	return 0;
}
void merge_numeric(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[10], R[10];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort_numeric(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort_numeric(arr, l, m);
        mergeSort_numeric(arr, m + 1, r);
        merge_numeric(arr, l, m, r);
    }
}
void merge_string(char arr[][100], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    char L[10][100], R[10][100];
    for (i = 0; i < n1; i++)
        strcpy(L[i], arr[l + i]);
    for (j = 0; j < n2; j++)
        strcpy(R[j], arr[m + 1 + j]);
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if ((strcmp(L[i], R[j])) <= 0)
        {
            strcpy(arr[k], L[i]);
            i++;
        }
        else
        {
            strcpy(arr[k], R[j]);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }
    while (j < n2)
    {
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }
}
void mergeSort_string(char arr[][100], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort_string(arr, l, m);
        mergeSort_string(arr, m + 1, r);
        merge_string(arr, l, m, r);
    }
}