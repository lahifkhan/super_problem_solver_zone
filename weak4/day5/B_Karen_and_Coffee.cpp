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

    int n,k,q;
    cin>> n>> k>> q;
    map<int,int> mp;
    while(n--){
        int l,r;
        cin>> l >> r;
        mp[l]++;
        mp[r+1]--;

    }
    int sum=0;
    vector<int> v(200001,0);
    int count=0;
    for(int i=0; i<200001; i++){
        sum +=mp[i];
        if(sum>=k){
            count ++;
        }
        v[i]=count;
    }
    while(q--){
        int l,r;
        cin>> l >> r;
        cout << v[r]-v[l-1] <<endl;
    }

    return 0;
}
