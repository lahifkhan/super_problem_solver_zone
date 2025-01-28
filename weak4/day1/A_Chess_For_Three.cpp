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
       ll a,b,c;
       cin>> a>> b>> c;
       ll s= a+b+c;
       if(s%2 !=0){
        cout <<-1 <<endl;
        continue;
       }
       ll ans =  min(s/2,(a+b));
       cout << ans << endl;
    }

    return 0;
}
