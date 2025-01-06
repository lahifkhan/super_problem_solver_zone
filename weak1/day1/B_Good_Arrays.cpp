#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t;
    cin>> t;
    while(t--){
        ll n;
        cin>> n;
        vector<ll> v(n);
        ll sumNonValue= 0;
        ll count =0;
        ll OneCount=0;
       
        for(ll i=0; i<n; i++){
            cin>> v[i];
            if(v[i]==1){
                OneCount++;
            }
            else{
                sumNonValue += v[i];
                count++;
            }
        }
        ll contribution = sumNonValue-count;
        if(n==1){
            cout <<"NO" <<"\n";
        }
        else if(contribution<OneCount){
            cout <<"NO" <<"\n";
        }
        else{
            cout <<"YES" <<"\n";
        }
    }
    return 0;
}