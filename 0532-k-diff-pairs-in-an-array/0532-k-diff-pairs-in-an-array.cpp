class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int diff;
        int i = 0;
        int j = 1;
        set<pair<int,int>>ans;

        while (j < n) {

            diff = nums[j] - nums[i];

            if (diff == k) {
                ans.insert({nums[i], nums[j]});
                i++;
                j++;
            } else if (diff > k) {
                i++;
            } else {
                j++;
            }
            if (i == j)
                j++;
        }
        return ans.size();
    }
};