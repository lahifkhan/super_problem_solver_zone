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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>vec(n),arr(m);
     for (int i=0; i<n; i++){
        cin >> vec[i];

     } 
     for (int i=0; i<m; i++){
        cin >> arr[i];

     } 
    int tot=0;
     for (int i=0; i<n; i++) {
     for (int j=0; j<m; j++) {
         if (vec[i]+arr[j]<=k) tot++;
     }
  }
  cout << tot << endl;
    }

    return 0;
}
