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
        string p,h;
        cin>> p>> h;
        int plen=p.size(), hlen=h.size();
        sort(all(p));
        bool flag=false;
        for(int i=0; i<=hlen-plen; i++){
            string s= h.substr(i,plen);
            sort(all(s));
            if(s==p){
                flag=true;
                break;
            }
        }
        if(flag){
            cout <<"YES" <<endl;
        }
        else{
            cout<<"NO" <<endl;
        }
      

        
    }

    return 0;
}
