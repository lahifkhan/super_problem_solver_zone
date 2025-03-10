#include <bits/stdc++.h>
using namespace std;
const int  maxN = 1e5 + 9, inf = 1e9 + 9;
int arr[maxN], tr[maxN * 4];

void build(int n, int b, int e) {
   if (b == e) {
      tr[n] = arr[b];
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   build(left, b, mid);
   build(right, mid + 1, e);
   tr[n] = min(tr[left], tr[right]); 
}

void update(int n, int b, int e, int i, int v) {
   if (i<b || i>e) {
      return;
   }
   if (b == e) {
      tr[n] = v;
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   update(left, b, mid, i, v);
   update(right, mid + 1, e, i, v);
   tr[n] = min(tr[left], tr[right]); 
}

int query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return inf; 
   }
   if (b >= i && e <= j) {
      return tr[n];
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   return min(query(left, b, mid, i, j), query(right, mid + 1, e, i, j)); // change this
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   for (int i = 1;i <= n;i++) {
      cin >> arr[i];
   }

   build(1, 1, n);
   while (m--) {
      int t;
      cin >> t;
      if (t == 1) {
         int idx, v;
         cin >> idx >> v;
         idx++;
         update(1, 1, n, idx, v);
      }
      else {
         int l, r;
         cin >> l >> r;
         l++;
         cout << query(1, 1, n, l, r) << endl;
      }
   }
   return 0;
}