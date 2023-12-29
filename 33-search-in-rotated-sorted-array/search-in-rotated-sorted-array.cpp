class Solution {
public:
    int pivotElement(vector<int> arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end) {
            if (start == end)
                return start;
            if (mid + 1 <= end && arr[mid] > arr[mid + 1])
                return mid;
            if (mid - 1 >= start && arr[mid - 1] > arr[mid])
                return mid - 1;
            if (arr[start] > arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
            mid = start + (end - start) / 2;
        }
        return -1;
    }

    int binarySearch(vector<int>arr, int start, int end, int target){
        int mid = start + (end - start) / 2;
        while(start <= end){
            if(arr[mid] == target) return mid;
            if(arr[mid] >  target)  end = mid - 1;
            else start = mid + 1;
            mid = start + (end - start) / 2;
        }
        return -1;
    }

        int search(vector<int>& nums, int target) {
        int pivotIndex = pivotElement(nums);
        int ans = 0;
        if (target >= nums[0] && target <= nums[pivotIndex]) {
            ans =  binarySearch(nums, 0, pivotIndex, target);
        }else{
            ans  = binarySearch(nums, pivotIndex+1, nums.size() - 1, target);
        }
        return ans;
    }
};