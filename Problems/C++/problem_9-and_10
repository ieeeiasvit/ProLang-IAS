# Question 9

#include <bits/stdc++.h>

using namespace std;

#define ll long long
 
void solve(){
	ll int inf = 1e9+7;
  ll int n;
  cin >> n;
  ll int arr[n];
  for (ll int i = 0  ; i < n ; i++){
  	cin >> arr[i];
  }
  sort(arr,arr+n);

  ll int ans = -inf;
  for (ll int i = 0 ; i < n ; i++){
      ans = max(ans, arr[i]*(n-i) );
  

  }
  cout << ans << endl;


}
int main(){
ios::sync_with_stdio(0); cin.tie(0);
  ll int tc = 1;
  // cin >> tc;
  while(tc--){
  	solve();
  }

return 0;
}


# Question 10

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int speed;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>speed;
            arr[i]=speed;
            
        }
        int count=1;
        int min=arr[0];
        for(int i=1;i<n;i++){
            //max=arr[i];
            if(arr[i-1]<=min){
                
                min=arr[i-1];
            }
                
            
                 if(arr[i]<=arr[i-1] && arr[i]<=min){
                         count++;
                  }
            
        }
        /*if(arr[n-2]>=arr[n-1] && ){
            count++;
        }*/
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
