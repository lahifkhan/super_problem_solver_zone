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

vector<int> allprimes = { 2,3, 5 ,7 ,11, 13, 17, 19, 23, 29, 31 };

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

      map<int, vector<int>> mp;

      for (int i = 0;i < n;i++) {
         for (int j = 0;j < 11;j++) {
            if (v[i] % allprimes[j] == 0) {
               mp[allprimes[j]].pb(i);
               break;
            }
         }
      }

      vector<int> ans(n);
      int color = 1;
      for (auto [x, y] : mp) {
         for (auto pos : y) {
            ans[pos] = color;
         }
         color++;
      }

      cout << mp.size() << '\n';
      for (int i = 0;i < n;i++) {
         cout << ans[i] << " ";
      }
      cout << endl;
    }

    return 0;
}
