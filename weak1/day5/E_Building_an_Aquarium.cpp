#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        auto total = [&](ll h) {
            ll sum = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] < h) {
                    sum += (h - v[i]);
                }
            }
            return sum;
        };
        ll l = 1, r = 1e10, mid, ans = 0;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (total(mid) <= k) { // Valid height
                ans = mid; // Update ans
                l = mid + 1; // Try for a higher height
            } else { // Total water exceeds available
                r = mid - 1; // Try for a lower height
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
