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
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        

        ll target = (2 * sum) / n;
        map<ll, ll> mp;
        ll count = 0;

        for (int i = 0; i < n; i++) {
            count += mp[target - arr[i]];
            mp[arr[i]]++;
        }

        cout << count << endl;
    }

    return 0;
}
