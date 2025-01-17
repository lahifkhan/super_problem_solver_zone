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
      vector<int> v(n);
      for (int i = 0;i < n;i++) {
         cin >> v[i];
      }

      map<int, int> mp;
      for (int i = 0;i < n;i++) {

         for (int j = 2;j * j <= v[i];j++) {
            if (v[i] % j == 0) {
               while (v[i] % j == 0) {
                  mp[j]++;
                  v[i] /= j;
               }
            }
         }
         if (v[i] > 1) {
            mp[v[i]]++;
         }
      }

      bool ok = true;

      for (auto [x, y] : mp) {
         if (y % n != 0) {
            ok = false;
            break;
         }
      }

      if (ok) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
    }

    return 0;
}
