class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x - 1;
        long int mid = start + (end - start) / 2;
        long int ans = 0;
        while(start<=end){
            if(x == 1) return 1;
            if(mid*mid>x){
                end=mid - 1;
            }else{
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};