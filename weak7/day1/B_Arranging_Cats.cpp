
#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int one, zero;
        one = zero = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] != a[i]) {
                ans++;
                one += (a[i] == '1');
                zero += (a[i] == '0');
            }
        }
        int mn = min(one, zero);
        cout << ans - mn  << '\n';
    }
    return 0;
}