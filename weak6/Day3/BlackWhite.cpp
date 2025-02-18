#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200005];

struct Node {
    int black;
    int white;
};
vector<Node> col;

void DFS(int curr, int par) {
    for (auto i : adj[curr]) {
        if (i != par) {
            DFS(i, curr);
        }
    }
    if (par != -1) {
        col[par].white += col[curr].white;
        col[par].black += col[curr].black;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++) {
            adj[i].clear();
        }
        col.clear();
        col.resize(n + 1);
        
        int a[n + 1];
        for (int i = 2; i <= n; i++) {
            cin >> a[i];
            adj[a[i]].push_back(i);
        }
        
        string s;
        cin >> s;
        
        for (int i = 1; i <= n; i++) col[i] = {0, 0};
        for (int i = 0; i < n; i++) {
            if (s[i] == 'W') {
                col[i + 1].white++;
            } else {
                col[i + 1].black++;
            }
        }
        
        DFS(1, -1);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += (col[i].white == col[i].black);
        }
        cout << ans << endl;
    }
    return 0;
}
