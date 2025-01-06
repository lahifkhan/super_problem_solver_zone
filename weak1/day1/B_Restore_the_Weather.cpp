#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>> t;
    while(t--){
    int n,k;
    cin>> n>> k;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        v[i]={x,i};
    }

    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> b[i];

    }
    sort(v.begin(),v.end());
    sort(b.begin(),b.end());
    vector<int > ans(n,0);

    for(int i=0; i<n; i++){
        int ind = v[i].second;
        ans[ind]=b[i];

    }
    for(int i=0; i<n; i++){
        cout << ans[i] <<" ";
    }
    cout <<"\n";

    }

   

    return 0;
}