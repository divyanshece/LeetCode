class Solution {
public:
    vector<int> mini(vector<int> nums) {
        int min_no = nums[0];
        int min_index = 0;
        vector<int> arr;
        arr.push_back(0);
        arr.push_back(0);
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]<min_no) {
                min_no = nums[i];
                min_index = i;
            }
        }
        arr[0] = min_no;
        arr[1] = min_index;
        return arr;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int>arr;
        int min_no;
        int min_index;
        while(k) {
            arr = mini(nums);
            min_no = arr[0];
            min_index = arr[1];
            min_no = min_no * multiplier;
            nums[min_index] = min_no;
            k--;
        }
        return nums;

        
    }
};