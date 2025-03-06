#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        
        vector<int> a(n + 2, 0);
        
        for (int i = 1, l, r; i <= k; i++) {
            cin >> l >> r;
            ++a[max(1, l - d + 1)];
            --a[r + 1];
        }
        
        int mi = 1, mx = 1;
        for (int i = 1; i <= n - d + 1; i++) {
            a[i] += a[i - 1];
            if (a[i] < a[mi]) mi = i;
            if (a[i] > a[mx]) mx = i;
        }
        
        cout << mx << " " << mi << "\n";
    }
    
    return 0;
}