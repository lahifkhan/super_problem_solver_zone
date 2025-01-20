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

vector < ll > divisors(ll n) {
    vector < ll > v;
    for(ll i = 1; i <= sqrt(n); i++) {
        if(n%i == 0) {
            if(n/i == i) {
                v.pb(i);
            }
            else {
                v.pb(i);
                v.pb(n/i);
            }
        }
    }
    return v;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        ll a, b, l, comp, cnt = 0;
        cin>>a>>b>>l;
        vector < ll > k = divisors(l);
        vector < ll > x,y;
        for(ll i = 0 ; i <= 20 ; i++) {
            comp = pow(a,i);
            if(comp <= 1e6) {
                x.pb(comp);
            }
            else 
                break;
        }
        for(ll i = 0 ; i <= 20 ; i++) {
            comp = pow(b,i);
            if(comp <= 1e6) {
                y.pb(comp);
            }
            else 
                break;
        }
        for(ll i = 0 ; i < (ll)k.size() ; i++) {
            ll f=0;
            for(ll j = 0 ; j < (ll)x.size(); j++) {
                for(ll m = 0 ; m < (ll)y.size() ; m++) {
                    if(k[i]*x[j]*y[m] == l) {
                        cnt++;
                        f=1;
                        break;
                    }
                }
                if(f==1)
                    break;
            }
        }
 
        cout<<cnt<<endl;
    }

    return 0;
}
