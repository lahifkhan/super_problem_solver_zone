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
        
        int n,k;
        cin >> n >>k;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int s=0;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(v[i]>=k){
                s+=v[i];

            }
            else{
                if(s>0 && v[i]==0){
                    s--;
                    cnt++;

                }
            }
        }
        cout << cnt << endl;
        
    }

    return 0;
}
