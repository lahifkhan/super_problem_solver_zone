#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<ll> s;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            s.insert(x);
        }

        vector<ll> v(s.begin(), s.end());
        ll mx = 0;

        for (int i = 0; i < v.size(); i++) {
            ll x = v[i] + n - 1;
            ll it = lower_bound(v.begin(), v.end(), x + 1) - v.begin() - i;
            mx = max(it, mx);
        }

        cout << mx << "\n";
    }

    return 0;
}
