class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            int new_index = (i+k)%n;
            ans[new_index] = nums[i];
            
        }
        nums = ans;
    }
};