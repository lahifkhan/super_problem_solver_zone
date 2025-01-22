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
       int n, a, b;
       cin>>n>>a>>b;
        vector<int>v;
        v.pb(a);
        int x = n;
        for(int i = 2;i<=n/2;i++){
            while(x==a or x==b)x--;
            v.pb(x);x--;
        }
        x=1;
        for(int i = n/2 + 1;i<=n;i++){
            while(x==a or x==b)x++;
            v.pb(x);x++;
        }
        v[n-1] = b;
        int f = 0;
        for(int i = 0;i<n/2;i++){
            if(v[i]<a){
                f=1;break;
            }
        }
        for(int i = n/2;i<n;i++){
            if(v[i]>b){
                f=1;
                break;
            }
        }
        if(f)cout<<-1;
        else for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}
