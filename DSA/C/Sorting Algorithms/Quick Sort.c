#include <stdio.h>
#include <string.h>
void swap(int* a, int* b);
int partition_numeric(int array[], int low, int high);
void quickSort_numeric(int array[], int low, int high);
int partition_string(char array[][100], int low, int high);
void quickSort_string(char array[][100], int low, int high);

int main()
{
    printf("****Quick Sort****");
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
            quickSort_numeric(arr, 0, n - 1);
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
            quickSort_string(ar, 0, n - 1);
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
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition_numeric(int array[], int low, int high) 
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) 
    {
        if (array[j] <= pivot) 
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
void quickSort_numeric(int array[], int low, int high) 
{
    if (low < high) 
    {        
        int pi = partition_numeric(array, low, high);
        quickSort_numeric(array, low, pi - 1);
        quickSort_numeric(array, pi + 1, high);
    }
}
int partition_string(char array[][100], int low, int high)
{
    char pivot[100];
    strcpy(pivot, array[high]);
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if ((strcmp(array[j], pivot)) <= 0)
        {
            i++;
            char temp[100];
            strcpy(temp, array[i]);
            strcpy(array[i], array[j]);
            strcpy(array[j], temp);
        }
    }
    char temp[100];
    strcpy(temp, array[i + 1]);
    strcpy(array[i + 1], array[high]);
    strcpy(array[high], temp);
    return (i + 1);
}
void quickSort_string(char array[][100], int low, int high)
{
    if (low < high)
    {
        int pi = partition_string(array, low, high);
        quickSort_string(array, low, pi - 1);
        quickSort_string(array, pi + 1, high);
    }
}