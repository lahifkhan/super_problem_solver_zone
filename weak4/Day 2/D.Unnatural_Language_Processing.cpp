#include <bits/stdc++.h>
using namespace std;

bool isC(char c) { return (c == 'b' || c == 'c' || c == 'd'); }

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<string> ans;

  for (int i = 0; i < n; i++) {
    if (isC(s[i]) && (i + 1 < n && !isC(s[i + 1]))) {
      ans.push_back(string(1, s[i]) + s[i + 1]);
      i++;
    } else {
      ans.back() += s[i];
    }
  }

  for (int i = 0; i < ans.size(); i++) {
    if (i) cout << ".";
    cout << ans[i];
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}
