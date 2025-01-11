#include <bits/stdc++.h>
#define ll long long
using namespace std;
           
int main(){
    int t;
    cin>> t;
    while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(k);
    for(int i=0;i<k;i++){
        cin>>v[i];

    } 
    
    sort(v.rbegin(),v.rend());
    
    ll catposition=0;
    ll total=0;
    for(int i=0;i<k;i++){
        if(catposition < v[i]){
            catposition+=(n-v[i]);
            total++;
        }
        else break;
    }
    cout<<total<<"\n";
    }
    return 0;
}