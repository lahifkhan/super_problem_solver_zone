#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
ll a[maxN], t[4 * maxN];

void build(int n, int b, int e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   int mid = (b + e) / 2, left = 2 * n, right = (2 * n) + 1;
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
   int mid = (b + e) / 2, left = 2 * n, right = (2 * n) + 1;
   update(left, b, mid, i, v);
   update(right, mid + 1, e, i, v);
   t[n] = t[left] + t[right];
}

ll query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return 0;
   }
   if (b >= i && e <= j) {
      return t[n];
   }
   int mid = (b + e) / 2, left = 2 * n, right = (2 * n) + 1;
   return query(left, b, mid, i, j) + query(right, mid + 1, e, i, j);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
   }

   build(1, 1, n);
   while (m--) {
      int t;
      cin >> t;
      if (t == 1) {
         int indx, v;
         cin >> indx >> v;
         indx++;
         update(1, 1, n, indx, v);
      }
      else {
         int left, right;
         cin >> left >> right;
         left++;
         ll ans = query(1, 1, n, left, right);
         cout << ans << endl;
      }
   }
   return 0;
}