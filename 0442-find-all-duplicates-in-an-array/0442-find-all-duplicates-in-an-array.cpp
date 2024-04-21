class Solution {
 public:
  vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;

    for (int i=0;i<nums.size();i++) {
        nums[abs(nums[i]) - 1] *= -1;
        if (nums[abs(nums[i]) - 1] > 0)
        duplicates.push_back(abs(nums[i]));
    }

    return duplicates;
  }
};