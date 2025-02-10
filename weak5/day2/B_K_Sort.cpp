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
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        
        ll cost =0, mxdi =0;
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                cost += arr[i-1]-arr[i];
                mxdi = max(mxdi, arr[i-1]-arr[i]);
                arr[i]=arr[i-1];

            }
        }
        cout << cost+mxdi << endl;
    }

    return 0;
}
