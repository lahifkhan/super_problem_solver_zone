#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    auto can = [&](int mid) {
        int cnt = 1;
        int last = v[0];
        for (int i = 1; i < n; i++) {
            if (v[i] - last >= mid) {
                cnt++;
                last = v[i];
                if (cnt == k) return true;
            }
        }
        return false;
    };

    int l = 1, r = v[n - 1] - v[0], ans = 0;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (can(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
