#include <bits/stdc++.h>
using namespace std; 

#define ll llint

int main() {
    

    ll t; 
    cin >> t; 

    while (t--) {
        ll n; 
        cin >> n; 
        string s; 
        cin >> s; 

        vector<ll> prefixSum; 
        ll cnt1 = 0; 


        for (ll i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                cnt1++; 
            } else {
                prefixSum.push_back(cnt1); 
            }
        }


        for (ll i = 1; i < prefixSum.size(); i++) {
            prefixSum[i] += prefixSum[i - 1];
        }


        for (ll i = 0; i < n; i++) {
            if (i < prefixSum.size()) {
                cout << prefixSum[i] << " "; 
            } else {
                cout << -1 << " "; 
            }
        }
        cout << endl; 
    }

    return 0;
}
