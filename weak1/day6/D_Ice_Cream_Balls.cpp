#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;

        ll l = 1, r = 2e9 , ans = 0;        

        while (l <= r) {
            ll mid = (l +r) / 2;   
            ll midCr = (mid * (mid - 1)) / 2; 

            if (midCr <= x) {
                ans = mid; 
                l = mid + 1; 
            } else {
                r = mid - 1; 
            }
        }

        ll lowCr = (ans * (ans - 1)) / 2; 
        ll b = x - lowCr; 
        cout << ans + b << "\n"; 
    }

    return 0;
}
