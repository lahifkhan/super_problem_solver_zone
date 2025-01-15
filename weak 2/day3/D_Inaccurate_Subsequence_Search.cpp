#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        ll a[n], b[m];
        map<ll, ll> mp, mp2;

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }

        ll cnt = 0;
        for (ll i = 0; i < m; i++)
        {
            mp2[a[i]]++;
            if (mp[a[i]] && (mp2[a[i]] <= mp[a[i]]))
                cnt++;
        }

        ll ans = 0;
        if (cnt >= k)
            ans++;

        for (ll i = 1, j = m; j < n; i++, j++)
        {
            mp2[a[i - 1]]--;
            if (mp[a[i - 1]] && mp2[a[i - 1]] < mp[a[i - 1]])
                cnt--;

            mp2[a[j]]++;
            if (mp[a[j]] && mp2[a[j]] <= mp[a[j]])
                cnt++;

            if (cnt >= k)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
