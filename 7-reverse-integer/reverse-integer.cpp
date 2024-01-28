class Solution {
public:
    int reverse(int x) {
        long revNum = 0;
        while(x){
            int lastDigit = x % 10;
            revNum = revNum*10 + lastDigit;
            x = x / 10;
        }
        if (revNum < INT_MIN || revNum > INT_MAX) return 0;
        return revNum;
    }
};