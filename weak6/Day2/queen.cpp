#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, r;
   cin >> n;
   vector<int> g[n + 1], b(n + 1), a(n + 1);
   for (int i = 1;i <= n;i++) {
      int p, c;
      cin >> p >> c;
      int  u = p, v = i;
      if (u != -1) {
         g[u].push_back(v);
      }
      else {
         r = i;
      }
      if (c == 1) {
         b[u]++;
         a[v] = 1;
      }
   }

   vector<int> res;
   for (int i = 1;i <= n;i++) {
      if (r == i) {
         continue;
      }
      if ((g[i].size() == b[i] && a[i] == 1)) {
         res.push_back(i);
      }
   }

   if (res.empty()) {
      cout << -1 << '\n';
   }
   else {
      for (int i = 0;i < res.size();i++) {
         cout << res[i] << " ";
      }
      cout << '\n';
   }
   return 0;
}