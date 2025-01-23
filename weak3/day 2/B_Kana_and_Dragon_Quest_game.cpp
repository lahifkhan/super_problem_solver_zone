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
       int x, n, m;
		cin >> x >> n >> m;
		while (x > 20 && n > 0)
		{
			x = x / 2 + 10;
			n--;
		}
		bool ans = false;
		while (x > 0 && m > 0)
		{
			x = x - 10;
			m--;
			if (x <= 0)
			{
				ans = true;
				break;
			}
		}
        if(ans){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
		
    }

    return 0;
}
