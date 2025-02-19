#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;
vector<int> adj[MAX_N];
int vis[MAX_N], par[MAX_N], n, res = 0;

void reset() {
    
}

int dfs(int u) {
    vis[u] = 1;
    int cnt = 1;

    for (int i = 0; i < adj[u].size(); i++) {
        int n = adj[u][i];
        if (n == par[u]) continue;

        if (!vis[n]) {
            par[n] = u;
            cnt += dfs(n);
        }
    }

    vis[u] = 2;
    if (cnt % 2 == 0) res++;
    return cnt;
}

int main() {
   memset(vis, 0, sizeof(vis));
    memset(par, -1, sizeof(par));
    int a, b;
    cin >> n;

    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if (n % 2 == 1) {
        cout << "-1" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0)
            dfs(i);
    }

    cout << res - 1 << endl;
    return 0;
}