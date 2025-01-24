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
        string s;
    cin >> s;
    map<char, ll> m;
    for (auto x : s){
        m[x]++;
    }
 
    ll minUD = min(m['U'], m['D']);
    ll minLR = min(m['L'], m['R']);
 
 
    if (minUD == 0 && minLR == 0)
    {
        cout << 0 << endl;
        cout << " " << endl;
    }
    else if (minUD == 0)
    {
        cout << 2 << endl
             << "LR" << endl;
    }
    else if (minLR == 0)
    {
        cout << 2 << endl
             << "UD" << endl;
    }
    else
    {
        string s = "";
        for (ll i = 0; i < minUD; i++)
        {
            s += 'U';
        }
        for (ll i = 0; i < minLR; i++){
            s += 'R';
        }
        s+=string(minUD,'D');
        s+=string(minLR, 'L');
        
        cout << s.size() << endl
             << s << endl;
    }
    }

    return 0;
}
