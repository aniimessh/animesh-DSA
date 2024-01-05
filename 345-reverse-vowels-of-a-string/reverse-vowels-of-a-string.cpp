class Solution {
public:
    bool isVowel(char ch1){
        if((ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u') || ch1 == 'A' || ch1 == 'E' || ch1 == 'I' || ch1 == 'O' || ch1 == 'U'){
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int l = 0;
        int h = s.size();
        while(l<=h){
            if(isVowel(s[l]) && isVowel(s[h])){
                swap(s[l], s[h]);
                l++, h--;
            }else if(!isVowel(s[l])){
                l++;
            }else{
                h--;
            }
        }
        return s;
    }
};