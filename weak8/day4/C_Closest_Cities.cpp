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
        
        ll n, i, j, x, y, q;
        cin >> n;
        ll a[n + 3];
        for (i = 1; i <= n; i++) cin >> a[i];
          cin>>q;
        vector<ll>pre(n + 3, 0), suf(n + 3, 0);
        pre[1] = 1;
        for (i = 2; i < n; i++) {
          if (a[i] - a[i - 1] > a[i + 1] - a[i]) pre[i] = 1;
          else pre[i] = (a[i + 1] - a[i]);
        }
        for(i=2;i<=n;i++){
          pre[i]+=pre[i-1];
        }
     
        suf[n] = 1;
        for (i = n-1; i >=2; i--) {
          if (a[i] - a[i - 1] < a[i + 1] - a[i]) suf[i] = 1;
          else suf[i] = (a[i] - a[i-1]);
        }
        for(i=n-1;i>=1;i--){
          suf[i]+=suf[i+1];
        }
        while (q--) {
          cin >> x >> y;
          if(x<y){
            cout<<pre[y-1]-pre[x-1]<<endl;
          }else{
            swap(x,y);
            cout<<suf[x+1]-suf[y+1]<<endl;
          }
        }
    }

    return 0;
}
