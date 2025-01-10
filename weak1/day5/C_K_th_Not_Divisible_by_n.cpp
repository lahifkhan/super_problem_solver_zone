#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>> t;
    while(t--){
        ll n,k;
        cin>> n>>k;
        ll l=1, r=2e9, ans,mid;
        while(l<=r){
            mid = (l+r)/2;
            if(mid-(mid/n)>=k){
                ans =mid;
                r=mid-1;

            }
            else{
                l=mid+1;
            }
        }
        cout <<ans <<"\n";
    }

    
    return 0;
}