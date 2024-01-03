class Solution {
public:
    int expandAroundIndex(string s, int i, int j){
        int count=0;
        while(i >=0 && j < s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i=0;i<s.length();i++){
            int oddAns = expandAroundIndex(s, i, i);
            count += oddAns;
            int evenAns = expandAroundIndex(s, i, i+1);
            count += evenAns;
        }  
        return count; 
    }
};