class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>map;
        for(int i=0;i<nums.size();i++) {
            map[nums[i]]++;
        }
        for(int j=0;j<nums.size();j++) {
            if(map[nums[j]]>=2) {
                return true;
            }
        }
        return false;
        
    }
};