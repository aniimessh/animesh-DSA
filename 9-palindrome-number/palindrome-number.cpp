class Solution {
public:
    bool isPalindrome(int x) {
        int copyX = x;
        if(x < 0) return false;
        long revNum = 0;
        while(x != 0){
            int ld = x % 10;
            revNum = (revNum*10) + ld;
            x = x/10;
        }
        if(revNum == copyX) return true;
        else return false;
    }
};