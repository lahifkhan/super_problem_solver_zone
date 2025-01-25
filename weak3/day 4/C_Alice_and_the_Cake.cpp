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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }

        ll sum = 0;
        map<ll, int> mp;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
            sum += a[i];
        }

        priority_queue<ll> pq;
        pq.push(sum);

        while (!pq.empty()) {
            ll to_split = pq.top();
            pq.pop();

            ll x = to_split / 2;
            ll y = to_split - x;

            if (mp[x] > 0) {
                mp[x]--;
            } else if (mp[x] == 0 && x > 1) {
                pq.push(x);
            }

            if (mp[y] > 0) {
                mp[y]--;
            } else if (mp[y] == 0 && y > 1) {
                pq.push(y);
            }

            if (pq.size() > n + 2) {
                possible = false;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (mp[a[i]] > 0) {
                possible = false;
                break;
            }
        }

       if(possible){
        cout << "YES" << endl;
       }
       else{
        cout <<"NO" << endl;
       }
    }

    return 0;
}
