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
        int n, k;
        cin >> n >> k;

        vector<ll> p(n);
        ll mx = n, mn = 1;

        for (int i = 1; i <= k; ++i) {
            for (int j = i; j <= n; j += k) {
                if (i % 2 == 1) {
                    p[j - 1] = mn++;
                } else {
                    p[j - 1] = mx--;
                }
            }
        }

        for (ll i : p) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
