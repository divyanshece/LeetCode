class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for (int i = 0;i<nums.size();i++) {
            if (j==0 || j ==1 || nums[j-2]!=nums[i]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};