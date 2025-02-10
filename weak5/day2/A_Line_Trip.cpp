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
        
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            

        }
        int mx = abs(arr[0]-0);
        for(int i=0; i<n-1; i++){
           int v = abs( arr[i]-arr[i+1]);
           mx = max(mx,v);
        }
        int xi = abs(x-arr[n-1]);
        mx = max(mx,2*xi);
        cout << mx << endl;

        
        
    }

    return 0;
}
