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
vector<string> vec = {"BG", "BR", "BY", "GR", "GY", "RY"};

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) {
        
        int n, q;
        cin >> n >> q;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> mp(6);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == "BG")
                mp[0].push_back(i);
            if (a[i] == "BR")
                mp[1].push_back(i);
            if (a[i] == "BY")
                mp[2].push_back(i);
            if (a[i] == "GR")
                mp[3].push_back(i);
            if (a[i] == "GY")
                mp[4].push_back(i);
            if (a[i] == "RY")
                mp[5].push_back(i);
        }
     
        while (q--)
        {
            int i, j;
            cin >> i >> j;
            i--;
            j--;
            set<char> stt;
            for (auto ch : a[j])
                stt.insert(ch);
            for (auto ch : a[i])
                stt.insert(ch);
            if (stt.size() < 4)
            {
                cout << abs(i - j) << '\n';
                continue;
            }
            if (j < i)
                swap(i, j);
            int l = -1, r = n;
            for (int k = 0; k < 6; k++)
            {
                string str = vec[k];
                if (str == a[i] || str == a[j])
                    continue;
                auto it = lower_bound(mp[k].begin(), mp[k].end(), i);
                if (it != mp[k].begin())
                {
                    it--;
                    l = max(l, *it);
                }
     
                it = upper_bound(mp[k].begin(), mp[k].end(), i);
                if (it != mp[k].end())
                {
                    r = min(r, *it);
                }
            }
            if (l == -1 && r == n)
            {
                cout << "-1\n";
            }
            else if (l == -1)
            {
                cout << abs(i - r) + abs(j - r) << '\n';
            }
            else if (r == n)
            {
                cout << abs(i - l) + abs(j - l) << '\n';
            }
            else
            {
                int ans = min(abs(i - l) + abs(j - l), abs(i - r) + abs(j - r));
                cout << ans << '\n';
            }
        }
        
    }

    return 0;
}
