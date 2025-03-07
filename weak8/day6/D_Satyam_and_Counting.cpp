#include <bits/stdc++.h>
using namespace std;


#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define mod 1000000007
#define endl "\n" 



int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        
        int n,x,y;
    cin>>n;
    map<int,int> m0;
    map<int,int> m1;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y==0){
            m0[x]++;
        }
        else{
            m1[x]++;
        }
    }
    ll ans=0;
    for(auto temp:m0){
        if (m1.count(temp.first) > 0)
        {
            ans+=(ll)n-2;
        }
    }
    for(auto temp:m0){
        int x1=temp.first-1;
        int x2=temp.first+1;
        if(m1.find(x1)!=m1.end() && m1.find(x2)!=m1.end()){
            ans++;
        }
    }
 
    for (auto temp : m1)
    {
        int x1 = temp.first - 1;
        int x2 = temp.first + 1;
        if (m0.find(x1) != m0.end() && m0.find(x2) != m0.end())
        {
            ans++;
        }
    }
 
    cout<<ans<<endl;
    }

    return 0;
}
