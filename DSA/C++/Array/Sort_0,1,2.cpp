#include <iostream>
using namespace std;


int main() {
	// your code goes here
	int n;        //size of array
	cin>>n;
	int arr[n];    //array of size n
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];    //input
    }
    int c0=0;    //numb of 0s in array
    int c1=0;    //numb of 1s in array
    int c2=0;    //numb of 2s in array
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
         c0++;
        else if(arr[i]==1)
         c1++;
        else if(arr[i]==2)
         c2++;
    }
    int j=0;
    while(c0-- >0)
     arr[j++]=0;
    while(c1-- >0)
     arr[j++]=1;
    while(c2-- >0)
     arr[j++]=2;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "; 
    } 
	return 0;
}
