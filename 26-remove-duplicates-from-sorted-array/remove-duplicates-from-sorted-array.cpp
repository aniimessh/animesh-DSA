class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(int j =1;j<n;j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;


        // BRUTE FORCE
        // set<int>st;
        // for(int i=0;i<n;i++){
        //     st.insert(nums[i]);
        // }
        // int index = 0;
        // for(auto it: st){
        //     nums[index]  =it;
        //     index++;
        // }
        // return index;
    }
};