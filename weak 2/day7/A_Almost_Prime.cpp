#include <bits/stdc++.h>
using namespace std;

const int maxN = 3000;
vector<int> primes;

void sieve() {
    vector<bool> isPrime(maxN + 1, true);
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i * i <= maxN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= maxN; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int countDistinct(int num) {
    int count = 0;
    for (int prime : primes) {
        if (prime * prime > num) break; 
        if (num % prime == 0) {
            count++;
            while (num % prime == 0) {
                num /= prime;
            }
        }
    }
    if (num > 1) count++; 
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (countDistinct(i) == 2) {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
