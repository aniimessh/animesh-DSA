class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n{};
        for(int i{};i<nums.size();i++){
            if(nums[i]== val){
                n++;
                nums[i] = '_'; // can assign any values >50
            }    
           
        }
        sort(nums.begin(),nums.end());
            return nums.size()-n;
    }
};