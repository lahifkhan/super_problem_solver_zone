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
        
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2==0)
        {
        map<char,ll>odd,even;
        ll maxodd=0,maxeven=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even[s[i]]++;
                maxeven=max(even[s[i]],maxeven);
            }
            else
            {
                odd[s[i]]++;
                maxodd=max(odd[s[i]],maxodd);
            }
        }
        cout<<(n/2)-maxeven+(n/2)-maxodd<<endl;
        }
        else
        {
            map<char,ll>odd,even;
            ll min1=INT_MAX;
            for(int i=0;i<n;i++)
            {
              if(i%2==0)
              {
                even[s[i]]++;
              }
              else
              {
                odd[s[i]]++;
              }
 
            }
            map<char,ll>cureven,curodd;
            for(int i=0;i<n;i++)
            {
 
                   if(i%2==0)
                   {
                     even[s[i]]--;
                   }
                   else
                   {
                     odd[s[i]]--;
                   }
                    for(auto x:odd)
                    {
                        char f=x.first;
                        ll s=x.second;
                        cureven[f]+=s;
                    }
                    for(auto x:even)
                    {
                         char f=x.first;
                         ll s=x.second;
                         curodd[f]+=s;
                    }
                 ll maxodd=0,maxeven=0;
                 for(auto x:cureven)
                 {
                    maxeven=max(maxeven,x.second);
                 }
                 for(auto x:curodd)
                 {
                    maxodd=max(maxodd,x.second);
                 }
                   ll ok=(n/2)-maxodd+(n/2)-maxeven+1;
                   min1=min(min1,ok);
                   for(auto x:odd)
                    {
                        char f=x.first;
                        ll s=x.second;
                        cureven[f]-=s;
                    }
                    for(auto x:even)
                    {
                         char f=x.first;
                         ll s=x.second;
 
                         curodd[f]-=s;
                    }
                 if(i%2==1)
                 {
                        curodd[s[i]]++;
                 }
                 else
                 {
                        cureven[s[i]]++;
                 }
 
            }
            cout<<min1<<endl;
 
        }
    }

    return 0;
}
