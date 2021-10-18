# include<bits/stdc++.h>
using namespace std;
vector<int> stackspan(vector<int> a)
{
    int n=a.size();
    vector<int> ans;
    stack<pair<int,int>> s;
    for(int i=0;i<a.size();i++)
    {
        int days=1;
        while(!s.empty() && s.top().first<=a[i])
        {
            days+=s.top().second;
            s.pop();
        }
        s.push({a[i],days});
        ans.push_back(days);
    }
    return ans;
}
int main()
{
    vector<int> a ={100,80,60,70,60,75,85};
    int n;
   // n=7;
    vector<int> ans=stackspan(a);
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;

}
