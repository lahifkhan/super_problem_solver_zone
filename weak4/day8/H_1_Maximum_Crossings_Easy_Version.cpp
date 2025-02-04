#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];

        pbds<int> oset;
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            oset.insert(a[i]);
            ans += 1LL * (i - oset.order_of_key(a[i]));
        }
        cout << ans << '\n';
    }

    return 0;
}
