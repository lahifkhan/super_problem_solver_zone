#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
  

    ll n;
    cin >> n;

    ll a[n], i, cnt1 = 0, j, cnt2 = 0, max1 = 0, cnt = 0, m1 = 1;
    map<ll, ll> m;

    for (i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]]++;
        if (a[i] != 1) {
            for (j = 2; j <= sqrt(a[i]); ++j) {
                if (a[i] % j == 0) {
                    m[j]++;
                    m1 = max(m1, m[j]);
                    if (a[i] / j != j) {
                        m[a[i] / j]++;
                        m1 = max(m1, m[a[i] / j]);
                    }
                }
            }
        }
        m1 = max(m1, m[a[i]]);
    }

    if (n == 1) {
        cout << 1;
    } else {
        for (i = 0; i < n; ++i) {
            for (j = i + 1; j < n; ++j) {
                if (a[i] * a[j] % 2 == 0) {
                    cnt++;
                }
            }
        }
        if (cnt == 0) {
            cout << 1;
        } else {
            cout << m1;
        }
    }

    return 0;
}