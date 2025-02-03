#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// PBDS Template
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    vector<int> r_sm(n, 0);
    pbds<int> s;

   
    for (int j = n - 1; j >= 0; j--) {
        r_sm[j] = s.order_of_key(a[j]);  
        s.insert(a[j]);
    }

    pbds<int> t;
    long long total = 0;

    for (int j = 0; j < n; j++) {
        int l_grt = t.size() - t.order_of_key(a[j] + 1); 
        total += 1LL * l_grt * r_sm[j];  
        t.insert(a[j]);  
    }

    cout << total << '\n';
    return 0;
}
