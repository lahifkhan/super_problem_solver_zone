#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 9, inf = 1e9 + 9;
int a[maxN];

struct node {
   int mn, count;
};
node t[maxN * 4];

node merge(node l, node r) {
   node ans;
   ans.mn = min(l.mn, r.mn);
   ans.count = 0;
   if (l.mn == ans.mn) {
      ans.count += l.count;
   }
   if (r.mn == ans.mn) {
      ans.count += r.count;
   }
   return ans;
}

void build(int n, int b, int e) {
   if (b == e) {
      t[n].mn = a[b];
      t[n].count = 1;
      return;
   }
   int mid = (b + e) / 2, left = (2 * n), right = (2 * n) + 1;
   build(left, b, mid);
   build(right, mid + 1, e);
   t[n] = merge(t[left], t[right]);
}

void update(int n, int b, int e, int i, int x) {
   if (i<b || i>e) {
      return;
   }
   if (b == e) {
      t[n].mn = x;
      t[n].count = 1;
      return;
   }
   int  mid = (b + e) / 2, left = 2 * n, right = (2 * n) + 1;
   update(left, b, mid, i, x);
   update(right, mid + 1, e, i, x);
   t[n] = merge(t[left], t[right]);
}

node query(int n, int b, int e, int i, int j) {
   if (e < i || j < b) {
      return { inf,1 };
   }
   if (b >= i && e <= j) {
      return t[n];
   }
   int mid = (b + e) / 2, left = 2 * n, right = (2 * n) + 1;
   return merge(query(left, b, mid, i, j), query(right, mid + 1, e, i, j));
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
         node res = query(1, 1, n, left, right);
         cout << res.mn << " " << res.count << endl;
      }
   }
   return 0;
}