#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" // Define for newline

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    fastio();

  
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 2; i <= n+1; i++) {
        if (isPrime(i)) ans.pb(1);
        else ans.pb(2);
    }
    if (n<3) cout << 1 <<endl;
    else cout << 2 <<endl;
    for (int v : ans) cout << v << " ";
    cout << endl;
    

    return 0;
}
