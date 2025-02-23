#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        ll n, k;
        cin >> n >> k;
    
        for (int i = 0; i < n; i++)
        {
            for (char ch = 'a'; ch < 'a' + k; ch++)
            {
                cout << ch;
            }
        }
        cout << nline;
    }

}