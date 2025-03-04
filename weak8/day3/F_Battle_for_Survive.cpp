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
        cin>> n;
        vector<ll> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        } 
        if(v.size()==2){
            cout<< v[1]-v[0]<<endl;
            continue;

        }

       ll x= v[v.size()-1];
        v.pop_back();
        int l=0, r= v.size()-1;
        while(l<r){
            v[r] = v[r]-v[l];
            l++;
        }

        cout << x-v[r] <<endl; 
    }

    return 0;
}
