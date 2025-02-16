#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      vector<int> v(n + 1);
      for (int i = 1;i <= n;i++) {
         cin >> v[i];
      }

      bool f = false;
      for (int i = 1;i <= n;i++) {
         if (v[1] != v[i]) {
            f = true;
            break;
         }
      }

      if (f) {
         int d = -1;
         cout << "YES" << '\n';
         for (int i = 2;i <= n;i++) {
            if (v[1] != v[i]) {
               cout << 1 << " " << i << '\n';
               d= i;
            }
         }

         for (int i = 2;i <= n;i++) {
            if (v[i] == v[1]) {
               cout << d << " " << i << '\n';
            }
         }
      }
      else {
         cout << "NO" << '\n';
      }
   }
   return 0;
}