#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" // Define for newline


int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        vector < ll > v;
        ll n,b; 
        cin>>n;
        map < ll,ll > ma;
        for(ll i = 0; i < n; i++) {
            cin>>b;
            v.pb(b);
        }
        sort(all(v));
        if(v[0]!=v[1]) {
            cout<<"YES"<<endl;
        }
        else {
            ll f = 0;
            for(ll i = 1; i < n; i++) {
                if(v[i]%v[0]!=0) {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}
