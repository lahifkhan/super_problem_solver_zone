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
    map<int,int> mp;
    int n;
    cin>> n;
    while(n--){
        int l,r;
        cin>> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum=0;
    ll mx = INT_MIN;
    for(auto p : mp){
        int val = p.second;
        sum +=val;
        mx = max(mx,sum);
    }
    cout << mx << endl;


    return 0;
}
