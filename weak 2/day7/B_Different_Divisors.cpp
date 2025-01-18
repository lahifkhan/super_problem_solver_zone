#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // Correct way to define 'll' as 'long long'

const int MAX = 1000000; 
vector<ll> primes;

void sieve() {
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); 

    int t;
    cin >> t; 
    while (t--) {
        ll d;
        cin >> d;

        ll ans1 = 0, ans2 = 0;
        bool f1 = false, f2 = false;

        for (ll i = 0; i < primes.size(); i++) {
            if (primes[i] >= d + 1 && !f1) {
                ans1 = primes[i];
                f1 = true;
            } else if (f1 && primes[i] >= ans1 + d && !f2) {
                ans2 = primes[i];
                f2 = true;
                break; 
            }
        }

        cout << ans1 * ans2 << '\n'; 
    }

    return 0;
}
