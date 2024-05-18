class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(st.empty()){
                st.push(ch);
            }else if(st.top() == ch && !st.empty()){
                st.pop();
            }else{
                st.push(ch);
            }
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};