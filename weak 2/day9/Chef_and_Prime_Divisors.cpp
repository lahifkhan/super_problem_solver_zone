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
       ll a, b;
		cin >> a >> b;
		while(__gcd(a,b) >1){
			b /= __gcd(a,b);
		}
		if(b>1) cout << "No" <<endl;
		else cout << "Yes" <<endl;
    }

    return 0;
}
