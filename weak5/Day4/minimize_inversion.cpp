#include <bits/stdc++.h>
using namespace std ;

int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            }
        
        for(int i=0; i<n; i++){
            cin>>b[i];
            mp[a[i]]=b[i];
            }
        sort(a.begin(),a.end());
         for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
            }
        cout<<endl;
        for(auto c: mp){
            cout<<c.second<<" ";
            }
        cout<<endl;
        }
    return 0;
}