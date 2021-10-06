# problem_6

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
    
        int b[m];
        for (int i=0;i<m;i++) cin>>b[i];
        
        
        
        int MAX=1e9;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(i==0) mp[i]=0;
            else if (a[i]!=0) mp[i]=0;
            else mp[i]=MAX;
        }
        
        int ryt=-1;
        for(int i=0;i<n;i++)
        {
            
           if(a[i]==1) ryt=i;
           if(ryt!=-1){
             if(a[i]==0) mp[i]=min(mp[i],i-ryt);
            }
        }
        int left=-1;
        for(int i=n-1;i>=0;i--){
            
            if(a[i]==2) left=i;
            if(left!=-1){
                 if(a[i]==0) mp[i]=min(mp[i],left-i);
        }
                
            
        }  
        
        for(int i=0;i<m;i++){
            int j=b[i]-1;
            if(mp[j]!=MAX) cout<<mp[j]<<" ";
            else cout<<-1<<" ";
        }
        cout<<endl;
    }
    
  
	return 0;
}




# problem_7


#include <iostream>
using namespace std;


int main() {
    
    long long n;
    cin>>n;
    while(n--)
    {
        long long D,d,p,q;
        cin>>D>>d>>p>>q;
        long long b=D/d;
        if(D%d==0){
            long long ans=d*b*p + q*(b-1)*(b)*d/2;
            cout<<ans<<endl;
        }
        else
        {
            long long ans=d*b*p + q*(b-1)*b*d/2;
            long long rem=D%d;
            ans = ans + rem*(p+b*q);
            cout<<ans<<endl;
            
        }
       
    }
    
	return 0;
}

