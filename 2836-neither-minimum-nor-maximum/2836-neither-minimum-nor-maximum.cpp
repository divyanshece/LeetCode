class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n>2) {
            sort(nums.begin(), nums.end());
            return nums[1];
        }
        return -1;
        
    }
};