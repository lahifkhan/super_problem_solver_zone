#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> s;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mx) { 
            cout << i + 1 << endl; 
            return;
        }
        s.insert(arr[i]);
        while (s.count(mx)) {
            mx++;
        }
    }

    cout << -1 << endl; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
