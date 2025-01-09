#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,k;
    cin>> n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>> v[i];
    }
    sort(v.begin(),v.end());
    auto ok=[&](ll median){
        ll count=0;
        for(ll i=n/2; i<n; i++){
            if(v[i]<median){
                count +=(median-v[i]);
            }
        }
        return k>=count;
    };


    ll l=1, r=2e9,mid,ans;
    while(l<=r){
         mid= (l+r)/2;
        if(ok(mid)){
            ans = mid;
            l= mid+1;
        }
        else{
            r=mid-1;
        }

    }
    cout << ans <<"\n";

    return 0;
}