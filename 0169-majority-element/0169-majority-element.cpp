class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        for(int i:nums) {
            freq[i]++;
        }
        for(int i=0;i<nums.size();i++) {
            if(freq[nums[i]]>(nums.size()/2)) {
                return nums[i];
            }
        }
        return -1;


    }
};