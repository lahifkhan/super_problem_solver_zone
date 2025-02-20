#include <bits/stdc++.h>

using namespace std;

#define ll long long

int const N = 1e5 + 1, oo = 2e9;
int n, s1, s2;
vector<vector<int>> g;

void DFS(int v, int p, int lvl) {
    s1 += (lvl % 2 == 0);
    s2 += (lvl % 2 == 1);
    for (int i = 0; i < (int)g[v].size(); ++i) {
        int u = g[v][i];
        if (u != p)
            DFS(u, v, lvl + 1);
    }
}

int main() {
    cin >> n;
    g.resize(n);
    for (int i = 0, a, b; i < n - 1; ++i) {
        cin >> a >> b;
        --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    DFS(0, -1, 0);
    cout << (1ll * s1 * s2) - (n - 1) << "\n";
    return 0;
}
