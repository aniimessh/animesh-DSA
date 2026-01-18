class Solution {
public:
    int reverse(int x) {
        if(x > INT_MAX || x< INT_MIN) return 0;
        long long rev = 0;
        while(x){
            int lastDigit = x % 10;
            x = x / 10;
            if(rev > INT_MAX / 10 || (rev > INT_MAX / 10 && lastDigit > 7)){
                return 0;
            }
            if(rev < INT_MIN / 10 || (rev < INT_MIN / 10 && lastDigit < 8)){
                return 0;
            }
            rev = rev*10+lastDigit;
        }
        return rev;
    }
};