#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" // Define for newline


int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int maxi=0;
        for(int i=1;i<=(2*n);i++){
            int total=0;
            for(auto j : mp){
                int other=i-j.first;
                if(other>=1 && mp.count(other))
                    total+=min(j.second,mp[other]);
            }
            total/=2;
           
            maxi=max(maxi,total);
        }
        cout<<maxi<<"\n";
    }

    return 0;
}
