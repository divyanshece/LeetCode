class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>arr;
        vector<int>ans;
        for(int i = 0; i<nums.size(); i++) {
            for(int j = 0; j<nums[i].size(); j++) {
                arr.push_back(nums[i][j]);
            }
        }
        unordered_map<int,int>freq;
        for(int i = 0; i<arr.size(); i++) {
            freq[arr[i]]++;
        }

        for(auto x: freq) {
            if(x.second>=nums.size()) {
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};