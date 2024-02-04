class Solution {
public:
    bool canDistributeHelper(vector<int>& counts, vector<int>& quantity, int customer){
        // base case
        if(customer == quantity.size()){
            return true;
        }

        for(int i=0;i<counts.size();i++){
            if(counts[i] >= quantity[customer]){
                counts[i] -= quantity[customer];
                if(canDistributeHelper(counts, quantity, customer+1)){
                    return true;
                }
                counts[i] += quantity[customer];
            }
        }
        return false;
    }

    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int>countMap;
        for(auto num:nums){
            countMap[num]++;
        }
        vector<int>counts;
        for(auto it:countMap){
            counts.push_back(it.second);
        }
        sort(quantity.rbegin(), quantity.rend());
        return canDistributeHelper(counts, quantity, 0);
    }
};