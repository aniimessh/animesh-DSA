class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (cnt1 == 0 && el2 != arr[i]) {
                cnt1 = 1;
                el1 = arr[i];
            } else if (cnt2 == 0 && el1 != arr[i]) {
                cnt2 = 1;
                el2 = arr[i];
            } else if (arr[i] == el1)
                cnt1++;
            else if (arr[i] == el2)
                cnt2++;
            else
                cnt1--, cnt2--;
        }
        vector<int> ls;
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (el1 == arr[i])
                cnt1++;
            if (el2 == arr[i])
                cnt2++;
        }
        int mini = (int)(arr.size() / 3) + 1;
        if (cnt1 >= mini)
            ls.push_back(el1);
        if (cnt2 >= mini)
            ls.push_back(el2);
        sort(ls.begin(), ls.end());
        return ls;

        // vector<int>ls;
        // map<int, int>mpp;
        // int n = arr.size();
        // int mini = (int)(n/3)+1;
        // for(int i=0;i<n;i++){
        //     mpp[arr[i]]++;
        //     if(mpp[arr[i]] == mini){
        //         ls.push_back(arr[i]);
        //     }
        //     if(ls.size() > 3) break;
        // }
        // sort(arr.begin(), arr.end());
        // return ls;
    }
};