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
        vector<vector<char>> mat(n, vector<char>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
            }
        }

        string ans;

        for (int i = 0; i < n; ++i) {
            if (i % k != 0) {
                continue;
            }

            for (int j = 0; j < n; ++j) {
                if (j % k != 0) {
                    continue;
                }

                ans += mat[i][j];
            }

            ans += endl;
        }

        cout << ans;
    }
    return 0;
}
