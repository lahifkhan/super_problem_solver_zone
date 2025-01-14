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


int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        // Input
        int n,m;
        cin >> n >> m;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        if(n>m){
            cout <<"NO" <<endl;
            continue;
        }

        // Processing
        sort(all(arr),greater<ll>());
        ll last = m-arr[0];
        ll cur=0;
        bool poss=true;
        for(int i=0; i<n; i++){
            if(i==n-1){
                if(arr[i]+cur>=m){
                    poss=false;
                    break;
                }

            }
           
            else{
                cur = cur+arr[i]+1;
                if(cur>=last){
                    poss=false;
                    break;
                }
            }
        }
        if(poss){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO" <<endl;
        }
        

       
    }

    return 0;
}
