class Solution {
public:
    bool isAnagram(string s, string t) {
        // brute force approach
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t){
        //     return true;
        // }
        // return false;

        // counting approach
        int arr[256] = {0};
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            arr[t[i]]--;
        }

        for(int i=0;i<255;i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};