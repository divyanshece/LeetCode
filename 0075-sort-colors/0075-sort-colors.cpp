class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int i = 0 ;
        while (i<=high) {
            if (nums[i] == 1) {
                i++;
            }
            else if(nums[i]==0) {
                swap(nums[low],nums[i]);
                low++;
                i++;
            }
            else {
                swap(nums[i],nums[high]);
                high--;
            }
        }
    }
};