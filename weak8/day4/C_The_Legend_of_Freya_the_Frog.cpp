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
        
        int x,y,k;
    cin>>x>>y>>k;
    int ans=0;
    ans+=2*max((x+k-1)/k,(y+k-1)/k);
    if ((x + k - 1) / k > (y + k - 1) / k)
    {
        ans--;
    }
    cout<<ans<<endl;
    
    }

    return 0;
}
