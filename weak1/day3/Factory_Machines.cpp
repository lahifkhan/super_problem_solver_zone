#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
 

   int n, t;
   cin >> n >> t;
   vector<int> v(n);
   for (int i = 0;i < n;i++) {
      cin >> v[i];
   }

   auto ok = [&](ll seconds) {
      ll cnt = 0;
      for (int i = 0;i < n;i++) {
         cnt += (seconds / v[i]);
         if (cnt >= t) {
            return true;
         }
      }
      return false;
      };

   ll l = 1, r = 1e18, mid, ans;
   while (l <= r) {
      mid = l + (r - l) / 2;
      if (ok(mid)) {
         ans = mid;
         r = mid - 1;
      }
      else {
         l = mid + 1;
      }
   }

   cout << ans << '\n';

   return 0;
}