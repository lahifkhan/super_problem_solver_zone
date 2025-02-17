#include <bits/stdc++.h>
using namespace std;

const int maxN = 3e5 + 9;
vector<int> v[maxN], op(maxN);
string s;

void dfs(int u) {
   if (v[u][0] != 0) {
      int x = v[u][0];
      if (s[u - 1] != 'L') {
         op[x] = op[u] + 1;
      }
      else {
         op[x] = op[u];
      }
      dfs(x);
   }
   if (v[u][1] != 0) {
      int x = v[u][1];
      if (s[u - 1] != 'R') {
         op[x] = op[u] + 1;
      }
      else {
         op[x] = op[u];
      }
      dfs(x);
   }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      for (int i = 0;i <= n;i++) {
         v[i].clear();
         op[i] = 0;
      }

      cin >> s;
      for (int i = 1;i <= n;i++) {
         int l, r;
         cin >> l >> r;
         v[i].push_back(l);
         v[i].push_back(r);
      }

      dfs(1);
      int res = INT_MAX;
      for (int i = 1;i <= n;i++) {
         if (v[i][0] == 0 && v[i][1] == 0) {
            res = min(res, op[i]);
         }
      }

      cout << res << '\n';
   }
   return 0;
}