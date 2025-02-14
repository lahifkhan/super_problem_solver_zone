class Solution {
public:
   bool check(string& s, int l, int r) {
      while (l <= r) {
         if (s[l++] != s[r--]) {
            return false;
         }
      }
      return true;
   }

   void f(int idx, vector<vector<string>>& res, vector<string>& a, string& s,
      int n) {
      if (idx == n) {
         res.push_back(a);
         return;
      }

      for (int i = idx; i < n; i++) {
         if (check(s, idx, i)) {
            a.push_back(s.substr(idx, i - idx + 1));
            f(i + 1, res, a, s, n);
            a.pop_back();
         }
      }
   }

   vector<vector<string>> partition(string s) {
      vector<vector<string>> res;
      vector<string> a;
      int n = s.size();
      f(0, res, a, s, n);
      return res;
   }
};