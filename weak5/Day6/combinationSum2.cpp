class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(int i, vector<int>& arr, vector<int>& temp, int target) {
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        
        if(target < 0 || i == arr.size()) 
            return;
        
        for(int j = i; j < arr.size(); j++) {
            
            if(j > i && arr[j] == arr[j - 1]) 
                continue;
            
            temp.push_back(arr[j]);
            solve(j + 1, arr, temp, target - arr[j]); 
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> temp;
        
        sort(candidates.begin(), candidates.end()); 
        solve(0, candidates, temp, target);
        
        return ans;
    }
};
