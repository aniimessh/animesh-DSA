class Solution {
public:
    void permuteUniqueHelper(vector<int>& nums, vector<vector<int>>&ans, int start){
        // base case
        if(start == nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_map<int, bool>visited;
        for(int i=start;i<nums.size();i++){
            if(visited.find(nums[i]) != visited.end(nums[i])){
                continue;
            }
            visited[nums[i]] = true;
            swap(nums[i], nums[start]);
            permuteUniqueHelper(nums, ans, start+1);
            swap(nums[i], nums[start]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        permuteUniqueHelper(nums, ans, 0);
        return ans;
    }
};