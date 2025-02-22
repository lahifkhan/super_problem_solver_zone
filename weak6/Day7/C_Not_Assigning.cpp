#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> >ans;
vector<int>v[100005];
map<pair<int,int>,int> mp;
int vis[100005];
 
void dfs(int node,int col)
{
    vis[node]=1;
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            int x=min(child,node);
            int y=max(child,node);
            int ans;
            if(col==-1 || col==2)ans=5;
            else ans=2;
            col=ans;
            mp[{x,y}]=ans;
            dfs(child,col);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        int l;
        ans.clear();
        mp.clear();
        for(int i=1;i<=n;i++)
        {
            vis[i]=0;
            v[i].clear();
        }
        for(int i=1;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
 
            int x=min(a,b);
            int y=max(a,b);
            ans.push_back({x,y});
 
            v[a].push_back(b);
            v[b].push_back(a);
 
            if(v[a].size()>2)cnt=1;
            if(v[b].size()>2)cnt=1;
        }
        if(cnt==1)cout<<-1<<endl;
        else{
            dfs(1,-1);
            for(int i=0;i<ans.size();i++)
            {
                int x=ans[i].first;
                int y=ans[i].second;
                cout<<mp[{x,y}]<<" ";
            }
            cout<<endl;
        }
    }
}