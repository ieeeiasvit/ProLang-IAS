#include<stdio.h>
void main()
{    
	int i;
	int j;
	int n;
    int a[70][70];
    int sum;
    
    sum=0;
    
	printf("Enter size of square matrix \n");
	scanf("%d",&n);
	printf("\n Enter elements in array \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n array is \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",a[i][j]);
		}
	printf("\n")	;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum+=a[i][j];
		}
	}
    	
	printf("\n sum of elements of matrix is %d \n",sum);
}
