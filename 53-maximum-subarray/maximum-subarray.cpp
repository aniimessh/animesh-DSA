class Solution {
public:
    int maxSumArrayHelper(vector<int>& v, int start, int end) {
        if (start == end)
            return v[start];
        int maxLeft = INT_MIN, maxRIght = INT_MIN;
        int mid = start + (end - start) / 2;

        int leftSum = maxSumArrayHelper(v, start, mid);
        int rightum = maxSumArrayHelper(v, mid + 1, end);

        int leftBorderSum = 0, rightBorderSum = 0;
        for (int i = mid; i >= start; i--) {
            leftBorderSum += v[i];
            if (leftBorderSum > maxLeft)
                maxLeft = leftBorderSum;
        }
        for (int i = mid + 1; i <= end; i++) {
            rightBorderSum += v[i];
            if (rightBorderSum > maxRIght)
                maxRIght = rightBorderSum;
        }
        int crossBorderSum = maxLeft + maxRIght;
        return max(leftSum, max(rightum, crossBorderSum));
    }

    int maxSubArray(vector<int>& nums) {
        return maxSumArrayHelper(nums, 0, nums.size() - 1);
    }
};