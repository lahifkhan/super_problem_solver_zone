#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define max_index 200005
using namespace std;

int tree[max_index * 4], arr[max_index];

void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }
    int left = node * 2, right = (node * 2) + 1;
    int mid = (start + end) / 2;
    build(left, start, mid);
    build(right, mid + 1, end);
    tree[node] = tree[left] & tree[right];
}

int query(int node, int start, int end, int q_start, int q_end) {
    if (q_start > end || q_end < start) {
        return INT_MAX;
    }
    if (q_start <= start && q_end >= end) {
        return tree[node];
    }
    int left = node * 2, right = (node * 2) + 1;
    int mid = (start + end) / 2;
    int q1 = query(left, start, mid, q_start, q_end);
    int q2 = query(right, mid + 1, end, q_start, q_end);
    return q1 & q2;
}

int find_max_r(int n, int l, int k) {
    int lo = l, hi = n, ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (query(1, 1, n, l, mid) >= k) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        build(1, 1, n);
        cin >> q;
        while (q--) {
            int l, k;
            cin >> l >> k;
            cout << find_max_r(n, l, k) << " ";
        }
        cout << endl;
    }
    return 0;
}
