# question 10

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long int yt;
void go(vector<yt> &r,yt n)
{
    string s="";
    yt i,j=31;
    while(n>0)
    {
        s+=to_string(n%2);
        n/=2;
    }
        yt n1=s.size();
        for(i=0;i<n1;i++)
        {
            if(s[i]=='1')
            {
                r[j]+=1;
            }
            
            j--;
        }
        
    
}
int main()
{
    yt t,i,j;
    cin>>t;
    while(t--)
    {
        yt n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        
        vector<yt> r(32,0);
        for(i=0;i<n;i++)
        {
            go(r,a[i]);
        }
        yt res=0;
        for(i=0;i<32;i++)
        {
            if(r[i]==0)
            continue;
            else if(r[i]%k==0)
            {
                res+=(r[i]/k);
            }
            else
            {
                res+=(r[i]/k+1);
            }
        }
        cout<<res<<"\n";
    }

    return 0;
}


# Question 11


#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int d,x,y,z;
        cin>>d>>x>>y>>z;
        
        
        int c1,c2;
        c1=x*7;
        c2=y*d+(7-d)*z;
        cout<<max(c1,c2)<<endl;
        
        
        
    }
	// your code goes here
	return 0;
}
