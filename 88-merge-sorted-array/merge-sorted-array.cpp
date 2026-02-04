class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        int left = m - 1;
        int right = 0;
        while (left >= 0 && right < n) {
            if (num1[left] > num2[right]) {
                swap(num1[left], num2[right]);
                left--;
                right++;
            } else {
                break;
            }
        }

        sort(num1.begin(), num1.begin() + m);
        sort(num2.begin(), num2.end());
        for (int i = 0; i < n; i++) {
            num1[m + i] = num2[i];
        }
    }
};