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
        cin>>n;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      vector<ll> freq(n+2,0);
      for(int i=0;i<n;i++){
         if(a[i]>n)continue;
         freq[a[i]]++;
      }

      ll ans=0;
      for(int i=1;i<=n;i++){
         ll here=0;
         for(ll x=1;x*x<=i;x++){
            if(i%x==0){
               here+=freq[x];
               if(x*x!=i){
                  here+=freq[i/x];
               }
            }
         }
         ans=max(ans,here);
      }

      cout<<ans<<endl;
    }

    return 0;
}
