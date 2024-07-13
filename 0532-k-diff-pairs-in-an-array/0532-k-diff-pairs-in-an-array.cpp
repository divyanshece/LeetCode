class Solution {
public:

    int bs(vector<int> & nums, int start, int target) {
            int high = nums.size()-1;
            while (start <= high) {
                int mid = start + (high - start) / 2;
                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] < target) {
                    start = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            return -1;
        }

    int findPairs(vector<int>& nums, int k) {
        set<pair<int, int>> ans;
        sort(nums.begin(), nums.end());
    
        

        for (int i = 0; i < nums.size(); i++) {
            
            if (bs(nums,i+1,nums[i] + k) != -1) {
                ans.insert({nums[i], nums[i]+k});
            }
        }
        return ans.size();
    }
};