#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void dfs(ll cur, ll from, const vector<vector<ll>> &g, vector<ll> &desc) {
    const vector<ll> &n = g[cur];
    if (cur > 1 && n.size() == 1) {
        desc[cur] = 1;
        return;
    }
    
    for (ll x : n) {
        if (x == from) continue;
        dfs(x, cur, g, desc);
        desc[cur] += desc[x];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<vector<ll>> g(n + 1);
        
        for (ll p = 1; p < n; p++) {
            ll x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        
        vector<ll> d(n + 1, 0);
        dfs(1, 1, g, d);
        
        ll q;
        cin >> q;
        while (q--) {
            ll x, y;
            cin >> x >> y;
            cout << d[x] * d[y] << "\n";
        }
    }
    return 0;
}
