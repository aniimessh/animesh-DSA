class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int xor = 0;
        for(int ele: nums){
            xor = xor^ele;
        }
        for(int i=0;i<=n;i++){
            xor = xor^i;
        }
        return xor;
    }
}