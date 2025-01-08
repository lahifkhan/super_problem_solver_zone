#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    map<tuple<int, int, int>, int> cnt;
    long long ans = 0;
    for (int i = 0; i < n - 2; ++i) {
        tuple<int, int, int> triplet = make_tuple(v[i], v[i + 1], v[i + 2]);
        vector<tuple<int, int, int>> m(3);
        m[0] = make_tuple(0, v[i + 1], v[i + 2]);
        m[1] = make_tuple(v[i], 0, v[i + 2]);
        m[2] = make_tuple(v[i], v[i + 1], 0);

        for (auto &trip : m) {
            ans += cnt[trip] - cnt[triplet];
            cnt[trip]++;
        }
        cnt[triplet]++;
    }
    cout << ans << '\n';
    }

    return 0;
}