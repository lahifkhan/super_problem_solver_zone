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
        ll x;
        map<ll,ll>mp;
        for(ll i=1;i<=n;i++)
        {
            cin>>x;
            x-=i;
            mp[x]++;
        }
        ll ans=0;
        for(auto it: mp)
        {
            ll a=it.second;
            ans+=(a*(a-1))/2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
