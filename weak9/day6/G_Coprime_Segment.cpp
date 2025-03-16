#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl "\n"

// Function to compute GCD
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Segment Tree for GCD
struct SegmentTree {
    int n;
    vector<ll> tree;

    SegmentTree(const vector<ll>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(0, 0, n - 1, arr);
    }

    // Build Segment Tree
    void build(int node, int start, int end, const vector<ll>& arr) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            build(2 * node + 1, start, mid, arr);
            build(2 * node + 2, mid + 1, end, arr);
            tree[node] = gcd(tree[2 * node + 1], tree[2 * node + 2]);
        }
    }

    // Query for GCD in range [L, R]
    ll query(int node, int start, int end, int L, int R) {
        if (R < start || L > end) return 0;  // Out of range
        if (L <= start && end <= R) return tree[node];  // Complete overlap

        int mid = (start + end) / 2;
        ll leftGCD = query(2 * node + 1, start, mid, L, R);
        ll rightGCD = query(2 * node + 2, mid + 1, end, L, R);
        return gcd(leftGCD, rightGCD);
    }

    ll getGCD(int L, int R) {
        return query(0, 0, n - 1, L, R);
    }
};

int main() {
    fastio();
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    SegmentTree segTree(arr);
    
    int minLength = n + 1;  // Set to max possible length
    int r = 0;

    // Sliding window to find minimum length with GCD 1
    for (int l = 0; l < n; l++) {
        while (r < n && segTree.getGCD(l, r) > 1) {
            r++;
        }
        if (r < n && segTree.getGCD(l, r) == 1) {
            minLength = min(minLength, r - l + 1);
        }
    }

    cout << (minLength == n + 1 ? -1 : minLength) << endl;
    return 0;
}
