#include <iostream>
using namespace std;
void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
    int mid;
    if (low < high){
        //divide the array at mid and sort independently using merge sort
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        //merge or conquer sorted arrays
        merge(arr,low,high,mid);
    }
}
// Merge sort 
void merge(int *arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else  {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++; 
        j++;
    }
    for (i = low; i < k; i++)  {
        arr[i] = c[i];
    }
}
int main() {
	// your code goes here
	int n; //size of array
	cin>>n;
	int arr[n]; // array of size n
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];     //input
	}
	int k;
	cout<<"Enter position of Kth sorted element of array: "<<endl;
	cin>>k;
	merge_sort(arr,0,n-1);    //sorting the array using inbuilt sort fn
	cout<<"Kth sorted number of array is: "<<arr[k-1]<<endl;   //output
	return 0;
}
