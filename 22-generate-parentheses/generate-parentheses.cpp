class Solution {
public:
    void solve(vector<string> &ans, int n, int open, int close, string output){
        // base case
        if(open == 0 && close==0){
            ans.push_back(output);
            return;
        }
        if(open > 0){
            output.push_back('(');
            solve(ans, n, open-1, close, output);
            output.pop_back();
        }

        if(close > open){
            output.push_back(')');
            solve(ans, n, open, close-1, output);
            output.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open = n;
        int close = n;
        string output = "";
        solve(ans, n, open, close, output);
        return ans;
    }
};