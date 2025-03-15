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

// Function to compute sum of digits of a number
int digit_sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> ar(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
        }

        set<int> st;  // Track indices that might need further updates
        for (int i = 1; i <= n; i++) {
            st.insert(i);
        }

        while (q--) {
            int type;
            cin >> type;

            if (type == 1) {
                int l, r;
                cin >> l >> r;

                auto it = st.lower_bound(l);
                vector<int> toRemove;  // Store indices to remove from set

                while (it != st.end() && *it <= r) {
                    int index = *it;
                    ar[index] = digit_sum(ar[index]);

                    if (ar[index] < 10) {  // Once reduced to a single digit, stop updating
                        toRemove.push_back(index);
                    }
                    it++;
                }

                // Remove indices that no longer need updates
                for (int idx : toRemove) {
                    st.erase(idx);
                }
            } 
            else {
                int x;
                cin >> x;
                cout << ar[x] << endl;
            }
        }
    }

    return 0;
}
