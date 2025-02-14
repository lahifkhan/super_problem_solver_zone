

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        backtrack(res, temp, nums, 0);
        return res;
    }

private:
    void recurs(vector<vector<int>>& res, vector<int>& temp, vector<int>& nums, int st) {
        if (find(res.begin(), res.end(), temp) == res.end()) {
            res.push_back(temp);
        }
        for (int i = st; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            recurs(res, temp, nums, i + 1);
            temp.pop_back();
        }
    }
};