class Solution {
    public int search(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        int mid = (start+end) / 2;
        while(start <= end){
            if(arr[mid] == target){
                return mid;
            }
            if(target > arr[mid]){
                start = mid+1;
            }else{
                end = mid-1;
            }
            mid = (start+end) / 2;
        }
        return -1;
    }
}