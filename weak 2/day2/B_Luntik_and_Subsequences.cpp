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
        int n;
        cin >> n;
        vector<int> arr(n);
        ll cnt1=0,cnt0=0;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i]==1){
               cnt1++;
            }
            else if(arr[i]==0){
                cnt0++;

            }
            

        } 
        cout << cnt1*(1LL<<cnt0)<<endl;
    

        // // Processing
        // sort(all(arr));

        // // Output
        // for (int i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << endl; 
    }

    return 0;
}
