#include <iostream>
#include <climits>
using namespace std;
// Basic approach would have been sorting the array first and then printing the last 3 elements of the array.
// Though, that approach takes O(nLogn) time cause of sorting making this the better way
int main() {
	// your code goes here
	int n; //size of array
	cin>>n;
	int arr[n]; // array of size n
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];     //input
	}
	int l1=INT_MIN;
	int l2=INT_MIN;
	int l3=INT_MIN;    //all initialized to minus infinity
	for(int i =0;i<n;i++)
	{
	    if(arr[i]>l1)
	    {
	        l3=l2;
	        l2=l1;
	        l1=arr[i];
	    }
	    else if(arr[i]>l2)
	    {
	        l3=l2;
	        l2=arr[i];
	    }
	    else if(arr[i]>l3)
	     l3=arr[i];
	}
	cout<<"Three largest elements are "<<l1<<" , "<<l2<<" , "<<l3<<endl;    // Output
	return 0;
}
