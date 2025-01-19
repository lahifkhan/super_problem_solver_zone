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


ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

void solve() {
   
}

int main() {
    fastio();

    int t;
    cin >> t;

    while (t--) {
         int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 1 << endl;
        continue;
    }

    vector<ll> list = a;
    sort(all(list));

    ll mx = list[n - 1];
    ll x = 0;

    for (ll i : list) {
        if (i == mx) break;
        x = gcd(x, mx - i);
    }

    ll cnts = 1;
    for (ll i : list) {
        cnts += (mx - i) / x;
    }

    ll lst = mx - x;
    for (int i = n - 2; i >= 0; --i) {
        if (lst != list[i]) break;
        lst -= x;
        cnts++;
    }

    cout << cnts << endl;
    }

    return 0;
}
