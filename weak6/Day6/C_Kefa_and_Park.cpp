#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> adj[100010];
bool vis[100010];
ll n, m, total = 0;
ll cc[100010];

void dfs(ll s, ll sum) {
    if (vis[s]) return;
    vis[s] = 1;
    
    if (cc[s]) {
        sum += 1;
    } else {
        sum = 0;
    }
    
    if (sum > m) return;
    if (s != 1 && adj[s].size() == 1) total++;
    for (ll x : adj[s]) dfs(x, sum);
}

int main() {
    memset(vis, 0, sizeof(vis));
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) cin >> cc[i];
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    cout << total;
    return 0;
}
