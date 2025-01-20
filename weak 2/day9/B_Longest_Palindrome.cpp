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

bool check(const string &str) {
    int l = 0, r = str.size() - 1;
    while (l < r) {
        if (str[l] != str[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    fastio();

    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    set<string> st1, st2;
    string f = "", lst = "", mid = "";

    for (const string &str : arr) {
        string revStr = str;
        reverse(all(revStr));

        if (st1.find(str) == st1.end() && st1.find(revStr) == st1.end()) {
            st1.insert(str);
        } else if (st1.find(revStr) != st1.end() && st2.find(str) == st2.end()) {
            st2.insert(str);
        }
    }

    for (const string &key : st2) {
        string rev = key;
        reverse(all(rev));
        if (st1.find(rev) != st1.end()) {
            f += key;
            lst = rev + lst;
        }
    }

    for (const string &key : st1) {
        if (st2.find(key) == st2.end()) {
            if (check(key)) {
                mid = key;
                break;
            }
        }
    }

    string ans = f + mid + lst;
    cout << ans.size() << endl;
    cout << ans << endl;


    return 0;
}
