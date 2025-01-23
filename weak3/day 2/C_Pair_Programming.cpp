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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        int i = 0, j = 0;
        vector<int> ans;
        bool valid = true;

        while (i < n || j < m) {
            if (i < n && j < m) {
                if (a[i] == 0) ans.pb(0), i++, k++;
                else if (b[j] == 0) ans.pb(0), j++, k++;
                else {
                    if (a[i] < b[j] && a[i] <= k) ans.pb(a[i]), i++;
                    else if (a[i] >= b[j] && b[j] <= k) ans.pb(b[j]), j++;
                    else {
                        valid = false;
                        break;
                    }
                }
            } else if (i < n) {
                if (a[i] == 0) ans.pb(0), i++, k++;
                else {
                    if (a[i] <= k) ans.pb(a[i]), i++;
                    else {
                        valid = false;
                        break;
                    }
                }
            } else if (j < m) {
                if (b[j] == 0) ans.pb(0), j++, k++;
                else {
                    if (b[j] <= k) ans.pb(b[j]), j++;
                    else {
                        valid = false;
                        break;
                    }
                }
            }
        }

        if (!valid) {
            cout << -1 << endl;
        } else {
            for (auto x : ans) cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}
