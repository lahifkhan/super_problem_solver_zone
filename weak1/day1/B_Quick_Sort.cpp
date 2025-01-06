#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>> n >> k;

        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>> v[i];
            mp[v[i]]=i;
        }
        int count =1;
        int idx = mp[1];
        for(int i=2; i<=n; i++){
            if(idx<mp[i]){
                count++;
                idx = mp[i];
            }
            else{
                break;

            }

        }
        int val = n-count;
        
        if(val%k==0){
            cout << val/k <<"\n";
        }
        else{
            cout << (val/k)+1 <<"\n";
        }
    }
    return 0;
}