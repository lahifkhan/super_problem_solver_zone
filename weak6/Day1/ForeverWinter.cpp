#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, m;
      cin >> n >> m;
      map<int, set<int>> mp;
      for (int i = 1;i <= m;i++) {
         int u, v;
         cin >> u >> v;
         mp[u].insert(v);
         mp[v].insert(u);
      }

      int l= -1, p = -1;
      for (int i = 1;i <= n;i++) {
         if (mp[i].size() == 1) {
            l = i;
            break;
         }
      }

      int x, y;
      for (int i = 1;i <= n;i++) {
         if (mp[i].find(l) != mp[i].end()) {
            y = mp[i].size() - 1;
            p = i;
            break;
         }
      }

      for (int i = 1;i <= n;i++) {
         if (mp[i].find(p) != mp[i].end() && mp[i].size() > 1) {
            x = mp[i].size();
            break;
         }
      }

      cout << x << " " << y << '\n';
   }
   return 0;
}