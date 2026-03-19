class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        vector<int>ls;
        map<int, int>mpp;
        int n = arr.size();
        int mini = (int)(n/3)+1;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
            if(mpp[arr[i]] == mini){
                ls.push_back(arr[i]);
            }
            if(ls.size() > 3) break;
        }
        sort(arr.begin(), arr.end());
        return ls;
    }
};