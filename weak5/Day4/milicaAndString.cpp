#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;

        for (auto c : s) {
            if (c == 'B') cnt++;
        }

        if (cnt == k) {
            cout << 0 << endl;
        } 
        else if (cnt > k) {
            int x = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'B') {
                    cnt--;
                    x = i + 1; 
                }
                if (cnt == k) {
                    break;
                }
            }
            cout << 1 << endl;
            cout << x << " A" << endl;
        } 
        else {
            int x = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'A') {
                    cnt++;
                    x = i + 1; 
                }
                if (cnt == k) {
                    break;
                }
            }
            cout << 1 << endl;
            cout << x << " B" << endl;
        }
    }
    return 0;
}
