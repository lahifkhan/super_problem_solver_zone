#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int k,n;
    cin>> k>> n;
    vector<ll> v(n);
    ll sum =0;
    
    for(ll i =0; i<n; i++){
        cin >> v[i];
        sum +=v[i];
    }
    auto canForm=[&](ll mid){
        ll need =mid*k;
        ll available = 0;
        for(ll i=0; i<n; i++){
        available += min(mid, v[i]);
        if(need<=available )return true;
        }
        return available >=need;
    };
    ll l=0,r=sum/k, ans;
    while(l<=r){
        ll mid=(l+r)/2;
        if(canForm(mid)){
            ans =mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout <<ans ;
    
}