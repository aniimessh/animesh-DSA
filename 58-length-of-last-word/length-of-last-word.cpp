class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(" ") + 1);
        s.erase(0, s.find_first_not_of(" "));
        string last = s.substr(s.find_last_of(' ') + 1);
        int n = last.length();
        return n;
    }
};