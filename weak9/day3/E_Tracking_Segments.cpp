#include <bits/stdc++.h>
using namespace std;
const int  maxn = 1e5 + 9;
int t[maxn * 4];

void build(int n, int b, int e) {
   if (b == e) {
      t[n] = 0;
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   build(left, b, mid);
   build(right, mid + 1, e);
   t[n] = t[left] + t[right];
}

void update(int n, int b, int e, int i, int v) {
   if (i<b || i>e) {
      return;
   }
   if (b == e) {
      t[n] = v;
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   update(left, b, mid, i, v);
   update(right, mid + 1, e, i, v);
   t[n] = t[left] + t[right];
}

int query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return 0;
   }
   if (b >= i && e <= j) {
      return t[n];
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   return query(left, b, mid, i, j) + query(right, mid + 1, e, i, j);
}

int main() {

   int t;
   cin >> t;
   while (t--) {
      int n, m, q;
      cin >> n >> m;
      vector<pair<int, int>> v(m);
      for (int i = 0;i < m;i++) {
         cin >> v[i].first >> v[i].second;
      }
      cin >> q;
      vector<int> que(q);
      for (int i = 0;i < q;i++) {
         cin >> que[i];
      }

      auto ok = [&](int mid) {
         build(1, 1, n);

         for (int i = 0;i <= mid;i++) {
            update(1, 1, n, que[i], 1);
         }

         bool find = false;
         for (int i = 0;i < m;i++) {
            int L = v[i].first, R = v[i].second, len, one, zero;
            len = (R - L) + 1;
            one = query(1, 1, n, L, R);
            zero = (len - one);
            if (one > zero) {
               find = true;
               break;
            }
         }
         return find;
         };

      int l = 0, r = q - 1, mid, ans = -1;
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

      if (ans != -1) {
         ans++;
      }
      cout << ans << '\n';
   }
   return 0;
}