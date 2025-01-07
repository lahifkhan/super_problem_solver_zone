#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }

        if(is_sorted(v.begin(),v.end())){
            cout <<"YES" <<"\n";
            continue;
        }

        int last = 0;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            int x = v[i]/10;
            int y = v[i]%10;
            if(x>=last && y>=x){
                last = y;
                ans.push_back(x);
                ans.push_back(y);
            }
            else{
                ans.push_back(v[i]);
                last = v[i];
            }
        }

        if(is_sorted(ans.begin(),ans.end())){
            cout <<"YES" <<"\n";
        }
        else{
            cout <<"NO" <<"\n";
        }
    }
    return 0;
}