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

    ll n, k;
    cin >> n >> k;
    ll i = 0;
    ll j = n;
    while (i <= j) {
        ll a = i + (j - i) / 2;
        ll val = ((n - a) * (n - a + 1)) / 2 - a;
        if (val == k) {
            cout << a;
            return 0;
        } else if (val < k) {
            j = a - 1;
        } else {
            i = a + 1;
        }
    }

    return 0;
}
