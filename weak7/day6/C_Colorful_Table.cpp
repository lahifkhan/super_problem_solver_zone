#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector < ll > a(n+1);
        set < ll >se;
        vector < ll > l(k+1,n+1), r(k+1, -1),sl,sr;
        for(ll i = 1 ; i <= n ; i++) {
            cin>>a[i];
            a[i];
            l[a[i]] = min(l[a[i]], i);
            r[a[i]] = i;
            se.insert(a[i]);
        }
        sl = l;
        sr = r;
        for(ll i = k-1; i >= 1 ; i--) {
            sl[i] = min(sl[i], sl[i+1]);
            sr[i] = max(sr[i], sr[i+1]);
        }
        for(ll i = 1 ; i <= k; i++) {
            if(!se.count(i))
                cout<<0<<" ";
            else
                cout<<2*(sr[i]-sl[i]+1)<<" ";   
        }
        cout<<endl;
    }  
    return 0;
}