class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1; i>=1; i--) {
            for(int j=0; j<i; j++) {
                nums[j] = (nums[j] + nums[j+1])%10;
            }
        }
        return nums[0];
        
    }
};


// Brute force approach according to the flow of the question 
// class Solution {
// public:
//     int triangularSum(vector<int>& nums) {
//         while(nums.size()>=1) {
//             if(nums.size()==1) {
//                 return nums[0];
//             }
//             int n = nums.size();
//             vector<int>newNums(n-1);
//             for(int i=0; i<newNums.size(); i++) {
//                 newNums[i] = (nums[i] + nums[i+1]) % 10;
//             }
//             nums = newNums;
//         }
//         return nums[0];
        
        
//     }
// };