class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = INT_MAX;
        int diff = -1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<=min) {
                min = nums[i];
            }
            else {
                diff = max(diff, nums[i]-min);
            }
        }
        return diff;   
    }
};

//Wrong solution -->one test case not working

// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         // sort(nums.begin(), nums.end());
//         int diff = -1;
//         for(int i=0;i<nums.size()-1;i++) {
//             for(int j=i+1;j<nums.size();j++) {
//                 diff = max(diff, nums[j]-nums[i]);
//             }
//         }
//         return diff;
        
//     }
// };