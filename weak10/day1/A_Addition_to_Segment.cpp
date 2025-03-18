#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e5 + 9;
ll a[maxN], t[maxN * 4], lazy[maxN * 4];

void push(int n, int b, int e) {
   if (lazy[n] == 0) {
      return;
   }
   t[n] += (1LL * (e - b + 1) * lazy[n]);
   if (b != e) {
      int left = (2 * n), right = (2 * n) + 1;
      lazy[left] += lazy[n];
      lazy[right] += lazy[n];
   }
   lazy[n] = 0;
}

void build(int n, int b, int e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   build(left, b, mid);
   build(right, mid + 1, e);
   t[n] = t[left] + t[right];
}

void update(int n, int b, int e, int i, int j, int v) {
   push(n, b, e);
   if (e < i || j < b) {
      return;
   }
   if (b >= i && e <= j) {
      lazy[n] = v;
      push(n, b, e);
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   update(left, b, mid, i, j, v);
   update(right, mid + 1, e, i, j, v);
   t[n] = t[left] + t[right];
}

ll query(int n, int b, int e, int i, int j) {
   push(n, b, e);
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
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   build(1, 1, n);
   while (m--) {
      int t;
      cin >> t;
      if (t == 1) {
         int left, right, v;
         cin >> left >> right >> v;
         left++;
         update(1, 1, n, left, right, v);
      }
      else {
         int left;
         cin >> left;
         left++;
         cout << query(1, 1, n, left, left) << endl;
      }
   }
   return 0;
}