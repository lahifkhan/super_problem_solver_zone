#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string recipe;
    cin >> recipe;

    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll r;
    cin >> r;

    
    ll req_b = 0, req_s = 0, req_c = 0;
    for (char ch : recipe) {
        if (ch == 'B') req_b++;
        else if (ch == 'S') req_s++;
        else if (ch == 'C') req_c++;
    }

    auto canMake = [&](ll mid) {
        ll need_b = max(0LL, req_b * mid - nb);
        ll need_s = max(0LL, req_s * mid - ns);
        ll need_c = max(0LL, req_c * mid - nc);

        ll cost = need_b * pb + need_s * ps + need_c * pc;
        return cost <= r;
    };

    ll l = 0, h = 1e13, ans = 0;

    while (l <= h) {
        ll mid = (l + h) / 2;
        if (canMake(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
