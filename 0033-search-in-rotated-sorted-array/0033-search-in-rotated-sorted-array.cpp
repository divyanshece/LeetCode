class Solution {
public:
    int findpivotIndex(vector<int> &arr ) {
        int low = 0;
        int high = arr.size()-1;
        int mid;
        int start = 0;
        while(low<=high) {
            mid = low + (high-low)/2;

            if(low==high) {
                return low;
            }
            else if (mid+1 < arr.size() && arr[mid]>arr[mid+1]) {
                return mid;
            }
            else if (mid-1>=0 && arr[mid]<arr[mid-1]) {
                return mid-1;
            }
            else if (arr[start]>arr[mid]) {
                high = mid -1;
            }
            else {
                low = mid +1;
            }
        }
        return -1;
    }
    int binarySearch(vector<int>& arr, int low, int high, int target) {
        int mid;
        while (low<=high) {
            mid = low + (high-low)/2;

            if(arr[mid]==target) {
                return mid;
            }
            else if (arr[mid]<target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1;
 
    }
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int pivotIndex = findpivotIndex(nums);

        if(target>=nums[0] && target<=nums[pivotIndex]) {
            ans = binarySearch(nums, 0, pivotIndex, target);
        }
        else {
            ans = binarySearch(nums, pivotIndex+1, nums.size()-1, target);
        }
        return ans;

        
    }
};