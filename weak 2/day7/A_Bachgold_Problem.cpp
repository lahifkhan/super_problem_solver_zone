#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans = 0;

    if (n % 2 == 0) {
       
        ans = n / 2;
        cout << ans << '\n';
        for (ll i = 0; i < ans; i++) {
            cout << 2 << " "; 
        }
        cout << '\n';
    } else {
    
        n -= 3; 
        ans = n / 2; 
        cout << ans + 1 << '\n'; 
        for (ll i = 0; i < ans; i++) {
            cout << 2 << " "; 
        }
        cout << 3 << '\n'; 
    }

    return 0;
}
