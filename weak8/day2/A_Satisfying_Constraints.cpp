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
        int n;
        cin >> n;
        
        int L = 0, R = INT_MAX;
        set<int> later;
        
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;
            
            if (a == 1) {
                L = max(L, x);
            } 
            else if (a == 2) {
                R = min(R, x);
            } 
            else {
                later.insert(x);
            }
        }

        if (R < L) {
            cout << 0 << endl;
            continue;
        }

        int ans = R - L + 1;
        for (auto i : later) {
            ans -= (i >= L && i <= R);
        }

        cout << ans << endl;
    }

    return 0;
}
