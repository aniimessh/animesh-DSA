class Solution {
public:
    int divideUsingBinary(int dividend, int divisor){
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        long int start = 0;
        long int end = abs(dividend);
        long int mid = start + (end - start) / 2;
        long int ans = 0;
        while(start<=end){
            if(abs(mid*divisor) == abs(dividend)){
                ans = mid;
                break;  
            }else if(abs(mid*divisor) <= abs(dividend)){
                ans = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        if((divisor<0 && dividend<0) || (dividend>0) && divisor >0){
            return ans;
        }else{
            return -ans;
        }
    }

    int divide(int dividend, int divisor) {
        return divideUsingBinary(dividend, divisor);
    }
};