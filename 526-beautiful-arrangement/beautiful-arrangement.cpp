class Solution {
public:
    void countArrangementHelper(vector<int>&v, int&ans, int&n, int currentValue){
        // base case
        if(currentValue == n+1){
            ++ans;
            return;
        }

        for(int i=1;i<=n;i++){
            if(v[i] == 0 && (currentValue % i == 0 || i % currentValue == 0)){
                v[i] = currentValue;
                countArrangementHelper(v, ans, n, currentValue+1);
                v[i] = 0;
            }
        }
    }

    int countArrangement(int n) {
        vector<int>v(n+1);
        int ans=0;
        countArrangementHelper(v, ans, n, 1);
        return ans;
    }
};