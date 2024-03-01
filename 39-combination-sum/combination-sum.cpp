class Solution {
public:
    void combinationSumHelper(vector<int>& candidates, int target,
                              vector<vector<int>>& ans, vector<int>& v,
                              int index) {
        //   base case
        if (target == 0) {
            ans.push_back(v);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = index; i < candidates.size(); i++) {
            v.push_back(candidates[i]);
            combinationSumHelper(candidates, target - candidates[i], ans, v, i);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        combinationSumHelper(candidates, target, ans, v, 0);
        return ans;
    }
};