#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  
    ll n;
    cin >> n;

    vector<ll> a(n), b(n), c(n);


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = b[i] - a[i];
    }

  
    sort(c.begin(), c.end());

    ll ans = 0;


    for (int i = 0; i < n; i++) {
      
        auto it = lower_bound(c.begin() + i + 1, c.end(), -c[i]);
        int id = it - c.begin();

      
        ans += (id - (i + 1));
    }

  
    cout << ans << '\n';

    return 0;
}
