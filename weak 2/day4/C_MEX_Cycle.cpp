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

int findMEX(const set<int> &values) {
    int mex = 0;
    while (values.count(mex)) {
        ++mex;
    }
    return mex;
}


vector<int> assign(int n, int x, int y) {
    vector<int> a(n, -1);
    vector<set<int>> fr(n);

    for (int i = 0; i < n; i++) {
        fr[i].insert((i + 1) % n);
        fr[i].insert((i - 1 + n) % n);
    }

    x--; y--; 
    fr[x].insert(y);
    fr[y].insert(x);

    for (int i = 0; i < n; i++) {
        set<int> next;
        for (int find : fr[i]) {
            if (a[find] != -1) {
                next.insert(a[find]);
            }
        }
        a[i] = findMEX(next);
    }

    return a;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> ans = assign(n, x, y);

        for (auto val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
