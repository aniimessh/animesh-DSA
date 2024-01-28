class Solution {
public:
    bool isPalindrome(int n) {
        long long newN = 0;
        int dup = n;
        if (n < 0) {
            return false;
        }
        while (n) {
            int lastDigit = n % 10;
            newN = newN*10 + lastDigit;
            n = n /10;
        }
        if(newN == dup){
            return true;
        }else{
            return false;
        }
    }
};