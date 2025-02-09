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
        
        int n, k;
        cin >> n >> k;
 
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        int d = k - 1;
        int e_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                e_cnt++;
            }
                
 
            if (arr[i] % k == 0){
                d = 0;
            }
               
            else{
                d = min(d, k - arr[i] % k);

            }
                
        }
 
        if (k != 4) {
            cout << d << endl;
        } 
        else {
            if (e_cnt >= 2){
                cout << 0 << endl;
            }
            else if (e_cnt == 1){
                cout << min(d, 1) << endl;
            }
            else {
                cout << min(2, d) << endl;
            }
                
        }
    }

    return 0;
}
