#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<ll> arr(n);
        arr[0] = m;
        for (ll i = 1; i < n; i++) cin >> arr[i];

        vector<ll> brr(n);
        for (ll i = 0; i < n; i++) cin >> brr[i];

        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        ll i = 0, j = 0, ans = 0;
        while (i < n && j < n) {
            if (arr[j] < brr[i]) {
                i++;
                j++;
            } else {
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
