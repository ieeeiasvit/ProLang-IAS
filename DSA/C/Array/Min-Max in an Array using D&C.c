#include<stdio.h>
void minmax(int arr[], int l, int r);
int min = 0;
int max = 0;

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	
	for (int counter = 0; counter < n; counter++)
		scanf("%d", &arr[counter]);
	
	min = arr[0];
	max = arr[0];
	minmax(arr, 0, (n - 1));
	printf("%d\n", max);
	printf("%d", min);
	return (0);
}

void minmax(int arr[], int l, int r)
{
	if ((r - l) >= 2)
	{
		int mid = (r + l) / 2;
		minmax(arr, l, mid);
		minmax(arr, (mid + 1), r);
	}
	else if (l == r)
	{
		if (min > arr[l])
			min = arr[l];
		if (max < arr[r])
			max = arr[r];
	}
	else 
	{
		if (arr[l] >= arr[r])
		{
			if (max < arr[l])
				max = arr[l];
			if (min > arr[r])
				min = arr[r];
		}
		else
		{
			if (max < arr[r])
				max = arr[r];
			if (min > arr[l])
				min = arr[l];
		}
	}
}
