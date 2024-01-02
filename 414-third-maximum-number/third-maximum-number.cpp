class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> num_set(nums.begin(), nums.end());
        if(num_set.size() < 3){
            return *num_set.rbegin();
        }
        auto it = num_set.rbegin();
        advance(it, 2);
        return *it;
    }
};