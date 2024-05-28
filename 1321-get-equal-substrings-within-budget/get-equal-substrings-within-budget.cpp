class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int len = s.size();
        int ans = -1;
        int val = 0;
        int left = 0;
        for(int i=0;i<len;i++){
            val +=abs(s[i] - t[i]);
            while(val > maxCost){
                val -= abs(s[left] - t[left]);
                left++;
            }
            ans = max(ans, i - left + 1);
        } 
        return ans;
    }
};