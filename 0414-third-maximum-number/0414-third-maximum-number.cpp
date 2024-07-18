class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<int> set(nums.begin(), nums.end());
        vector<int> arr(set.begin(), set.end());
        int n = arr.size();
        if(n<3) {
            return arr[n-1];
        }
        int ans = arr[n-3];
        return ans;
        
    }
};