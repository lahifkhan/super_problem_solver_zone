#include <bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" 



int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        
        int n,k;
        cin>>n>>k;
        int x;
        map<int,int>mp;
        vector<int>v[n+3];
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
            v[x].push_back(i);
        }
        int ans[n+3]={0};
        vector<pair<int,int>>v1;
        for(auto it: mp)
        {
            int a=it.first;
            int b=it.second;
            if(b>=k)
            {
                int color=1;
                for(int i=0;i<k;i++)
                {
                    int z = v[a][i];
                    ans[z]=color;
                    color++;
                }
            }
            else{
                for(int i=0;i<v[a].size();i++)
                {
                    v1.pb({a,v[a][i]});
                }
            }
        }
        int color=1;
        int z=(v1.size()%k);
        for(int i=0;i<v1.size()-z;i++)
        {
            int ind=v1[i].second;
            ans[ind]=color;
            color++;
            if(color>k)color=1;
        }
       
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}
