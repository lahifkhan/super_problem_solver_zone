#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n"

int main() {
    fastio();
    
    int t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> arr(n), brr(m);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (ll i = 0; i < m; i++) {
            cin >> brr[i];
        }

        sort(all(arr));
        sort(all(brr));

        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ans += arr[i];
        }

        if (k % 2 == 1) {
            ans += max(0LL, brr[m - 1] - arr[0]);
            cout << ans << endl;
            continue;
        }

        if (brr[m - 1] >= arr[0]) swap(arr[0], brr[m - 1]);
        sort(all(arr));
        sort(all(brr));
        if (arr[n - 1] >= brr[0]) swap(brr[0], arr[n - 1]);
        sort(all(arr));
        sort(all(brr));

        ans = 0;
        for (ll i = 0; i < n; i++) {
            ans += arr[i];
        }
        
        cout << ans << endl;
    }

    return 0;
}
