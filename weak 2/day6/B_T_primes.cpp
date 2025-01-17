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


bool primeCheck(ll  n) {
   if (n == 1) {
      return false;
   }
   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }

   return true;
}

bool perfect(ll n) {
   ll x = sqrtl(n);
   return (x * x) == n;
}


int main() {
    fastio();

    int n;
   cin >> n;
   for (int i = 1;i <= n;i++) {
      ll x;
      cin >> x;
      if (perfect(x) && primeCheck(sqrtl(x))) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
    

    return 0;
}
